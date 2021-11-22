// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tutorial_interfaces:msg/TwoIntegersArray.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/two_integers_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/msg/two_integers_array__struct.h"
#include "tutorial_interfaces/msg/two_integers_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TwoIntegersArray__ros_msg_type = tutorial_interfaces__msg__TwoIntegersArray;

static bool _TwoIntegersArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TwoIntegersArray__ros_msg_type * ros_message = static_cast<const _TwoIntegersArray__ros_msg_type *>(untyped_ros_message);
  // Field name: two_integers_array
  {
    size_t size = 2;
    auto array_ptr = ros_message->two_integers_array;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TwoIntegersArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TwoIntegersArray__ros_msg_type * ros_message = static_cast<_TwoIntegersArray__ros_msg_type *>(untyped_ros_message);
  // Field name: two_integers_array
  {
    size_t size = 2;
    auto array_ptr = ros_message->two_integers_array;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__msg__TwoIntegersArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TwoIntegersArray__ros_msg_type * ros_message = static_cast<const _TwoIntegersArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name two_integers_array
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->two_integers_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TwoIntegersArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__msg__TwoIntegersArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__msg__TwoIntegersArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: two_integers_array
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TwoIntegersArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__msg__TwoIntegersArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TwoIntegersArray = {
  "tutorial_interfaces::msg",
  "TwoIntegersArray",
  _TwoIntegersArray__cdr_serialize,
  _TwoIntegersArray__cdr_deserialize,
  _TwoIntegersArray__get_serialized_size,
  _TwoIntegersArray__max_serialized_size
};

static rosidl_message_type_support_t _TwoIntegersArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TwoIntegersArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, msg, TwoIntegersArray)() {
  return &_TwoIntegersArray__type_support;
}

#if defined(__cplusplus)
}
#endif
