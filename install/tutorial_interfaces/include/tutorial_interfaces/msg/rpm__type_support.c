// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:msg/RPM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/msg/rpm__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/msg/rpm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RPM__rosidl_typesupport_introspection_c__RPM_message_member_array[1] = {
  {
    "rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__msg__RPM, rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RPM__rosidl_typesupport_introspection_c__RPM_message_members = {
  "tutorial_interfaces__msg",  // message namespace
  "RPM",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__msg__RPM),
  RPM__rosidl_typesupport_introspection_c__RPM_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RPM__rosidl_typesupport_introspection_c__RPM_message_type_support_handle = {
  0,
  &RPM__rosidl_typesupport_introspection_c__RPM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, msg, RPM)() {
  if (!RPM__rosidl_typesupport_introspection_c__RPM_message_type_support_handle.typesupport_identifier) {
    RPM__rosidl_typesupport_introspection_c__RPM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RPM__rosidl_typesupport_introspection_c__RPM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
