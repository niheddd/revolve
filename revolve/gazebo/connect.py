import trollius
from trollius import From, Return
import pygazebo
from pygazebo.msg import request_pb2, response_pb2

# Default connection address to keep things DRY. This is an array
# rather than a tuple, so it is writeable as long as you change
# the separate elements.
default_address = ["127.0.0.1", 11345]

@trollius.coroutine
def connect(address=default_address):
    manager = yield From(pygazebo.connect(address=tuple(address)))
    raise Return(manager)


class RequestHandler(object):
    """
    Utility class to send `Request` messages and accept
    responses to them.
    """

    def __init__(self, manager):
        """
        :param manager:
        :return:
        """
        self.manager = manager
        self.responses = {}
        self.callbacks = {}
        self.publisher = None

    def _initialize(self):
        """
        :return:
        """
        if self.publisher is not None:
            raise Return(None)

        self.manager.subscribe('/gazebo/default/response', self._callback)
        self.publisher = yield From(self.manager.advertise(
            '/gazebo/default/request'))

    def _callback(self, data):
        """
        :param data:
        :return:
        """
        msg = response_pb2.Response()
        msg.ParseFromString(data)

        if msg.id not in self.responses:
            # Message was not requested here, ignore it
            return

        self.responses[msg.id] = msg

        # If a callback is registered, use it
        if self.callbacks[msg.id] is not None:
            self.callbacks[msg.id](msg)

    def get_response(self, msg_id):
        """
        :param msg_id:
        :return:
        """
        return self.responses.get(msg_id, None)

    def handled(self, msg_id):
        """
        Deletes a message from the current response history.
        :param msg_id:
        :return:
        """
        del self.responses[msg_id]
        del self.callbacks[msg_id]

    @trollius.coroutine
    def do_request(self, msg_id, data=None, dbl_data=None, callback=None):
        """
        Coroutine to perform a request.

        :param msg_id:
        :param data:
        :param dbl_data:
        :param callback:
        :return:
        """
        if msg_id in self.responses:
            raise RuntimeError("Duplicate request ID: %s" % msg_id)

        yield From(self._initialize())
        req = request_pb2.Request()
        req.id = msg_id

        if data is not None:
            req.data = data

        if dbl_data is not None:
            req.dbl_data = dbl_data

        self.responses[msg_id] = None
        self.callbacks[msg_id] = callback
        yield From(self.publisher.publish(req))
