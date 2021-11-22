// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/TwoIntegersArray.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__TWO_INTEGERS_ARRAY__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__TWO_INTEGERS_ARRAY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__TwoIntegersArray __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__TwoIntegersArray __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwoIntegersArray_
{
  using Type = TwoIntegersArray_<ContainerAllocator>;

  explicit TwoIntegersArray_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 2>::iterator, int64_t>(this->two_integers_array.begin(), this->two_integers_array.end(), 0ll);
    }
  }

  explicit TwoIntegersArray_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : two_integers_array(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 2>::iterator, int64_t>(this->two_integers_array.begin(), this->two_integers_array.end(), 0ll);
    }
  }

  // field types and members
  using _two_integers_array_type =
    std::array<int64_t, 2>;
  _two_integers_array_type two_integers_array;

  // setters for named parameter idiom
  Type & set__two_integers_array(
    const std::array<int64_t, 2> & _arg)
  {
    this->two_integers_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__TwoIntegersArray
    std::shared_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__TwoIntegersArray
    std::shared_ptr<tutorial_interfaces::msg::TwoIntegersArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoIntegersArray_ & other) const
  {
    if (this->two_integers_array != other.two_integers_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoIntegersArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoIntegersArray_

// alias to use template instance with default allocator
using TwoIntegersArray =
  tutorial_interfaces::msg::TwoIntegersArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__TWO_INTEGERS_ARRAY__STRUCT_HPP_
