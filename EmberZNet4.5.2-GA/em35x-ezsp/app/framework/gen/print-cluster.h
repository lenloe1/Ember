// Copyright 2007 - 2011 by Ember Corporation. All rights reserved.
// 
// This file is generated. Please do not edit manually.
// 
// This file is generated from java code via the following methods:
// com.ember.workbench.app_configurator.generator.EmbeddedCodeGenerator.generatePrintCluster()
//

// This is the mapping of IDs to cluster names assuming a format according
// to the "EmberAfClusterName" defined in the ZCL header.
// The names of clusters that are not present, are removed.



#if defined(ZCL_USING_BASIC_CLUSTER_SERVER) || defined(ZCL_USING_BASIC_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_BASIC_CLUSTER {ZCL_BASIC_CLUSTER_ID, "Basic" },
#else
  #define __PRINTCLUSTER_BASIC_CLUSTER
#endif
#if defined(ZCL_USING_POWER_CONFIG_CLUSTER_SERVER) || defined(ZCL_USING_POWER_CONFIG_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_POWER_CONFIG_CLUSTER {ZCL_POWER_CONFIG_CLUSTER_ID, "Power Configuration" },
#else
  #define __PRINTCLUSTER_POWER_CONFIG_CLUSTER
#endif
#if defined(ZCL_USING_DEVICE_TEMP_CLUSTER_SERVER) || defined(ZCL_USING_DEVICE_TEMP_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_DEVICE_TEMP_CLUSTER {ZCL_DEVICE_TEMP_CLUSTER_ID, "Device Temperature Configuration" },
#else
  #define __PRINTCLUSTER_DEVICE_TEMP_CLUSTER
#endif
#if defined(ZCL_USING_IDENTIFY_CLUSTER_SERVER) || defined(ZCL_USING_IDENTIFY_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_IDENTIFY_CLUSTER {ZCL_IDENTIFY_CLUSTER_ID, "Identify" },
#else
  #define __PRINTCLUSTER_IDENTIFY_CLUSTER
#endif
#if defined(ZCL_USING_GROUPS_CLUSTER_SERVER) || defined(ZCL_USING_GROUPS_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_GROUPS_CLUSTER {ZCL_GROUPS_CLUSTER_ID, "Groups" },
#else
  #define __PRINTCLUSTER_GROUPS_CLUSTER
#endif
#if defined(ZCL_USING_SCENES_CLUSTER_SERVER) || defined(ZCL_USING_SCENES_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_SCENES_CLUSTER {ZCL_SCENES_CLUSTER_ID, "Scenes" },
#else
  #define __PRINTCLUSTER_SCENES_CLUSTER
#endif
#if defined(ZCL_USING_ON_OFF_CLUSTER_SERVER) || defined(ZCL_USING_ON_OFF_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_ON_OFF_CLUSTER {ZCL_ON_OFF_CLUSTER_ID, "On/off" },
#else
  #define __PRINTCLUSTER_ON_OFF_CLUSTER
#endif
#if defined(ZCL_USING_ON_OFF_SWITCH_CONFIG_CLUSTER_SERVER) || defined(ZCL_USING_ON_OFF_SWITCH_CONFIG_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_ON_OFF_SWITCH_CONFIG_CLUSTER {ZCL_ON_OFF_SWITCH_CONFIG_CLUSTER_ID, "On/off Switch Configuration" },
#else
  #define __PRINTCLUSTER_ON_OFF_SWITCH_CONFIG_CLUSTER
#endif
#if defined(ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_LEVEL_CONTROL_CLUSTER {ZCL_LEVEL_CONTROL_CLUSTER_ID, "Level Control" },
#else
  #define __PRINTCLUSTER_LEVEL_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_ALARM_CLUSTER_SERVER) || defined(ZCL_USING_ALARM_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_ALARM_CLUSTER {ZCL_ALARM_CLUSTER_ID, "Alarms" },
#else
  #define __PRINTCLUSTER_ALARM_CLUSTER
#endif
#if defined(ZCL_USING_TIME_CLUSTER_SERVER) || defined(ZCL_USING_TIME_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_TIME_CLUSTER {ZCL_TIME_CLUSTER_ID, "Time" },
#else
  #define __PRINTCLUSTER_TIME_CLUSTER
#endif
#if defined(ZCL_USING_RSSI_LOCATION_CLUSTER_SERVER) || defined(ZCL_USING_RSSI_LOCATION_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_RSSI_LOCATION_CLUSTER {ZCL_RSSI_LOCATION_CLUSTER_ID, "RSSI Location" },
#else
  #define __PRINTCLUSTER_RSSI_LOCATION_CLUSTER
#endif
#if defined(ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_SERVER) || defined(ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER {ZCL_BINARY_INPUT_BASIC_CLUSTER_ID, "Binary Input (Basic)" },
#else
  #define __PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER
#endif
#if defined(ZCL_USING_COMMISSIONING_CLUSTER_SERVER) || defined(ZCL_USING_COMMISSIONING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_COMMISSIONING_CLUSTER {ZCL_COMMISSIONING_CLUSTER_ID, "Commissioning" },
#else
  #define __PRINTCLUSTER_COMMISSIONING_CLUSTER
#endif
#if defined(ZCL_USING_SHADE_CONFIG_CLUSTER_SERVER) || defined(ZCL_USING_SHADE_CONFIG_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_SHADE_CONFIG_CLUSTER {ZCL_SHADE_CONFIG_CLUSTER_ID, "Shade Configuration" },
#else
  #define __PRINTCLUSTER_SHADE_CONFIG_CLUSTER
#endif
#if defined(ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_PUMP_CONFIG_CONTROL_CLUSTER {ZCL_PUMP_CONFIG_CONTROL_CLUSTER_ID, "Pump Configuration and Control" },
#else
  #define __PRINTCLUSTER_PUMP_CONFIG_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_THERMOSTAT_CLUSTER_SERVER) || defined(ZCL_USING_THERMOSTAT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_THERMOSTAT_CLUSTER {ZCL_THERMOSTAT_CLUSTER_ID, "Thermostat" },
#else
  #define __PRINTCLUSTER_THERMOSTAT_CLUSTER
#endif
#if defined(ZCL_USING_FAN_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_FAN_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_FAN_CONTROL_CLUSTER {ZCL_FAN_CONTROL_CLUSTER_ID, "Fan Control" },
#else
  #define __PRINTCLUSTER_FAN_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_DEHUMID_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_DEHUMID_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_DEHUMID_CONTROL_CLUSTER {ZCL_DEHUMID_CONTROL_CLUSTER_ID, "Dehumidification Control" },
#else
  #define __PRINTCLUSTER_DEHUMID_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_THERMOSTAT_UI_CONFIG_CLUSTER_SERVER) || defined(ZCL_USING_THERMOSTAT_UI_CONFIG_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_THERMOSTAT_UI_CONFIG_CLUSTER {ZCL_THERMOSTAT_UI_CONFIG_CLUSTER_ID, "Thermostat User Interface Configuration" },
#else
  #define __PRINTCLUSTER_THERMOSTAT_UI_CONFIG_CLUSTER
#endif
#if defined(ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_COLOR_CONTROL_CLUSTER {ZCL_COLOR_CONTROL_CLUSTER_ID, "Color Control" },
#else
  #define __PRINTCLUSTER_COLOR_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER {ZCL_BALLAST_CONFIGURATION_CLUSTER_ID, "Ballast Configuration" },
#else
  #define __PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER
#endif
#if defined(ZCL_USING_ILLUM_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_ILLUM_MEASUREMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_ILLUM_MEASUREMENT_CLUSTER {ZCL_ILLUM_MEASUREMENT_CLUSTER_ID, "Illuminance Measurement" },
#else
  #define __PRINTCLUSTER_ILLUM_MEASUREMENT_CLUSTER
#endif
#if defined(ZCL_USING_ILLUM_LEVEL_SENSING_CLUSTER_SERVER) || defined(ZCL_USING_ILLUM_LEVEL_SENSING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_ILLUM_LEVEL_SENSING_CLUSTER {ZCL_ILLUM_LEVEL_SENSING_CLUSTER_ID, "Illuminance Level Sensing" },
#else
  #define __PRINTCLUSTER_ILLUM_LEVEL_SENSING_CLUSTER
#endif
#if defined(ZCL_USING_TEMP_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_TEMP_MEASUREMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_TEMP_MEASUREMENT_CLUSTER {ZCL_TEMP_MEASUREMENT_CLUSTER_ID, "Temperature Measurement" },
#else
  #define __PRINTCLUSTER_TEMP_MEASUREMENT_CLUSTER
#endif
#if defined(ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER {ZCL_PRESSURE_MEASUREMENT_CLUSTER_ID, "Pressure Measurement" },
#else
  #define __PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER
#endif
#if defined(ZCL_USING_FLOW_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_FLOW_MEASUREMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER {ZCL_FLOW_MEASUREMENT_CLUSTER_ID, "Flow Measurement" },
#else
  #define __PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER
#endif
#if defined(ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER {ZCL_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_ID, "Relative Humidity Measurement" },
#else
  #define __PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER
#endif
#if defined(ZCL_USING_OCCUPANCY_SENSING_CLUSTER_SERVER) || defined(ZCL_USING_OCCUPANCY_SENSING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER {ZCL_OCCUPANCY_SENSING_CLUSTER_ID, "Occupancy Sensing" },
#else
  #define __PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER
#endif
#if defined(ZCL_USING_IAS_ZONE_CLUSTER_SERVER) || defined(ZCL_USING_IAS_ZONE_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_IAS_ZONE_CLUSTER {ZCL_IAS_ZONE_CLUSTER_ID, "IAS Zone" },
#else
  #define __PRINTCLUSTER_IAS_ZONE_CLUSTER
#endif
#if defined(ZCL_USING_IAS_ACE_CLUSTER_SERVER) || defined(ZCL_USING_IAS_ACE_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_IAS_ACE_CLUSTER {ZCL_IAS_ACE_CLUSTER_ID, "IAS ACE" },
#else
  #define __PRINTCLUSTER_IAS_ACE_CLUSTER
#endif
#if defined(ZCL_USING_IAS_WD_CLUSTER_SERVER) || defined(ZCL_USING_IAS_WD_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_IAS_WD_CLUSTER {ZCL_IAS_WD_CLUSTER_ID, "IAS WD" },
#else
  #define __PRINTCLUSTER_IAS_WD_CLUSTER
#endif
#if defined(ZCL_USING_DOOR_LOCK_CLUSTER_SERVER) || defined(ZCL_USING_DOOR_LOCK_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_DOOR_LOCK_CLUSTER {ZCL_DOOR_LOCK_CLUSTER_ID, "Door Lock" },
#else
  #define __PRINTCLUSTER_DOOR_LOCK_CLUSTER
#endif
#if defined(ZCL_USING_WINDOW_COVERING_CLUSTER_SERVER) || defined(ZCL_USING_WINDOW_COVERING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_WINDOW_COVERING_CLUSTER {ZCL_WINDOW_COVERING_CLUSTER_ID, "Window Covering" },
#else
  #define __PRINTCLUSTER_WINDOW_COVERING_CLUSTER
#endif
#if defined(ZCL_USING_GENERIC_TUNNEL_CLUSTER_SERVER) || defined(ZCL_USING_GENERIC_TUNNEL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_GENERIC_TUNNEL_CLUSTER {ZCL_GENERIC_TUNNEL_CLUSTER_ID, "Generic Tunnel" },
#else
  #define __PRINTCLUSTER_GENERIC_TUNNEL_CLUSTER
#endif
#if defined(ZCL_USING_BACNET_PROTOCOL_TUNNEL_CLUSTER_SERVER) || defined(ZCL_USING_BACNET_PROTOCOL_TUNNEL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_BACNET_PROTOCOL_TUNNEL_CLUSTER {ZCL_BACNET_PROTOCOL_TUNNEL_CLUSTER_ID, "BACnet Protocol Tunnel" },
#else
  #define __PRINTCLUSTER_BACNET_PROTOCOL_TUNNEL_CLUSTER
#endif
#if defined(ZCL_USING_OTA_BOOTLOAD_CLUSTER_SERVER) || defined(ZCL_USING_OTA_BOOTLOAD_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_OTA_BOOTLOAD_CLUSTER {ZCL_OTA_BOOTLOAD_CLUSTER_ID, "Over the Air Bootloading Cluster" },
#else
  #define __PRINTCLUSTER_OTA_BOOTLOAD_CLUSTER
#endif
#if defined(ZCL_USING_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER {ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, "Demand Response and Load Control" },
#else
  #define __PRINTCLUSTER_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER
#endif
#if defined(ZCL_USING_SIMPLE_METERING_CLUSTER_SERVER) || defined(ZCL_USING_SIMPLE_METERING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_SIMPLE_METERING_CLUSTER {ZCL_SIMPLE_METERING_CLUSTER_ID, "Simple Metering" },
#else
  #define __PRINTCLUSTER_SIMPLE_METERING_CLUSTER
#endif
#if defined(ZCL_USING_PRICE_CLUSTER_SERVER) || defined(ZCL_USING_PRICE_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_PRICE_CLUSTER {ZCL_PRICE_CLUSTER_ID, "Price" },
#else
  #define __PRINTCLUSTER_PRICE_CLUSTER
#endif
#if defined(ZCL_USING_MESSAGING_CLUSTER_SERVER) || defined(ZCL_USING_MESSAGING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_MESSAGING_CLUSTER {ZCL_MESSAGING_CLUSTER_ID, "Messaging" },
#else
  #define __PRINTCLUSTER_MESSAGING_CLUSTER
#endif
#if defined(ZCL_USING_TUNNELING_CLUSTER_SERVER) || defined(ZCL_USING_TUNNELING_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_TUNNELING_CLUSTER {ZCL_TUNNELING_CLUSTER_ID, "Tunneling" },
#else
  #define __PRINTCLUSTER_TUNNELING_CLUSTER
#endif
#if defined(ZCL_USING_PREPAYMENT_CLUSTER_SERVER) || defined(ZCL_USING_PREPAYMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_PREPAYMENT_CLUSTER {ZCL_PREPAYMENT_CLUSTER_ID, "Prepayment" },
#else
  #define __PRINTCLUSTER_PREPAYMENT_CLUSTER
#endif
#if defined(ZCL_USING_KEY_ESTABLISHMENT_CLUSTER_SERVER) || defined(ZCL_USING_KEY_ESTABLISHMENT_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_KEY_ESTABLISHMENT_CLUSTER {ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, "Key establishment" },
#else
  #define __PRINTCLUSTER_KEY_ESTABLISHMENT_CLUSTER
#endif
#if defined(ZCL_USING_SAMPLE_MFG_SPECIFIC_CLUSTER_SERVER) || defined(ZCL_USING_SAMPLE_MFG_SPECIFIC_CLUSTER_CLIENT)
  #define __PRINTCLUSTER_SAMPLE_MFG_SPECIFIC_CLUSTER {ZCL_SAMPLE_MFG_SPECIFIC_CLUSTER_ID, "Sample Mfg Specific Cluster" },
#else
  #define __PRINTCLUSTER_SAMPLE_MFG_SPECIFIC_CLUSTER
#endif
#define CLUSTER_IDS_TO_NAMES \
  __PRINTCLUSTER_BASIC_CLUSTER \
  __PRINTCLUSTER_POWER_CONFIG_CLUSTER \
  __PRINTCLUSTER_DEVICE_TEMP_CLUSTER \
  __PRINTCLUSTER_IDENTIFY_CLUSTER \
  __PRINTCLUSTER_GROUPS_CLUSTER \
  __PRINTCLUSTER_SCENES_CLUSTER \
  __PRINTCLUSTER_ON_OFF_CLUSTER \
  __PRINTCLUSTER_ON_OFF_SWITCH_CONFIG_CLUSTER \
  __PRINTCLUSTER_LEVEL_CONTROL_CLUSTER \
  __PRINTCLUSTER_ALARM_CLUSTER \
  __PRINTCLUSTER_TIME_CLUSTER \
  __PRINTCLUSTER_RSSI_LOCATION_CLUSTER \
  __PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER \
  __PRINTCLUSTER_COMMISSIONING_CLUSTER \
  __PRINTCLUSTER_SHADE_CONFIG_CLUSTER \
  __PRINTCLUSTER_PUMP_CONFIG_CONTROL_CLUSTER \
  __PRINTCLUSTER_THERMOSTAT_CLUSTER \
  __PRINTCLUSTER_FAN_CONTROL_CLUSTER \
  __PRINTCLUSTER_DEHUMID_CONTROL_CLUSTER \
  __PRINTCLUSTER_THERMOSTAT_UI_CONFIG_CLUSTER \
  __PRINTCLUSTER_COLOR_CONTROL_CLUSTER \
  __PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER \
  __PRINTCLUSTER_ILLUM_MEASUREMENT_CLUSTER \
  __PRINTCLUSTER_ILLUM_LEVEL_SENSING_CLUSTER \
  __PRINTCLUSTER_TEMP_MEASUREMENT_CLUSTER \
  __PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER \
  __PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER \
  __PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER \
  __PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER \
  __PRINTCLUSTER_IAS_ZONE_CLUSTER \
  __PRINTCLUSTER_IAS_ACE_CLUSTER \
  __PRINTCLUSTER_IAS_WD_CLUSTER \
  __PRINTCLUSTER_DOOR_LOCK_CLUSTER \
  __PRINTCLUSTER_WINDOW_COVERING_CLUSTER \
  __PRINTCLUSTER_GENERIC_TUNNEL_CLUSTER \
  __PRINTCLUSTER_BACNET_PROTOCOL_TUNNEL_CLUSTER \
  __PRINTCLUSTER_OTA_BOOTLOAD_CLUSTER \
  __PRINTCLUSTER_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER \
  __PRINTCLUSTER_SIMPLE_METERING_CLUSTER \
  __PRINTCLUSTER_PRICE_CLUSTER \
  __PRINTCLUSTER_MESSAGING_CLUSTER \
  __PRINTCLUSTER_TUNNELING_CLUSTER \
  __PRINTCLUSTER_PREPAYMENT_CLUSTER \
  __PRINTCLUSTER_KEY_ESTABLISHMENT_CLUSTER \
  __PRINTCLUSTER_SAMPLE_MFG_SPECIFIC_CLUSTER \


#define MAX_CLUSTER_NAME_LENGTH  39