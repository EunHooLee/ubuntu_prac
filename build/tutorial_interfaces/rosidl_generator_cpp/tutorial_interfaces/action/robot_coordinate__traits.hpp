// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:action/RobotCoordinate.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__TRAITS_HPP_
#define TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__TRAITS_HPP_

#include "tutorial_interfaces/action/robot_coordinate__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_Goal>()
{
  return "tutorial_interfaces::action::RobotCoordinate_Goal";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_Result>()
{
  return "tutorial_interfaces::action::RobotCoordinate_Result";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Result>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_Feedback>()
{
  return "tutorial_interfaces::action::RobotCoordinate_Feedback";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "tutorial_interfaces/action/robot_coordinate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request>()
{
  return "tutorial_interfaces::action::RobotCoordinate_SendGoal_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response>()
{
  return "tutorial_interfaces::action::RobotCoordinate_SendGoal_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_SendGoal>()
{
  return "tutorial_interfaces::action::RobotCoordinate_SendGoal";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request>::value &&
    has_fixed_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request>::value &&
    has_bounded_size<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_GetResult_Request>()
{
  return "tutorial_interfaces::action::RobotCoordinate_GetResult_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_GetResult_Response>()
{
  return "tutorial_interfaces::action::RobotCoordinate_GetResult_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Result>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_GetResult>()
{
  return "tutorial_interfaces::action::RobotCoordinate_GetResult";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Request>::value &&
    has_fixed_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Request>::value &&
    has_bounded_size<tutorial_interfaces::action::RobotCoordinate_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage>()
{
  return "tutorial_interfaces::action::RobotCoordinate_FeedbackMessage";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::RobotCoordinate_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::RobotCoordinate_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__TRAITS_HPP_
