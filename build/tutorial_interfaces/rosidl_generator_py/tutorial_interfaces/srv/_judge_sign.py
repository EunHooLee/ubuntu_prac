# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/JudgeSign.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JudgeSign_Request(type):
    """Metaclass of message 'JudgeSign_Request'."""

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
                'tutorial_interfaces.srv.JudgeSign_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__judge_sign__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__judge_sign__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__judge_sign__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__judge_sign__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__judge_sign__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JudgeSign_Request(metaclass=Metaclass_JudgeSign_Request):
    """Message class 'JudgeSign_Request'."""

    __slots__ = [
        '_a',
        '_b',
        '_c',
    ]

    _fields_and_field_types = {
        'a': 'int64',
        'b': 'int64',
        'c': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', int())
        self.b = kwargs.get('b', int())
        self.c = kwargs.get('c', int())

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
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.c != other.c:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'a' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._a = value

    @property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'b' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._b = value

    @property
    def c(self):
        """Message field 'c'."""
        return self._c

    @c.setter
    def c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'c' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'c' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._c = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_JudgeSign_Response(type):
    """Metaclass of message 'JudgeSign_Response'."""

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
                'tutorial_interfaces.srv.JudgeSign_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__judge_sign__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__judge_sign__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__judge_sign__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__judge_sign__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__judge_sign__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JudgeSign_Response(metaclass=Metaclass_JudgeSign_Response):
    """Message class 'JudgeSign_Response'."""

    __slots__ = [
        '_sum',
        '_sign',
    ]

    _fields_and_field_types = {
        'sum': 'int64',
        'sign': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = kwargs.get('sum', int())
        self.sign = kwargs.get('sign', bool())

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
        if self.sum != other.sum:
            return False
        if self.sign != other.sign:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def sum(self):
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sum = value

    @property
    def sign(self):
        """Message field 'sign'."""
        return self._sign

    @sign.setter
    def sign(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sign' field must be of type 'bool'"
        self._sign = value


class Metaclass_JudgeSign(type):
    """Metaclass of service 'JudgeSign'."""

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
                'tutorial_interfaces.srv.JudgeSign')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__judge_sign

            from tutorial_interfaces.srv import _judge_sign
            if _judge_sign.Metaclass_JudgeSign_Request._TYPE_SUPPORT is None:
                _judge_sign.Metaclass_JudgeSign_Request.__import_type_support__()
            if _judge_sign.Metaclass_JudgeSign_Response._TYPE_SUPPORT is None:
                _judge_sign.Metaclass_JudgeSign_Response.__import_type_support__()


class JudgeSign(metaclass=Metaclass_JudgeSign):
    from tutorial_interfaces.srv._judge_sign import JudgeSign_Request as Request
    from tutorial_interfaces.srv._judge_sign import JudgeSign_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
