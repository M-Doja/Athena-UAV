// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from athena_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

#include "athena_interfaces/msg/detail/vehicle_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_athena_interfaces
const rosidl_type_hash_t *
athena_interfaces__msg__VehicleState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9d, 0x75, 0x1c, 0x03, 0xb9, 0x16, 0x15, 0xce,
      0xdb, 0x55, 0xcb, 0x93, 0xda, 0xef, 0x19, 0x24,
      0xd8, 0xde, 0x71, 0xe8, 0xd1, 0x6a, 0x5d, 0x20,
      0xab, 0x79, 0x89, 0x90, 0xcf, 0x38, 0xaa, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char athena_interfaces__msg__VehicleState__TYPE_NAME[] = "athena_interfaces/msg/VehicleState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char athena_interfaces__msg__VehicleState__FIELD_NAME__latitude[] = "latitude";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__longitude[] = "longitude";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__altitude[] = "altitude";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__battery_percent[] = "battery_percent";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__flight_mode[] = "flight_mode";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__armed[] = "armed";
static char athena_interfaces__msg__VehicleState__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field athena_interfaces__msg__VehicleState__FIELDS[] = {
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__battery_percent, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__flight_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__armed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {athena_interfaces__msg__VehicleState__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription athena_interfaces__msg__VehicleState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
athena_interfaces__msg__VehicleState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {athena_interfaces__msg__VehicleState__TYPE_NAME, 34, 34},
      {athena_interfaces__msg__VehicleState__FIELDS, 7, 7},
    },
    {athena_interfaces__msg__VehicleState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 latitude\n"
  "float64 longitude\n"
  "float32 altitude\n"
  "float32 battery_percent\n"
  "string flight_mode\n"
  "bool armed\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
athena_interfaces__msg__VehicleState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {athena_interfaces__msg__VehicleState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 140, 140},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
athena_interfaces__msg__VehicleState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *athena_interfaces__msg__VehicleState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
