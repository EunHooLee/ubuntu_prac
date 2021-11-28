// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:action/RobotCoordinate.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__FUNCTIONS_H_
#define TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tutorial_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tutorial_interfaces/action/robot_coordinate__struct.h"

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_Goal
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Goal__init(tutorial_interfaces__action__RobotCoordinate_Goal * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Goal__fini(tutorial_interfaces__action__RobotCoordinate_Goal * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Goal *
tutorial_interfaces__action__RobotCoordinate_Goal__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Goal__destroy(tutorial_interfaces__action__RobotCoordinate_Goal * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__init(tutorial_interfaces__action__RobotCoordinate_Goal__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_Goal__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Goal__Sequence *
tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Goal__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_Goal__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_Result
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Result__init(tutorial_interfaces__action__RobotCoordinate_Result * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Result__fini(tutorial_interfaces__action__RobotCoordinate_Result * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Result *
tutorial_interfaces__action__RobotCoordinate_Result__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Result__destroy(tutorial_interfaces__action__RobotCoordinate_Result * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Result__Sequence__init(tutorial_interfaces__action__RobotCoordinate_Result__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Result__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_Result__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Result__Sequence *
tutorial_interfaces__action__RobotCoordinate_Result__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Result__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_Result__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_Feedback
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Feedback__init(tutorial_interfaces__action__RobotCoordinate_Feedback * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Feedback__fini(tutorial_interfaces__action__RobotCoordinate_Feedback * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Feedback *
tutorial_interfaces__action__RobotCoordinate_Feedback__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Feedback__destroy(tutorial_interfaces__action__RobotCoordinate_Feedback * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__init(tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence *
tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_Feedback__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__init(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__fini(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request *
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__destroy(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__init(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence *
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_SendGoal_Request__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__init(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__fini(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response *
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__destroy(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__init(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence *
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_SendGoal_Response__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__init(tutorial_interfaces__action__RobotCoordinate_GetResult_Request * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__fini(tutorial_interfaces__action__RobotCoordinate_GetResult_Request * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_GetResult_Request *
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__destroy(tutorial_interfaces__action__RobotCoordinate_GetResult_Request * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__init(tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence *
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_GetResult_Request__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__init(tutorial_interfaces__action__RobotCoordinate_GetResult_Response * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__fini(tutorial_interfaces__action__RobotCoordinate_GetResult_Response * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_GetResult_Response *
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__destroy(tutorial_interfaces__action__RobotCoordinate_GetResult_Response * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__init(tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence *
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_GetResult_Response__Sequence * array);

/// Initialize action/RobotCoordinate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage
 * )) before or use
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__init(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage * msg);

/// Finalize action/RobotCoordinate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__fini(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage * msg);

/// Create action/RobotCoordinate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage *
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__create();

/// Destroy action/RobotCoordinate message.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__destroy(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage * msg);


/// Initialize array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__init(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__fini(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence * array);

/// Create array of action/RobotCoordinate messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence *
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RobotCoordinate messages.
/**
 * It calls
 * tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence__destroy(tutorial_interfaces__action__RobotCoordinate_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__ACTION__ROBOT_COORDINATE__FUNCTIONS_H_
