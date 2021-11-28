// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:action/RobotCoordinate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `x_coordinate_order`
// Member `y_coordinate_order`
// Member `z_coordinate_order`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_member_array[3] = {
  {
    "x_coordinate_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_Goal, x_coordinate_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_coordinate_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_Goal, y_coordinate_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_coordinate_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_Goal, z_coordinate_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_Goal",  // message name
  3,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_Goal),
  RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_type_support_handle = {
  0,
  &RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Goal)() {
  if (!RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_Goal__rosidl_typesupport_introspection_c__RobotCoordinate_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_member_array[1] = {
  {
    "rpm_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_Result, rpm_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_Result",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_Result),
  RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_type_support_handle = {
  0,
  &RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Result)() {
  if (!RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_Result__rosidl_typesupport_introspection_c__RobotCoordinate_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_member_array[1] = {
  {
    "rpm_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_Feedback, rpm_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_Feedback",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_Feedback),
  RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_type_support_handle = {
  0,
  &RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Feedback)() {
  if (!RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_Feedback__rosidl_typesupport_introspection_c__RobotCoordinate_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "tutorial_interfaces/action/robot_coordinate.h"
// Member `goal`
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request),
  RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_type_support_handle = {
  0,
  &RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Request)() {
  RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Goal)();
  if (!RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_SendGoal_Request__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response),
  RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_type_support_handle = {
  0,
  &RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Response)() {
  RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_SendGoal_Response__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_members = {
  "tutorial_interfaces__action",  // service namespace
  "RobotCoordinate_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_type_support_handle = {
  0,
  &tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal)() {
  if (!tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_SendGoal_Response)()->data;
  }

  return &tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_GetResult_Request),
  RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_type_support_handle = {
  0,
  &RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Request)() {
  RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_GetResult_Request__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "tutorial_interfaces/action/robot_coordinate.h"
// Member `result`
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_GetResult_Response),
  RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_type_support_handle = {
  0,
  &RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Response)() {
  RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Result)();
  if (!RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_GetResult_Response__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_members = {
  "tutorial_interfaces__action",  // service namespace
  "RobotCoordinate_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_type_support_handle = {
  0,
  &tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult)() {
  if (!tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_GetResult_Response)()->data;
  }

  return &tutorial_interfaces__action__robot_coordinate__rosidl_typesupport_introspection_c__RobotCoordinate_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "tutorial_interfaces/action/robot_coordinate.h"
// Member `feedback`
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_members = {
  "tutorial_interfaces__action",  // message namespace
  "RobotCoordinate_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage),
  RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_type_support_handle = {
  0,
  &RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_FeedbackMessage)() {
  RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, RobotCoordinate_Feedback)();
  if (!RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCoordinate_FeedbackMessage__rosidl_typesupport_introspection_c__RobotCoordinate_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
