#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to athena_interfaces__msg__SystemHealth

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cpu_usage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub memory_usage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for SystemHealth {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemHealth::default())
  }
}

impl rosidl_runtime_rs::Message for SystemHealth {
  type RmwMsg = super::msg::rmw::SystemHealth;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        state: msg.state.as_str().into(),
        cpu_usage: msg.cpu_usage,
        memory_usage: msg.memory_usage,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        state: msg.state.as_str().into(),
      cpu_usage: msg.cpu_usage,
      memory_usage: msg.memory_usage,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_name: msg.node_name.to_string(),
      state: msg.state.to_string(),
      cpu_usage: msg.cpu_usage,
      memory_usage: msg.memory_usage,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


// Corresponds to athena_interfaces__msg__SystemStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub overall_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_nodes: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for SystemStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SystemStatus {
  type RmwMsg = super::msg::rmw::SystemStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        overall_state: msg.overall_state.as_str().into(),
        active_nodes: msg.active_nodes,
        warning_count: msg.warning_count,
        error_count: msg.error_count,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        overall_state: msg.overall_state.as_str().into(),
      active_nodes: msg.active_nodes,
      warning_count: msg.warning_count,
      error_count: msg.error_count,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      overall_state: msg.overall_state.to_string(),
      active_nodes: msg.active_nodes,
      warning_count: msg.warning_count,
      error_count: msg.error_count,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


// Corresponds to athena_interfaces__msg__VehicleState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub altitude: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for VehicleState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleState::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = super::msg::rmw::VehicleState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude: msg.latitude,
        longitude: msg.longitude,
        altitude: msg.altitude,
        battery_percent: msg.battery_percent,
        flight_mode: msg.flight_mode.as_str().into(),
        armed: msg.armed,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude: msg.latitude,
      longitude: msg.longitude,
      altitude: msg.altitude,
      battery_percent: msg.battery_percent,
        flight_mode: msg.flight_mode.as_str().into(),
      armed: msg.armed,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude: msg.latitude,
      longitude: msg.longitude,
      altitude: msg.altitude,
      battery_percent: msg.battery_percent,
      flight_mode: msg.flight_mode.to_string(),
      armed: msg.armed,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


// Corresponds to athena_interfaces__msg__MissionStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for MissionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = super::msg::rmw::MissionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        current_task: msg.current_task.as_str().into(),
        progress: msg.progress,
        active: msg.active,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        current_task: msg.current_task.as_str().into(),
      progress: msg.progress,
      active: msg.active,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      current_task: msg.current_task.to_string(),
      progress: msg.progress,
      active: msg.active,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


