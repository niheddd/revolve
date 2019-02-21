"""
Revolve body generator based on RoboGen framework
"""
import yaml
from collections import OrderedDict

from .revolve_module import CoreModule
from .revolve_module import ActiveHingeModule
from .revolve_module import BrickModule
from .revolve_module import BrickSensorModule

class RevolveBot():
    """
    Basic robot description class that contains robot's body and/or brain
    structures, ID and several other necessary parameters. Capable of reading
    a robot's sdf mode
    """

    def __init__(self, id=None):
        self._body = None
        self._brain = None
        self._id = id
        self._parents = None
        self._fitness = None
        self._behavioural_measurement = None

    def measure_behaviour(self):
        """

        :return:
        """
        pass

    def measure_body(self):
        """

        :return:
        """
        pass

    def measure_brain(self):
        """

        :return:
        """
        pass

    def load(self, text, conf_type='yaml'):
        """
        Load robot's description from a string and parse it to Python structure
        :param text: Robot's description string
        :param type: Type of a robot's description format
        :return:
        """
        if 'yaml' == conf_type:
            self.load_yaml(text)
        elif 'sdf' == conf_type:
            raise NotImplementedError("Loading from SDF not yet implemented")

    def load_yaml(self, text):
        """
        Load robot's description from a yaml string
        :param text: Robot's yaml description
        """
        yaml_bot = yaml.safe_load(text)
        self._id = yaml_bot['id']
        self._body = CoreModule.FromYaml(yaml_bot['body'])

    def load_file(self, path, conf_type='yaml'):
        """
        Read robot's description from a file and parse it to Python structure
        :param path: Robot's description file path
        :param type: Type of a robot's description format
        :return:
        """
        with open(path, 'r') as robot_file:
            robot = robot_file.read()

        self.load(robot, conf_type)

    def to_sdf(self):
        """
        Converts yaml to sdf

        :return:
        """
        return ''

    def to_yaml(self):
        """
        Converts sdf to yaml

        :return:
        """
        yaml_dict = OrderedDict()
        yaml_dict['id'] = self._id
        yaml_dict['body'] = self._body.to_yaml()
        yaml_dict['brain'] = {} # TODO dump also brain

        return yaml.dump(yaml_dict)

    def save_file(self, path, type='yaml'):
        """
        Save robot's description on a given file path in a specified format
        :param path:
        :param type:
        :return:
        """
        robot = ''
        if 'yaml' == type:
            robot = self.to_yaml()
        elif 'sdf' == type:
            robot = self.to_sdf()

        with open(path, 'w') as robot_file:
            robot_file.write(robot)

    def update_substrate(self):
        """
        Update all coordinates for body components

        :return:
        """
        return ''

    def render2d(self):
        """

        :return:
        """
        raise NotImplementedError("Render2D not yet implemented")