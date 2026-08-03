// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from athena_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "athena_interfaces/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `flight_mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
athena_interfaces__msg__VehicleState__init(athena_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // altitude
  // battery_percent
  // flight_mode
  if (!rosidl_runtime_c__String__init(&msg->flight_mode)) {
    athena_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  // armed
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    athena_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  return true;
}

void
athena_interfaces__msg__VehicleState__fini(athena_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // altitude
  // battery_percent
  // flight_mode
  rosidl_runtime_c__String__fini(&msg->flight_mode);
  // armed
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
athena_interfaces__msg__VehicleState__are_equal(const athena_interfaces__msg__VehicleState * lhs, const athena_interfaces__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // battery_percent
  if (lhs->battery_percent != rhs->battery_percent) {
    return false;
  }
  // flight_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flight_mode), &(rhs->flight_mode)))
  {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
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
athena_interfaces__msg__VehicleState__copy(
  const athena_interfaces__msg__VehicleState * input,
  athena_interfaces__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // battery_percent
  output->battery_percent = input->battery_percent;
  // flight_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->flight_mode), &(output->flight_mode)))
  {
    return false;
  }
  // armed
  output->armed = input->armed;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

athena_interfaces__msg__VehicleState *
athena_interfaces__msg__VehicleState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__VehicleState * msg = (athena_interfaces__msg__VehicleState *)allocator.allocate(sizeof(athena_interfaces__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(athena_interfaces__msg__VehicleState));
  bool success = athena_interfaces__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
athena_interfaces__msg__VehicleState__destroy(athena_interfaces__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    athena_interfaces__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
athena_interfaces__msg__VehicleState__Sequence__init(athena_interfaces__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__VehicleState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(athena_interfaces__msg__VehicleState)) {
      return false;
    }
    data = (athena_interfaces__msg__VehicleState *)allocator.zero_allocate(size, sizeof(athena_interfaces__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = athena_interfaces__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        athena_interfaces__msg__VehicleState__fini(&data[i - 1]);
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
athena_interfaces__msg__VehicleState__Sequence__fini(athena_interfaces__msg__VehicleState__Sequence * array)
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
      athena_interfaces__msg__VehicleState__fini(&array->data[i]);
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

athena_interfaces__msg__VehicleState__Sequence *
athena_interfaces__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  athena_interfaces__msg__VehicleState__Sequence * array = (athena_interfaces__msg__VehicleState__Sequence *)allocator.allocate(sizeof(athena_interfaces__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = athena_interfaces__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
athena_interfaces__msg__VehicleState__Sequence__destroy(athena_interfaces__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    athena_interfaces__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
athena_interfaces__msg__VehicleState__Sequence__are_equal(const athena_interfaces__msg__VehicleState__Sequence * lhs, const athena_interfaces__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!athena_interfaces__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
athena_interfaces__msg__VehicleState__Sequence__copy(
  const athena_interfaces__msg__VehicleState__Sequence * input,
  athena_interfaces__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(athena_interfaces__msg__VehicleState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(athena_interfaces__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    athena_interfaces__msg__VehicleState * data =
      (athena_interfaces__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!athena_interfaces__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          athena_interfaces__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!athena_interfaces__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
