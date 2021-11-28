// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__IMU__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__IMU__STRUCT_HPP_

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
# define DEPRECATED__tutorial_interfaces__msg__IMU __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__IMU __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMU_
{
  using Type = IMU_<ContainerAllocator>;

  explicit IMU_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IMU_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _imu_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__imu(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::IMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::IMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::IMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::IMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__IMU
    std::shared_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__IMU
    std::shared_ptr<tutorial_interfaces::msg::IMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMU_ & other) const
  {
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMU_

// alias to use template instance with default allocator
using IMU =
  tutorial_interfaces::msg::IMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__IMU__STRUCT_HPP_
