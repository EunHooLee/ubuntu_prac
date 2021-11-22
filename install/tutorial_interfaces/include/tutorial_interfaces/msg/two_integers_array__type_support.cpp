// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:msg/TwoIntegersArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tutorial_interfaces/msg/two_integers_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tutorial_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__TwoIntegersArray__two_integers_array(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__TwoIntegersArray__two_integers_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__TwoIntegersArray__two_integers_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TwoIntegersArray_message_member_array[1] = {
  {
    "two_integers_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces::msg::TwoIntegersArray, two_integers_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__TwoIntegersArray__two_integers_array,  // size() function pointer
    get_const_function__TwoIntegersArray__two_integers_array,  // get_const(index) function pointer
    get_function__TwoIntegersArray__two_integers_array,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TwoIntegersArray_message_members = {
  "tutorial_interfaces::msg",  // message namespace
  "TwoIntegersArray",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces::msg::TwoIntegersArray),
  TwoIntegersArray_message_member_array  // message members
};

static const rosidl_message_type_support_t TwoIntegersArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TwoIntegersArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tutorial_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::msg::TwoIntegersArray>()
{
  return &::tutorial_interfaces::msg::rosidl_typesupport_introspection_cpp::TwoIntegersArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tutorial_interfaces, msg, TwoIntegersArray)() {
  return &::tutorial_interfaces::msg::rosidl_typesupport_introspection_cpp::TwoIntegersArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
