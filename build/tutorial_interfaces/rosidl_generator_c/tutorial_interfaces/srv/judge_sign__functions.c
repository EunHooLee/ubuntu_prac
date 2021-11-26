// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:srv/JudgeSign.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/judge_sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tutorial_interfaces__srv__JudgeSign_Request__init(tutorial_interfaces__srv__JudgeSign_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
tutorial_interfaces__srv__JudgeSign_Request__fini(tutorial_interfaces__srv__JudgeSign_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

tutorial_interfaces__srv__JudgeSign_Request *
tutorial_interfaces__srv__JudgeSign_Request__create()
{
  tutorial_interfaces__srv__JudgeSign_Request * msg = (tutorial_interfaces__srv__JudgeSign_Request *)malloc(sizeof(tutorial_interfaces__srv__JudgeSign_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__JudgeSign_Request));
  bool success = tutorial_interfaces__srv__JudgeSign_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__JudgeSign_Request__destroy(tutorial_interfaces__srv__JudgeSign_Request * msg)
{
  if (msg) {
    tutorial_interfaces__srv__JudgeSign_Request__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__srv__JudgeSign_Request__Sequence__init(tutorial_interfaces__srv__JudgeSign_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__srv__JudgeSign_Request * data = NULL;
  if (size) {
    data = (tutorial_interfaces__srv__JudgeSign_Request *)calloc(size, sizeof(tutorial_interfaces__srv__JudgeSign_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__JudgeSign_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__JudgeSign_Request__fini(&data[i - 1]);
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
tutorial_interfaces__srv__JudgeSign_Request__Sequence__fini(tutorial_interfaces__srv__JudgeSign_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__JudgeSign_Request__fini(&array->data[i]);
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

tutorial_interfaces__srv__JudgeSign_Request__Sequence *
tutorial_interfaces__srv__JudgeSign_Request__Sequence__create(size_t size)
{
  tutorial_interfaces__srv__JudgeSign_Request__Sequence * array = (tutorial_interfaces__srv__JudgeSign_Request__Sequence *)malloc(sizeof(tutorial_interfaces__srv__JudgeSign_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__JudgeSign_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__JudgeSign_Request__Sequence__destroy(tutorial_interfaces__srv__JudgeSign_Request__Sequence * array)
{
  if (array) {
    tutorial_interfaces__srv__JudgeSign_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tutorial_interfaces__srv__JudgeSign_Response__init(tutorial_interfaces__srv__JudgeSign_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  // sign
  return true;
}

void
tutorial_interfaces__srv__JudgeSign_Response__fini(tutorial_interfaces__srv__JudgeSign_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
  // sign
}

tutorial_interfaces__srv__JudgeSign_Response *
tutorial_interfaces__srv__JudgeSign_Response__create()
{
  tutorial_interfaces__srv__JudgeSign_Response * msg = (tutorial_interfaces__srv__JudgeSign_Response *)malloc(sizeof(tutorial_interfaces__srv__JudgeSign_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__JudgeSign_Response));
  bool success = tutorial_interfaces__srv__JudgeSign_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__JudgeSign_Response__destroy(tutorial_interfaces__srv__JudgeSign_Response * msg)
{
  if (msg) {
    tutorial_interfaces__srv__JudgeSign_Response__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__srv__JudgeSign_Response__Sequence__init(tutorial_interfaces__srv__JudgeSign_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__srv__JudgeSign_Response * data = NULL;
  if (size) {
    data = (tutorial_interfaces__srv__JudgeSign_Response *)calloc(size, sizeof(tutorial_interfaces__srv__JudgeSign_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__JudgeSign_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__JudgeSign_Response__fini(&data[i - 1]);
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
tutorial_interfaces__srv__JudgeSign_Response__Sequence__fini(tutorial_interfaces__srv__JudgeSign_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__JudgeSign_Response__fini(&array->data[i]);
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

tutorial_interfaces__srv__JudgeSign_Response__Sequence *
tutorial_interfaces__srv__JudgeSign_Response__Sequence__create(size_t size)
{
  tutorial_interfaces__srv__JudgeSign_Response__Sequence * array = (tutorial_interfaces__srv__JudgeSign_Response__Sequence *)malloc(sizeof(tutorial_interfaces__srv__JudgeSign_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__JudgeSign_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__JudgeSign_Response__Sequence__destroy(tutorial_interfaces__srv__JudgeSign_Response__Sequence * array)
{
  if (array) {
    tutorial_interfaces__srv__JudgeSign_Response__Sequence__fini(array);
  }
  free(array);
}
