# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:action/RobotCoordinate.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x_coordinate_order'
# Member 'y_coordinate_order'
# Member 'z_coordinate_order'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotCoordinate_Goal(type):
    """Metaclass of message 'RobotCoordinate_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_Goal(metaclass=Metaclass_RobotCoordinate_Goal):
    """Message class 'RobotCoordinate_Goal'."""

    __slots__ = [
        '_x_coordinate_order',
        '_y_coordinate_order',
        '_z_coordinate_order',
    ]

    _fields_and_field_types = {
        'x_coordinate_order': 'sequence<float>',
        'y_coordinate_order': 'sequence<float>',
        'z_coordinate_order': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_coordinate_order = array.array('f', kwargs.get('x_coordinate_order', []))
        self.y_coordinate_order = array.array('f', kwargs.get('y_coordinate_order', []))
        self.z_coordinate_order = array.array('f', kwargs.get('z_coordinate_order', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x_coordinate_order != other.x_coordinate_order:
            return False
        if self.y_coordinate_order != other.y_coordinate_order:
            return False
        if self.z_coordinate_order != other.z_coordinate_order:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_coordinate_order(self):
        """Message field 'x_coordinate_order'."""
        return self._x_coordinate_order

    @x_coordinate_order.setter
    def x_coordinate_order(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_coordinate_order' array.array() must have the type code of 'f'"
            self._x_coordinate_order = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'x_coordinate_order' field must be a set or sequence and each value of type 'float'"
        self._x_coordinate_order = array.array('f', value)

    @property
    def y_coordinate_order(self):
        """Message field 'y_coordinate_order'."""
        return self._y_coordinate_order

    @y_coordinate_order.setter
    def y_coordinate_order(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_coordinate_order' array.array() must have the type code of 'f'"
            self._y_coordinate_order = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'y_coordinate_order' field must be a set or sequence and each value of type 'float'"
        self._y_coordinate_order = array.array('f', value)

    @property
    def z_coordinate_order(self):
        """Message field 'z_coordinate_order'."""
        return self._z_coordinate_order

    @z_coordinate_order.setter
    def z_coordinate_order(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'z_coordinate_order' array.array() must have the type code of 'f'"
            self._z_coordinate_order = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'z_coordinate_order' field must be a set or sequence and each value of type 'float'"
        self._z_coordinate_order = array.array('f', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_Result(type):
    """Metaclass of message 'RobotCoordinate_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_Result(metaclass=Metaclass_RobotCoordinate_Result):
    """Message class 'RobotCoordinate_Result'."""

    __slots__ = [
        '_rpm_result',
    ]

    _fields_and_field_types = {
        'rpm_result': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rpm_result = kwargs.get('rpm_result', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rpm_result != other.rpm_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rpm_result(self):
        """Message field 'rpm_result'."""
        return self._rpm_result

    @rpm_result.setter
    def rpm_result(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rpm_result' field must be of type 'float'"
        self._rpm_result = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_Feedback(type):
    """Metaclass of message 'RobotCoordinate_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_Feedback(metaclass=Metaclass_RobotCoordinate_Feedback):
    """Message class 'RobotCoordinate_Feedback'."""

    __slots__ = [
        '_rpm_feedback',
    ]

    _fields_and_field_types = {
        'rpm_feedback': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rpm_feedback = kwargs.get('rpm_feedback', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rpm_feedback != other.rpm_feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rpm_feedback(self):
        """Message field 'rpm_feedback'."""
        return self._rpm_feedback

    @rpm_feedback.setter
    def rpm_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rpm_feedback' field must be of type 'float'"
        self._rpm_feedback = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_SendGoal_Request(type):
    """Metaclass of message 'RobotCoordinate_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__send_goal__request

            from tutorial_interfaces.action import RobotCoordinate
            if RobotCoordinate.Goal.__class__._TYPE_SUPPORT is None:
                RobotCoordinate.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_SendGoal_Request(metaclass=Metaclass_RobotCoordinate_SendGoal_Request):
    """Message class 'RobotCoordinate_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'tutorial_interfaces/RobotCoordinate_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tutorial_interfaces', 'action'], 'RobotCoordinate_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Goal
        self.goal = kwargs.get('goal', RobotCoordinate_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Goal
            assert \
                isinstance(value, RobotCoordinate_Goal), \
                "The 'goal' field must be a sub message of type 'RobotCoordinate_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_SendGoal_Response(type):
    """Metaclass of message 'RobotCoordinate_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_SendGoal_Response(metaclass=Metaclass_RobotCoordinate_SendGoal_Response):
    """Message class 'RobotCoordinate_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RobotCoordinate_SendGoal(type):
    """Metaclass of service 'RobotCoordinate_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_coordinate__send_goal

            from tutorial_interfaces.action import _robot_coordinate
            if _robot_coordinate.Metaclass_RobotCoordinate_SendGoal_Request._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_SendGoal_Request.__import_type_support__()
            if _robot_coordinate.Metaclass_RobotCoordinate_SendGoal_Response._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_SendGoal_Response.__import_type_support__()


class RobotCoordinate_SendGoal(metaclass=Metaclass_RobotCoordinate_SendGoal):
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_SendGoal_Request as Request
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_GetResult_Request(type):
    """Metaclass of message 'RobotCoordinate_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_GetResult_Request(metaclass=Metaclass_RobotCoordinate_GetResult_Request):
    """Message class 'RobotCoordinate_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_GetResult_Response(type):
    """Metaclass of message 'RobotCoordinate_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__get_result__response

            from tutorial_interfaces.action import RobotCoordinate
            if RobotCoordinate.Result.__class__._TYPE_SUPPORT is None:
                RobotCoordinate.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_GetResult_Response(metaclass=Metaclass_RobotCoordinate_GetResult_Response):
    """Message class 'RobotCoordinate_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'tutorial_interfaces/RobotCoordinate_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tutorial_interfaces', 'action'], 'RobotCoordinate_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Result
        self.result = kwargs.get('result', RobotCoordinate_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Result
            assert \
                isinstance(value, RobotCoordinate_Result), \
                "The 'result' field must be a sub message of type 'RobotCoordinate_Result'"
        self._result = value


class Metaclass_RobotCoordinate_GetResult(type):
    """Metaclass of service 'RobotCoordinate_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_coordinate__get_result

            from tutorial_interfaces.action import _robot_coordinate
            if _robot_coordinate.Metaclass_RobotCoordinate_GetResult_Request._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_GetResult_Request.__import_type_support__()
            if _robot_coordinate.Metaclass_RobotCoordinate_GetResult_Response._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_GetResult_Response.__import_type_support__()


class RobotCoordinate_GetResult(metaclass=Metaclass_RobotCoordinate_GetResult):
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_GetResult_Request as Request
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCoordinate_FeedbackMessage(type):
    """Metaclass of message 'RobotCoordinate_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_coordinate__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_coordinate__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_coordinate__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_coordinate__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_coordinate__feedback_message

            from tutorial_interfaces.action import RobotCoordinate
            if RobotCoordinate.Feedback.__class__._TYPE_SUPPORT is None:
                RobotCoordinate.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotCoordinate_FeedbackMessage(metaclass=Metaclass_RobotCoordinate_FeedbackMessage):
    """Message class 'RobotCoordinate_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'tutorial_interfaces/RobotCoordinate_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tutorial_interfaces', 'action'], 'RobotCoordinate_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Feedback
        self.feedback = kwargs.get('feedback', RobotCoordinate_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Feedback
            assert \
                isinstance(value, RobotCoordinate_Feedback), \
                "The 'feedback' field must be a sub message of type 'RobotCoordinate_Feedback'"
        self._feedback = value


class Metaclass_RobotCoordinate(type):
    """Metaclass of action 'RobotCoordinate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.action.RobotCoordinate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__robot_coordinate

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from tutorial_interfaces.action import _robot_coordinate
            if _robot_coordinate.Metaclass_RobotCoordinate_SendGoal._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_SendGoal.__import_type_support__()
            if _robot_coordinate.Metaclass_RobotCoordinate_GetResult._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_GetResult.__import_type_support__()
            if _robot_coordinate.Metaclass_RobotCoordinate_FeedbackMessage._TYPE_SUPPORT is None:
                _robot_coordinate.Metaclass_RobotCoordinate_FeedbackMessage.__import_type_support__()


class RobotCoordinate(metaclass=Metaclass_RobotCoordinate):

    # The goal message defined in the action definition.
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Goal as Goal
    # The result message defined in the action definition.
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Result as Result
    # The feedback message defined in the action definition.
    from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from tutorial_interfaces.action._robot_coordinate import RobotCoordinate_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
