// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:action/RobotCoordinate.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_HPP_
#define TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_HPP_

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
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Goal __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_Goal_
{
  using Type = RobotCoordinate_Goal_<ContainerAllocator>;

  explicit RobotCoordinate_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotCoordinate_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_coordinate_order_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _x_coordinate_order_type x_coordinate_order;
  using _y_coordinate_order_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _y_coordinate_order_type y_coordinate_order;
  using _z_coordinate_order_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _z_coordinate_order_type z_coordinate_order;

  // setters for named parameter idiom
  Type & set__x_coordinate_order(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->x_coordinate_order = _arg;
    return *this;
  }
  Type & set__y_coordinate_order(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->y_coordinate_order = _arg;
    return *this;
  }
  Type & set__z_coordinate_order(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->z_coordinate_order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Goal
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Goal
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_Goal_ & other) const
  {
    if (this->x_coordinate_order != other.x_coordinate_order) {
      return false;
    }
    if (this->y_coordinate_order != other.y_coordinate_order) {
      return false;
    }
    if (this->z_coordinate_order != other.z_coordinate_order) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_Goal_

// alias to use template instance with default allocator
using RobotCoordinate_Goal =
  tutorial_interfaces::action::RobotCoordinate_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

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
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Result __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Result __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_Result_
{
  using Type = RobotCoordinate_Result_<ContainerAllocator>;

  explicit RobotCoordinate_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_result = 0.0f;
    }
  }

  explicit RobotCoordinate_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_result = 0.0f;
    }
  }

  // field types and members
  using _rpm_result_type =
    float;
  _rpm_result_type rpm_result;

  // setters for named parameter idiom
  Type & set__rpm_result(
    const float & _arg)
  {
    this->rpm_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Result
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Result
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_Result_ & other) const
  {
    if (this->rpm_result != other.rpm_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_Result_

// alias to use template instance with default allocator
using RobotCoordinate_Result =
  tutorial_interfaces::action::RobotCoordinate_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

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
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Feedback __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_Feedback_
{
  using Type = RobotCoordinate_Feedback_<ContainerAllocator>;

  explicit RobotCoordinate_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_feedback = 0.0f;
    }
  }

  explicit RobotCoordinate_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_feedback = 0.0f;
    }
  }

  // field types and members
  using _rpm_feedback_type =
    float;
  _rpm_feedback_type rpm_feedback;

  // setters for named parameter idiom
  Type & set__rpm_feedback(
    const float & _arg)
  {
    this->rpm_feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Feedback
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_Feedback
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_Feedback_ & other) const
  {
    if (this->rpm_feedback != other.rpm_feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_Feedback_

// alias to use template instance with default allocator
using RobotCoordinate_Feedback =
  tutorial_interfaces::action::RobotCoordinate_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

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

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "tutorial_interfaces/action/robot_coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_SendGoal_Request_
{
  using Type = RobotCoordinate_SendGoal_Request_<ContainerAllocator>;

  explicit RobotCoordinate_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RobotCoordinate_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tutorial_interfaces::action::RobotCoordinate_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Request
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Request
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_SendGoal_Request_

// alias to use template instance with default allocator
using RobotCoordinate_SendGoal_Request =
  tutorial_interfaces::action::RobotCoordinate_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

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

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_SendGoal_Response_
{
  using Type = RobotCoordinate_SendGoal_Response_<ContainerAllocator>;

  explicit RobotCoordinate_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RobotCoordinate_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Response
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_SendGoal_Response
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_SendGoal_Response_

// alias to use template instance with default allocator
using RobotCoordinate_SendGoal_Response =
  tutorial_interfaces::action::RobotCoordinate_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace action
{

struct RobotCoordinate_SendGoal
{
  using Request = tutorial_interfaces::action::RobotCoordinate_SendGoal_Request;
  using Response = tutorial_interfaces::action::RobotCoordinate_SendGoal_Response;
};

}  // namespace action

}  // namespace tutorial_interfaces

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

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_GetResult_Request_
{
  using Type = RobotCoordinate_GetResult_Request_<ContainerAllocator>;

  explicit RobotCoordinate_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RobotCoordinate_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Request
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Request
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_GetResult_Request_

// alias to use template instance with default allocator
using RobotCoordinate_GetResult_Request =
  tutorial_interfaces::action::RobotCoordinate_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

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

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_GetResult_Response_
{
  using Type = RobotCoordinate_GetResult_Response_<ContainerAllocator>;

  explicit RobotCoordinate_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RobotCoordinate_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tutorial_interfaces::action::RobotCoordinate_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Response
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_GetResult_Response
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_GetResult_Response_

// alias to use template instance with default allocator
using RobotCoordinate_GetResult_Response =
  tutorial_interfaces::action::RobotCoordinate_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace action
{

struct RobotCoordinate_GetResult
{
  using Request = tutorial_interfaces::action::RobotCoordinate_GetResult_Request;
  using Response = tutorial_interfaces::action::RobotCoordinate_GetResult_Response;
};

}  // namespace action

}  // namespace tutorial_interfaces

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

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/robot_coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__action__RobotCoordinate_FeedbackMessage __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotCoordinate_FeedbackMessage_
{
  using Type = RobotCoordinate_FeedbackMessage_<ContainerAllocator>;

  explicit RobotCoordinate_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RobotCoordinate_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tutorial_interfaces::action::RobotCoordinate_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_FeedbackMessage
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__action__RobotCoordinate_FeedbackMessage
    std::shared_ptr<tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCoordinate_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCoordinate_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCoordinate_FeedbackMessage_

// alias to use template instance with default allocator
using RobotCoordinate_FeedbackMessage =
  tutorial_interfaces::action::RobotCoordinate_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tutorial_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tutorial_interfaces
{

namespace action
{

struct RobotCoordinate
{
  /// The goal message defined in the action definition.
  using Goal = tutorial_interfaces::action::RobotCoordinate_Goal;
  /// The result message defined in the action definition.
  using Result = tutorial_interfaces::action::RobotCoordinate_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tutorial_interfaces::action::RobotCoordinate_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tutorial_interfaces::action::RobotCoordinate_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tutorial_interfaces::action::RobotCoordinate_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tutorial_interfaces::action::RobotCoordinate_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RobotCoordinate RobotCoordinate;

}  // namespace action

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__STRUCT_HPP_
