// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:action/RobotCoordinate.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_H_
#define TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x_coordinate_order'
// Member 'y_coordinate_order'
// Member 'z_coordinate_order'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_Goal
{
  rosidl_generator_c__float__Sequence x_coordinate_order;
  rosidl_generator_c__float__Sequence y_coordinate_order;
  rosidl_generator_c__float__Sequence z_coordinate_order;
} tutorial_interfaces__action__RobotCoordinate_Goal;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_Goal.
typedef struct tutorial_interfaces__action__RobotCoordinate_Goal__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_Result
{
  float rpm_result;
} tutorial_interfaces__action__RobotCoordinate_Result;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_Result.
typedef struct tutorial_interfaces__action__RobotCoordinate_Result__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_Feedback
{
  float rpm_feedback;
} tutorial_interfaces__action__RobotCoordinate_Feedback;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_Feedback.
typedef struct tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "tutorial_interfaces/action/robot_coordinate__struct.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__RobotCoordinate_Goal goal;
} tutorial_interfaces__action__RobotCoordinate_SendGoal_Request;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_SendGoal_Request.
typedef struct tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tutorial_interfaces__action__RobotCoordinate_SendGoal_Response;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_SendGoal_Response.
typedef struct tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tutorial_interfaces__action__RobotCoordinate_GetResult_Request;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_GetResult_Request.
typedef struct tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_GetResult_Response
{
  int8_t status;
  tutorial_interfaces__action__RobotCoordinate_Result result;
} tutorial_interfaces__action__RobotCoordinate_GetResult_Response;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_GetResult_Response.
typedef struct tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.h"

// Struct defined in action/RobotCoordinate in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__RobotCoordinate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__RobotCoordinate_Feedback feedback;
} tutorial_interfaces__action__RobotCoordinate_FeedbackMessage;

// Struct for a sequence of tutorial_interfaces__action__RobotCoordinate_FeedbackMessage.
typedef struct tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence
{
  tutorial_interfaces__action__RobotCoordinate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_H_
