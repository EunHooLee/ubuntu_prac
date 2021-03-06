// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__IMU__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/IMU in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__IMU
{
  rosidl_generator_c__float__Sequence imu;
} tutorial_interfaces__msg__IMU;

// Struct for a sequence of tutorial_interfaces__msg__IMU.
typedef struct tutorial_interfaces__msg__IMU__Sequence
{
  tutorial_interfaces__msg__IMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__IMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__IMU__STRUCT_H_
