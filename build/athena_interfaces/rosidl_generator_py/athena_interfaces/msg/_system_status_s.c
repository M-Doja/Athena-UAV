// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from athena_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "athena_interfaces/msg/detail/system_status__struct.h"
#include "athena_interfaces/msg/detail/system_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool athena_interfaces__msg__system_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("athena_interfaces.msg._system_status.SystemStatus", full_classname_dest, 49) == 0);
  }
  athena_interfaces__msg__SystemStatus * ros_message = _ros_message;
  {  // overall_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "overall_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->overall_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // active_nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_nodes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_nodes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // warning_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * athena_interfaces__msg__system_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("athena_interfaces.msg._system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  athena_interfaces__msg__SystemStatus * ros_message = (athena_interfaces__msg__SystemStatus *)raw_ros_message;
  {  // overall_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->overall_state.data,
      strlen(ros_message->overall_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "overall_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_nodes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_nodes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
