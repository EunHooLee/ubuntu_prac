// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__ENCODER__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__ENCODER__TRAITS_HPP_

#include "tutorial_interfaces/msg/encoder__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::msg::Encoder>()
{
  return "tutorial_interfaces::msg::Encoder";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::Encoder>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::Encoder>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__ENCODER__TRAITS_HPP_
