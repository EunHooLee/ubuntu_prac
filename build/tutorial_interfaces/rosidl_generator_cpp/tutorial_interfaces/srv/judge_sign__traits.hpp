// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/JudgeSign.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__JUDGE_SIGN__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__JUDGE_SIGN__TRAITS_HPP_

#include "tutorial_interfaces/srv/judge_sign__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::JudgeSign_Request>()
{
  return "tutorial_interfaces::srv::JudgeSign_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::JudgeSign_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::JudgeSign_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::JudgeSign_Response>()
{
  return "tutorial_interfaces::srv::JudgeSign_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::JudgeSign_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::JudgeSign_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::JudgeSign>()
{
  return "tutorial_interfaces::srv::JudgeSign";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::JudgeSign>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::JudgeSign_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::JudgeSign_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::JudgeSign>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::JudgeSign_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::JudgeSign_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__JUDGE_SIGN__TRAITS_HPP_
