// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from athena_interfaces:msg/SystemHealth.idl
// generated code does not contain a copyright notice
#include "athena_interfaces/msg/detail/system_health__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
athena_interfaces__msg__SystemHealth__init(athena_interfaces__msg__SystemHealth * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    athena_interfaces__msg__SystemHealth__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    athena_interfaces__msg__SystemHealth__fini(msg);
    return false;
  }
  // cpu_usage
  // memory_usage
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    athena_interfaces__msg__SystemHealth__fini(msg);
    return false;
  }
  return true;
}

void
athena_interfaces__msg__SystemHealth__fini(athena_interfaces__msg__SystemHealth * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // cpu_usage
  // memory_usage
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
athena_interfaces__msg__SystemHealth__are_equal(const athena_interfaces__msg__SystemHealth * lhs, const athena_interfaces__msg__SystemHealth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
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
athena_interfaces__msg__SystemHealth__copy(
  const athena_interfaces__msg__SystemHealth * input,
  athena_interfaces__msg__SystemHealth * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

athena_interfaces__msg__SystemHealth *
athena_interfaces__msg__SystemHealth__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemHealth * msg = (athena_interfaces__msg__SystemHealth *)allocator.allocate(sizeof(athena_interfaces__msg__SystemHealth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(athena_interfaces__msg__SystemHealth));
  bool success = athena_interfaces__msg__SystemHealth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
athena_interfaces__msg__SystemHealth__destroy(athena_interfaces__msg__SystemHealth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    athena_interfaces__msg__SystemHealth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
athena_interfaces__msg__SystemHealth__Sequence__init(athena_interfaces__msg__SystemHealth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemHealth * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(athena_interfaces__msg__SystemHealth)) {
      return false;
    }
    data = (athena_interfaces__msg__SystemHealth *)allocator.zero_allocate(size, sizeof(athena_interfaces__msg__SystemHealth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = athena_interfaces__msg__SystemHealth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        athena_interfaces__msg__SystemHealth__fini(&data[i - 1]);
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
athena_interfaces__msg__SystemHealth__Sequence__fini(athena_interfaces__msg__SystemHealth__Sequence * array)
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
      athena_interfaces__msg__SystemHealth__fini(&array->data[i]);
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

athena_interfaces__msg__SystemHealth__Sequence *
athena_interfaces__msg__SystemHealth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__SystemHealth__Sequence * array = (athena_interfaces__msg__SystemHealth__Sequence *)allocator.allocate(sizeof(athena_interfaces__msg__SystemHealth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = athena_interfaces__msg__SystemHealth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
athena_interfaces__msg__SystemHealth__Sequence__destroy(athena_interfaces__msg__SystemHealth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    athena_interfaces__msg__SystemHealth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
athena_interfaces__msg__SystemHealth__Sequence__are_equal(const athena_interfaces__msg__SystemHealth__Sequence * lhs, const athena_interfaces__msg__SystemHealth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!athena_interfaces__msg__SystemHealth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
athena_interfaces__msg__SystemHealth__Sequence__copy(
  const athena_interfaces__msg__SystemHealth__Sequence * input,
  athena_interfaces__msg__SystemHealth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(athena_interfaces__msg__SystemHealth)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(athena_interfaces__msg__SystemHealth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    athena_interfaces__msg__SystemHealth * data =
      (athena_interfaces__msg__SystemHealth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!athena_interfaces__msg__SystemHealth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          athena_interfaces__msg__SystemHealth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!athena_interfaces__msg__SystemHealth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
