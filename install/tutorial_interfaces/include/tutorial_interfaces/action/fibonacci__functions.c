// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/action/fibonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `order`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tutorial_interfaces__action__Fibonacci_Goal__init(tutorial_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  if (!rosidl_generator_c__float__Sequence__init(&msg->order, 0)) {
    tutorial_interfaces__action__Fibonacci_Goal__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Goal__fini(tutorial_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
  rosidl_generator_c__float__Sequence__fini(&msg->order);
}

tutorial_interfaces__action__Fibonacci_Goal *
tutorial_interfaces__action__Fibonacci_Goal__create()
{
  tutorial_interfaces__action__Fibonacci_Goal * msg = (tutorial_interfaces__action__Fibonacci_Goal *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_Goal));
  bool success = tutorial_interfaces__action__Fibonacci_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_Goal__destroy(tutorial_interfaces__action__Fibonacci_Goal * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_Goal__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_Goal__Sequence__init(tutorial_interfaces__action__Fibonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_Goal * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_Goal *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Goal__Sequence__fini(tutorial_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_Goal__Sequence *
tutorial_interfaces__action__Fibonacci_Goal__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_Goal__Sequence * array = (tutorial_interfaces__action__Fibonacci_Goal__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_Goal__Sequence__destroy(tutorial_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `sequence`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tutorial_interfaces__action__Fibonacci_Result__init(tutorial_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_generator_c__float__Sequence__init(&msg->sequence, 0)) {
    tutorial_interfaces__action__Fibonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Result__fini(tutorial_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_generator_c__float__Sequence__fini(&msg->sequence);
}

tutorial_interfaces__action__Fibonacci_Result *
tutorial_interfaces__action__Fibonacci_Result__create()
{
  tutorial_interfaces__action__Fibonacci_Result * msg = (tutorial_interfaces__action__Fibonacci_Result *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_Result));
  bool success = tutorial_interfaces__action__Fibonacci_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_Result__destroy(tutorial_interfaces__action__Fibonacci_Result * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_Result__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_Result__Sequence__init(tutorial_interfaces__action__Fibonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_Result * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_Result *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Result__Sequence__fini(tutorial_interfaces__action__Fibonacci_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_Result__Sequence *
tutorial_interfaces__action__Fibonacci_Result__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_Result__Sequence * array = (tutorial_interfaces__action__Fibonacci_Result__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_Result__Sequence__destroy(tutorial_interfaces__action__Fibonacci_Result__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tutorial_interfaces__action__Fibonacci_Feedback__init(tutorial_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_generator_c__float__Sequence__init(&msg->partial_sequence, 0)) {
    tutorial_interfaces__action__Fibonacci_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Feedback__fini(tutorial_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_generator_c__float__Sequence__fini(&msg->partial_sequence);
}

tutorial_interfaces__action__Fibonacci_Feedback *
tutorial_interfaces__action__Fibonacci_Feedback__create()
{
  tutorial_interfaces__action__Fibonacci_Feedback * msg = (tutorial_interfaces__action__Fibonacci_Feedback *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_Feedback));
  bool success = tutorial_interfaces__action__Fibonacci_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_Feedback__destroy(tutorial_interfaces__action__Fibonacci_Feedback * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_Feedback__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_Feedback__Sequence__init(tutorial_interfaces__action__Fibonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_Feedback * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_Feedback *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_Feedback__Sequence__fini(tutorial_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_Feedback__Sequence *
tutorial_interfaces__action__Fibonacci_Feedback__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_Feedback__Sequence * array = (tutorial_interfaces__action__Fibonacci_Feedback__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_Feedback__Sequence__destroy(tutorial_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "tutorial_interfaces/action/fibonacci__functions.h"

bool
tutorial_interfaces__action__Fibonacci_SendGoal_Request__init(tutorial_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tutorial_interfaces__action__Fibonacci_Goal__init(&msg->goal)) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(tutorial_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tutorial_interfaces__action__Fibonacci_Goal__fini(&msg->goal);
}

tutorial_interfaces__action__Fibonacci_SendGoal_Request *
tutorial_interfaces__action__Fibonacci_SendGoal_Request__create()
{
  tutorial_interfaces__action__Fibonacci_SendGoal_Request * msg = (tutorial_interfaces__action__Fibonacci_SendGoal_Request *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Request));
  bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Request__destroy(tutorial_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_SendGoal_Request * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_SendGoal_Request *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence *
tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array = (tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__destroy(tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
tutorial_interfaces__action__Fibonacci_SendGoal_Response__init(tutorial_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Response__fini(tutorial_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

tutorial_interfaces__action__Fibonacci_SendGoal_Response *
tutorial_interfaces__action__Fibonacci_SendGoal_Response__create()
{
  tutorial_interfaces__action__Fibonacci_SendGoal_Response * msg = (tutorial_interfaces__action__Fibonacci_SendGoal_Response *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Response));
  bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Response__destroy(tutorial_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_SendGoal_Response * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_SendGoal_Response *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence *
tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array = (tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__destroy(tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
tutorial_interfaces__action__Fibonacci_GetResult_Request__init(tutorial_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Request__fini(tutorial_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

tutorial_interfaces__action__Fibonacci_GetResult_Request *
tutorial_interfaces__action__Fibonacci_GetResult_Request__create()
{
  tutorial_interfaces__action__Fibonacci_GetResult_Request * msg = (tutorial_interfaces__action__Fibonacci_GetResult_Request *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Request));
  bool success = tutorial_interfaces__action__Fibonacci_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Request__destroy(tutorial_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_GetResult_Request * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_GetResult_Request *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence *
tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence * array = (tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__destroy(tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "tutorial_interfaces/action/fibonacci__functions.h"

bool
tutorial_interfaces__action__Fibonacci_GetResult_Response__init(tutorial_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tutorial_interfaces__action__Fibonacci_Result__init(&msg->result)) {
    tutorial_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Response__fini(tutorial_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tutorial_interfaces__action__Fibonacci_Result__fini(&msg->result);
}

tutorial_interfaces__action__Fibonacci_GetResult_Response *
tutorial_interfaces__action__Fibonacci_GetResult_Response__create()
{
  tutorial_interfaces__action__Fibonacci_GetResult_Response * msg = (tutorial_interfaces__action__Fibonacci_GetResult_Response *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Response));
  bool success = tutorial_interfaces__action__Fibonacci_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Response__destroy(tutorial_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_GetResult_Response * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_GetResult_Response *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence *
tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence * array = (tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__destroy(tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tutorial_interfaces/action/fibonacci__functions.h"

bool
tutorial_interfaces__action__Fibonacci_FeedbackMessage__init(tutorial_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tutorial_interfaces__action__Fibonacci_Feedback__init(&msg->feedback)) {
    tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(tutorial_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tutorial_interfaces__action__Fibonacci_Feedback__fini(&msg->feedback);
}

tutorial_interfaces__action__Fibonacci_FeedbackMessage *
tutorial_interfaces__action__Fibonacci_FeedbackMessage__create()
{
  tutorial_interfaces__action__Fibonacci_FeedbackMessage * msg = (tutorial_interfaces__action__Fibonacci_FeedbackMessage *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__Fibonacci_FeedbackMessage));
  bool success = tutorial_interfaces__action__Fibonacci_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__Fibonacci_FeedbackMessage__destroy(tutorial_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (msg) {
    tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__action__Fibonacci_FeedbackMessage * data = NULL;
  if (size) {
    data = (tutorial_interfaces__action__Fibonacci_FeedbackMessage *)calloc(size, sizeof(tutorial_interfaces__action__Fibonacci_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__Fibonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__Fibonacci_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence *
tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size)
{
  tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array = (tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence *)malloc(sizeof(tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__destroy(tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  if (array) {
    tutorial_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
