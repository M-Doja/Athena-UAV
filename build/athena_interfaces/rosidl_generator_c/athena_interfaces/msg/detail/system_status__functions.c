// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "athena_interfaces/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `overall_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
athena_interfaces__msg__SystemStatus__init(athena_interfaces__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // overall_state
  if (!rosidl_runtime_c__String__init(&msg->overall_state)) {
    athena_interfaces__msg__SystemStatus__fini(msg);
    return false;
  }
  // active_nodes
  // warning_count
  // error_count
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    athena_interfaces__msg__SystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
athena_interfaces__msg__SystemStatus__fini(athena_interfaces__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // overall_state
  rosidl_runtime_c__String__fini(&msg->overall_state);
  // active_nodes
  // warning_count
  // error_count
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
athena_interfaces__msg__SystemStatus__are_equal(const athena_interfaces__msg__SystemStatus * lhs, const athena_interfaces__msg__SystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // overall_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->overall_state), &(rhs->overall_state)))
  {
    return false;
  }
  // active_nodes
  if (lhs->active_nodes != rhs->active_nodes) {
    return false;
  }
  // warning_count
  if (lhs->warning_count != rhs->warning_count) {
    return false;
  }
  // error_count
  if (lhs->error_count != rhs->error_count) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
athena_interfaces__msg__SystemStatus__copy(
  const athena_interfaces__msg__SystemStatus * input,
  athena_interfaces__msg__SystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // overall_state
  if (!rosidl_runtime_c__String__copy(
      &(input->overall_state), &(output->overall_state)))
  {
    return false;
  }
  // active_nodes
  output->active_nodes = input->active_nodes;
  // warning_count
  output->warning_count = input->warning_count;
  // error_count
  output->error_count = input->error_count;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

athena_interfaces__msg__SystemStatus *
athena_interfaces__msg__SystemStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemStatus * msg = (athena_interfaces__msg__SystemStatus *)allocator.allocate(sizeof(athena_interfaces__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(athena_interfaces__msg__SystemStatus));
  bool success = athena_interfaces__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
athena_interfaces__msg__SystemStatus__destroy(athena_interfaces__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    athena_interfaces__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
athena_interfaces__msg__SystemStatus__Sequence__init(athena_interfaces__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(athena_interfaces__msg__SystemStatus)) {
      return false;
    }
    data = (athena_interfaces__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(athena_interfaces__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = athena_interfaces__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        athena_interfaces__msg__SystemStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
athena_interfaces__msg__SystemStatus__Sequence__fini(athena_interfaces__msg__SystemStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      athena_interfaces__msg__SystemStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

athena_interfaces__msg__SystemStatus__Sequence *
athena_interfaces__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemStatus__Sequence * array = (athena_interfaces__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(athena_interfaces__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = athena_interfaces__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
athena_interfaces__msg__SystemStatus__Sequence__destroy(athena_interfaces__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    athena_interfaces__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
athena_interfaces__msg__SystemStatus__Sequence__are_equal(const athena_interfaces__msg__SystemStatus__Sequence * lhs, const athena_interfaces__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!athena_interfaces__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
athena_interfaces__msg__SystemStatus__Sequence__copy(
  const athena_interfaces__msg__SystemStatus__Sequence * input,
  athena_interfaces__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(athena_interfaces__msg__SystemStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(athena_interfaces__msg__SystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    athena_interfaces__msg__SystemStatus * data =
      (athena_interfaces__msg__SystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!athena_interfaces__msg__SystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          athena_interfaces__msg__SystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!athena_interfaces__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
