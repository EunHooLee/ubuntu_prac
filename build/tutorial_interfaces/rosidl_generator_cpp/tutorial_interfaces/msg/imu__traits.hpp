// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__IMU__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__IMU__TRAITS_HPP_

#include "tutorial_interfaces/msg/imu__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::msg::IMU>()
{
  return "tutorial_interfaces::msg::IMU";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::IMU>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::IMU>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__IMU__TRAITS_HPP_
