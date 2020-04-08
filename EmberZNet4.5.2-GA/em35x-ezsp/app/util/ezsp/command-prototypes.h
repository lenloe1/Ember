// File: command-prototypes.h
// 
// *** Generated file. Do not edit! ***
// 
// Description: Function prototypes for sending every EM260 frame and returning
// the result to the Host.
// 
// Copyright 2007 by Ember Corporation. All rights reserved.                *80*


//------------------------------------------------------------------------------
// Configuration Frames
//------------------------------------------------------------------------------

// The command allows the Host to specify the desired EZSP version and must be
// sent before any other command. This document describes EZSP version 4 and
// stack type 2 (mesh). The response provides information about the firmware
// running on the NCP.
// Return: The EZSP version the NCP is using (4).
int8u ezspVersion(
      // The EZSP version the Host wishes to use. To successfully set the
      // version and allow other commands, this must be 4.
      int8u desiredProtocolVersion,
      // Return: The type of stack running on the NCP (2).
      int8u *stackType,
      // Return: The version number of the stack.
      int16u *stackVersion);

// Reads a configuration value from the NCP.
// Return: EZSP_SUCCESS if the value was read successfully,
// EZSP_ERROR_INVALID_ID if the NCP does not recognize configId.
EzspStatus ezspGetConfigurationValue(
      // Identifies which configuration value to read.
      EzspConfigId configId,
      // Return: The configuration value.
      int16u *value);

// Writes a configuration value to the NCP. Configuration values can be modified
// by the Host after the NCP has reset. Once the status of the stack changes to
// EMBER_NETWORK_UP, configuration values can no longer be modified and this
// command will respond with EZSP_ERROR_INVALID_CALL.
// Return: EZSP_SUCCESS if the configuration value was changed,
// EZSP_ERROR_OUT_OF_MEMORY if the new value exceeded the available memory,
// EZSP_ERROR_INVALID_VALUE if the new value was out of bounds,
// EZSP_ERROR_INVALID_ID if the NCP does not recognize configId,
// EZSP_ERROR_INVALID_CALL if configuration values can no longer be modified.
EzspStatus ezspSetConfigurationValue(
      // Identifies which configuration value to change.
      EzspConfigId configId,
      // The new configuration value.
      int16u value);

// Configures endpoint information on the NCP. The NCP does not remember these
// settings after a reset. Endpoints can be added by the Host after the NCP has
// reset. Once the status of the stack changes to EMBER_NETWORK_UP, endpoints
// can no longer be added and this command will respond with
// EZSP_ERROR_INVALID_CALL.
// Return: EZSP_SUCCESS if the endpoint was added, EZSP_ERROR_OUT_OF_MEMORY if
// there is not enough memory available to add the endpoint,
// EZSP_ERROR_INVALID_VALUE if the endpoint already exists,
// EZSP_ERROR_INVALID_CALL if endpoints can no longer be added.
EzspStatus ezspAddEndpoint(
      // The application endpoint to be added.
      int8u endpoint,
      // The endpoint's application profile.
      int16u profileId,
      // The endpoint's device ID within the application profile.
      int16u deviceId,
      // The endpoint's device version.
      int8u deviceVersion,
      // The number of cluster IDs in inputClusterList.
      int8u inputClusterCount,
      // The number of cluster IDs in outputClusterList.
      int8u outputClusterCount,
      // Input cluster IDs the endpoint will accept.
      int16u *inputClusterList,
      // Output cluster IDs the endpoint may send.
      int16u *outputClusterList);

// Allows the Host to change the policies used by the NCP to make fast
// decisions.
// Return: EZSP_SUCCESS if the policy was changed, EZSP_ERROR_INVALID_ID if the
// NCP does not recognize policyId.
EzspStatus ezspSetPolicy(
      // Identifies which policy to modify.
      EzspPolicyId policyId,
      // The new decision for the specified policy.
      EzspDecisionId decisionId);

// Allows the Host to read the policies used by the NCP to make fast decisions.
// Return: EZSP_SUCCESS if the policy was read successfully,
// EZSP_ERROR_INVALID_ID if the NCP does not recognize policyId.
EzspStatus ezspGetPolicy(
      // Identifies which policy to read.
      EzspPolicyId policyId,
      // Return: The current decision for the specified policy.
      EzspDecisionId *decisionId);

// Reads a value from the NCP.
// Return: EZSP_SUCCESS if the value was read successfully,
// EZSP_ERROR_INVALID_ID if the NCP does not recognize valueId.
EzspStatus ezspGetValue(
      // Identifies which value to read.
      EzspValueId valueId,
      // Return: The length of the value parameter in bytes.
      int8u *valueLength,
      // Return: The value.
      int8u *value);

// Writes a value to the NCP.
// Return: EZSP_SUCCESS if the value was changed, EZSP_ERROR_INVALID_VALUE if
// the new value was out of bounds, EZSP_ERROR_INVALID_ID if the NCP does not
// recognize valueId, EZSP_ERROR_INVALID_CALL if the value could not be
// modified.
EzspStatus ezspSetValue(
      // Identifies which value to change.
      EzspValueId valueId,
      // The length of the value parameter in bytes.
      int8u valueLength,
      // The new value.
      int8u *value);

//------------------------------------------------------------------------------
// Utilities Frames
//------------------------------------------------------------------------------

// A command which does nothing. The Host can use this to set the sleep mode or
// to check the status of the NCP.
void ezspNop(void);

// Variable length data from the Host is echoed back by the NCP. This command
// has no other effects and is designed for testing the link between the Host
// and NCP.
// Return: The length of the echo parameter in bytes.
int8u ezspEcho(
      // The length of the data parameter in bytes.
      int8u dataLength,
      // The data to be echoed back.
      int8u *data,
      // Return: The echo of the data.
      int8u *echo);

// Allows the NCP to respond with a pending callback.
void ezspCallback(void);

// Callback
// Indicates that there are currently no pending callbacks.
void ezspNoCallbacks(void);

// Sets a token (8 bytes of non-volatile storage) in the Simulated EEPROM of the
// NCP.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSetToken(
      // Which token to set (0 to 7).
      int8u tokenId,
      // The data to write to the token.
      int8u *tokenData);

// Retrieves a token (8 bytes of non-volatile storage) from the Simulated EEPROM
// of the NCP.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspGetToken(
      // Which token to read (0 to 7).
      int8u tokenId,
      // Return: The contents of the token.
      int8u *tokenData);

// Retrieves a manufacturing token from the Flash Information Area of the NCP
// (except for EZSP_STACK_CAL_DATA which is managed by the stack).
// Return: The length of the tokenData parameter in bytes.
int8u ezspGetMfgToken(
      // Which manufacturing token to read.
      EzspMfgTokenId tokenId,
      // Return: The manufacturing token data.
      int8u *tokenData);

// Returns a pseudorandom number.
// Return: Always returns EMBER_SUCCESS.
EmberStatus ezspGetRandomNumber(
      // Return: A pseudorandom number.
      int16u *value);

// Sets a timer on the NCP. There are 2 independent timers available for use by
// the Host. A timer can be cancelled by setting time to 0 or units to
// EMBER_EVENT_INACTIVE.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSetTimer(
      // Which timer to set (0 or 1).
      int8u timerId,
      // The delay before the timerHandler callback will be generated. Note that
      // the timer clock is free running and is not synchronized with this
      // command. This means that the actual delay will be between time and
      // (time - 1). The maximum delay is 32767.
      int16u time,
      // The units for time.
      EmberEventUnits units,
      // If true, a timerHandler callback will be generated repeatedly. If
      // false, only a single timerHandler callback will be generated.
      boolean repeat);

// Gets information about a timer. The Host can use this command to find out how
// much longer it will be before a previously set timer will generate a
// callback.
// Return: The delay before the timerHandler callback will be generated.
int16u ezspGetTimer(
      // Which timer to get information about (0 or 1).
      int8u timerId,
      // Return: The units for time.
      EmberEventUnits *units,
      // Return: True if a timerHandler callback will be generated repeatedly.
      // False if only a single timerHandler callback will be generated.
      boolean *repeat);

// Callback
// A callback from the timer.
void ezspTimerHandler(
      // Which timer generated the callback (0 or 1).
      int8u timerId);

// Sends a debug message from the Host to the InSight debug system via the NCP.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspDebugWrite(
      // TRUE if the message should be interpreted as binary data, FALSE if the
      // message should be interpreted as ASCII text.
      boolean binaryMessage,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The binary message.
      int8u *messageContents);

// Retrieves and clears Ember counters. See the EmberCounterType enumeration for
// the counter types.
void ezspReadAndClearCounters(
      // Return: A list of all counter values ordered according to the
      // EmberCounterType enumeration.
      int16u *values);

// Used to test that UART flow control is working correctly.
void ezspDelayTest(
      // Data will not be read from the host for this many milliseconds.
      int16u delay);

// This retrieves the status of the passed library ID to determine if it is
// compiled into the stack.
// Return: The status of the library being queried.
EmberLibraryStatus emberGetLibraryStatus(
      // The ID of the library being queried.
      int8u libraryId);

//------------------------------------------------------------------------------
// Networking Frames
//------------------------------------------------------------------------------

// Sets the manufacturer code to the specified value. The manufacturer code is
// one of the fields of the node descriptor.
void emberSetManufacturerCode(
      // The manufacturer code for the local node.
      int16u code);

// Sets the power descriptor to the specified value. The power descriptor is a
// dynamic value, therefore you should call this function whenever the value
// changes.
void emberSetPowerDescriptor(
      // The new power descriptor for the local node.
      int16u descriptor);

// Resume network operation after a reboot. The node retains its original type.
// This should be called on startup whether or not the node was previously part
// of a network. EMBER_NOT_JOINED is returned if the node is not part of a
// network.
// Return: An EmberStatus value that indicates one of the following: successful
// initialization, EMBER_NOT_JOINED if the node is not part of a network, or the
// reason for failure.
EmberStatus emberNetworkInit(void);

// Returns a value indicating whether the node is joining, joined to, or leaving
// a network.
// Return: An EmberNetworkStatus value indicating the current join status.
EmberNetworkStatus emberNetworkState(void);

// Callback
// A callback invoked when the status of the stack changes. If the status
// parameter equals EMBER_NETWORK_UP, then the getNetworkParameters command can
// be called to obtain the new network parameters. If any of the parameters are
// being stored in nonvolatile memory by the Host, the stored values should be
// updated.
void ezspStackStatusHandler(
      // Stack status. One of the following: EMBER_NETWORK_UP,
      // EMBER_NETWORK_DOWN, EMBER_JOIN_FAILED, EMBER_MOVE_FAILED
      EmberStatus status);

// This function will start a scan.
// Return: EMBER_SUCCESS signals that the scan successfully started. Possible
// error responses and their meanings: EMBER_MAC_SCANNING, we are already
// scanning; EMBER_MAC_JOINED_NETWORK, we are currently joined to a network and
// can not begin a scan; EMBER_MAC_BAD_SCAN_DURATION, we have set a duration
// value that is not 0..14 inclusive; EMBER_MAC_INCORRECT_SCAN_TYPE, we have
// requested an undefined scanning type; EMBER_MAC_INVALID_CHANNEL_MASK, our
// channel mask did not specify any valid channels.
EmberStatus emberStartScan(
      // Indicates the type of scan to be performed. Possible values are:
      // EZSP_ENERGY_SCAN and EZSP_ACTIVE_SCAN. For each type, the respective
      // callback for reporting results is: energyScanResultHandler and
      // networkFoundHandler. The energy scan and active scan report errors and
      // completion via the scanCompleteHandler.
      EzspNetworkScanType scanType,
      // Bits set as 1 indicate that this particular channel should be scanned.
      // Bits set to 0 indicate that this particular channel should not be
      // scanned. For example, a channelMask value of 0x00000001 would indicate
      // that only channel 0 should be scanned. Valid channels range from 11 to
      // 26 inclusive. This translates to a channel mask value of 0x07FFF800. As
      // a convenience, a value of 0 is reinterpreted as the mask for the
      // current channel.
      int32u channelMask,
      // Sets the exponent of the number of scan periods, where a scan period is
      // 960 symbols. The scan will occur for ((2^duration) + 1) scan periods.
      int8u duration);

// Callback
// Reports the result of an energy scan for a single channel. The scan is not
// complete until the scanCompleteHandler callback is called.
void ezspEnergyScanResultHandler(
      // The 802.15.4 channel number that was scanned.
      int8u channel,
      // The maximum RSSI value found on the channel.
      int8s maxRssiValue);

// Callback
// Reports that a network was found as a result of a prior call to startScan.
// Gives the network parameters useful for deciding which network to join.
void ezspNetworkFoundHandler(
      // The parameters associated with the network found.
      EmberZigbeeNetwork *networkFound,
      // The link quality from the node that generated this beacon.
      int8u lastHopLqi,
      // The energy level (in units of dBm) observed during the reception.
      int8s lastHopRssi);

// Callback
// Returns the status of the current scan of type EZSP_ENERGY_SCAN or
// EZSP_ACTIVE_SCAN. EMBER_SUCCESS signals that the scan has completed. Other
// error conditions signify a failure to scan on the channel specified.
void ezspScanCompleteHandler(
      // The channel on which the current error occurred. Undefined for the case
      // of EMBER_SUCCESS.
      int8u channel,
      // The error condition that occurred on the current channel. Value will be
      // EMBER_SUCCESS when the scan has completed.
      EmberStatus status);

// Terminates a scan in progress.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberStopScan(void);

// Forms a new network by becoming the coordinator.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberFormNetwork(
      // Specification of the new network.
      EmberNetworkParameters *parameters);

// Causes the stack to associate with the network using the specified network
// parameters. It can take several seconds for the stack to associate with the
// local network. Do not send messages until the stackStatusHandler callback
// informs you that the stack is up.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberJoinNetwork(
      // Specification of the role that this node will have in the network. This
      // role must not be EMBER_COORDINATOR. To be a coordinator, use the
      // formNetwork command.
      EmberNodeType nodeType,
      // Specification of the network with which the node should associate.
      EmberNetworkParameters *parameters);

// Causes the stack to leave the current network. This generates a
// stackStatusHandler callback to indicate that the network is down. The radio
// will not be used until after sending a formNetwork or joinNetwork command.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberLeaveNetwork(void);

// The application may call this function when contact with the network has been
// lost. The most common usage case is when an end device can no longer
// communicate with its parent and wishes to find a new one. Another case is
// when a device has missed a Network Key update and no longer has the current
// Network Key.  The stack will call ezspStackStatusHandler to indicate that the
// network is down, then try to re-establish contact with the network by
// performing an active scan, choosing a network with matching extended pan id,
// and sending a ZigBee network rejoin request. A second call to the
// ezspStackStatusHandler callback indicates either the success or the failure
// of the attempt. The process takes approximately 150 milliseconds per channel
// to complete.  This call replaces the emberMobileNodeHasMoved API from
// EmberZNet 2.x, which used MAC association and consequently took half a second
// longer to complete.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberFindAndRejoinNetwork(
      // This parameter tells the stack whether to try to use the current
      // network key. If it has the current network key it will perform a secure
      // rejoin (encrypted). If this fails the device should try an unsecure
      // rejoin. If the Trust Center allows the rejoin then the current Network
      // Key will be sent encrypted using the device's Link Key. The unsecured
      // rejoin is only supported in the Commercial Security Library.
      boolean haveCurrentNetworkKey,
      // A mask indicating the channels to be scanned. See emberStartScan for
      // format details. A value of 0 is reinterprted as the mask for the
      // current channel.
      int32u channelMask);

// Tells the stack to allow other nodes to join the network with this node as
// their parent. Joining is initially disabled by default.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberPermitJoining(
      // A value of 0x00 disables joining. A value of 0xFF enables joining. Any
      // other value enables joining for that number of seconds.
      int8u duration);

// Callback
// Indicates that a child has joined or left.
void ezspChildJoinHandler(
      // The index of the child of interest.
      int8u index,
      // True if the child is joining. False the child is leaving.
      boolean joining,
      // The node ID of the child.
      EmberNodeId childId,
      // The EUI64 of the child.
      EmberEUI64 childEui64,
      // The node type of the child.
      EmberNodeType childType);

// Sends a ZDO energy scan request. This request may only be sent by the current
// network manager and must be unicast, not broadcast. See ezsp-utils.h for
// related macros emberSetNetworkManagerRequest() and
// emberChangeChannelRequest().
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberEnergyScanRequest(
      // The network address of the node to perform the scan.
      EmberNodeId target,
      // A mask of the channels to be scanned
      int32u scanChannels,
      // How long to scan on each channel. Allowed values are 0..5, with the
      // scan times as specified by 802.15.4 (0 = 31ms, 1 = 46ms, 2 = 77ms, 3 =
      // 138ms, 4 = 261ms, 5 = 507ms).
      int8u scanDuration,
      // The number of scans to be performed on each channel (1..8).
      int16u scanCount);

// Returns the EUI64 ID of the local node.
void ezspGetEui64(
      // Return: The 64-bit ID.
      EmberEUI64 eui64);

// Returns the 16-bit node ID of the local node.
// Return: The 16-bit ID.
EmberNodeId emberGetNodeId(void);

// Returns the current network parameters.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspGetNetworkParameters(
      // Return: An EmberNodeType value indicating the current node type.
      EmberNodeType *nodeType,
      // Return: The current network parameters.
      EmberNetworkParameters *parameters);

// Returns information about the children of the local node and the parent of
// the local node.
// Return: The number of children the node currently has.
int8u ezspGetParentChildParameters(
      // Return: The parent's EUI64. The value is undefined for nodes without
      // parents (coordinators and nodes that are not joined to a network).
      EmberEUI64 parentEui64,
      // Return: The parent's node ID. The value is undefined for nodes without
      // parents (coordinators and nodes that are not joined to a network).
      EmberNodeId *parentNodeId);

// Returns information about a child of the local node.
// Return: EMBER_SUCCESS if there is a child at index. EMBER_NOT_JOINED if there
// is no child at index.
EmberStatus ezspGetChildData(
      // The index of the child of interest in the child table. Possible indexes
      // range from zero to EMBER_CHILD_TABLE_SIZE.
      int8u index,
      // Return: The node ID of the child.
      EmberNodeId *childId,
      // Return: The EUI64 of the child.
      EmberEUI64 childEui64,
      // Return: The EmberNodeType value for the child.
      EmberNodeType *childType);

// Returns the neighbor table entry at the given index. The number of active
// neighbors can be obtained using the neighborCount command.
// Return: EMBER_ERR_FATAL if the index is greater or equal to the number of
// active neighbors, or if the device is an end device. Returns EMBER_SUCCESS
// otherwise.
EmberStatus emberGetNeighbor(
      // The index of the neighbor of interest. Neighbors are stored in
      // ascending order by node id, with all unused entries at the end of the
      // table.
      int8u index,
      // Return: The contents of the neighbor table entry.
      EmberNeighborTableEntry *value);

// Returns the number of active entries in the neighbor table.
// Return: The number of active entries in the neighbor table.
int8u emberNeighborCount(void);

// Returns the route table entry at the given index. The route table size can be
// obtained using the getConfigurationValue command.
// Return: EMBER_ERR_FATAL if the index is out of range or the device is an end
// device, and EMBER_SUCCESS otherwise.
EmberStatus emberGetRouteTableEntry(
      // The index of the route table entry of interest.
      int8u index,
      // Return: The contents of the route table entry.
      EmberRouteTableEntry *value);

// Sets the radio output power at which a node is operating. Ember radios have
// discrete power settings. For a list of available power settings, see the
// technical specification for the RF communication module in your Developer
// Kit. Note: Care should be taken when using this api on a running network, as
// it will directly impact the established link qualities neighboring nodes have
// with the node on which it is called. This can lead to disruption of existing
// routes and erratic network behavior.
// Return: An EmberStatus value indicating the success or failure of the
// command.
EmberStatus emberSetRadioPower(
      // Desired radio output power, in dBm.
      int8s power);

// Sets the channel to use for sending and receiving messages. For a list of
// available radio channels, see the technical specification for the RF
// communication module in your Developer Kit. Note: Care should be taken when
// using this API, as all devices on a network must use the same channel.
// Return: An EmberStatus value indicating the success or failure of the
// command.
EmberStatus emberSetRadioChannel(
      // Desired radio channel.
      int8u channel);

//------------------------------------------------------------------------------
// Binding Frames
//------------------------------------------------------------------------------

// Deletes all binding table entries.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberClearBindingTable(void);

// Sets an entry in the binding table.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberSetBinding(
      // The index of a binding table entry.
      int8u index,
      // The contents of the binding entry.
      EmberBindingTableEntry *value);

// Gets an entry from the binding table.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberGetBinding(
      // The index of a binding table entry.
      int8u index,
      // Return: The contents of the binding entry.
      EmberBindingTableEntry *value);

// Deletes a binding table entry.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus emberDeleteBinding(
      // The index of a binding table entry.
      int8u index);

// Indicates whether any messages are currently being sent using this binding
// table entry. Note that this command does not indicate whether a binding is
// clear. To determine whether a binding is clear, check whether the type field
// of the EmberBindingTableEntry has the value EMBER_UNUSED_BINDING.
// Return: True if the binding table entry is active, false otherwise.
boolean emberBindingIsActive(
      // The index of a binding table entry.
      int8u index);

// Returns the node ID for the binding's destination, if the ID is known. If a
// message is sent using the binding and the destination's ID is not known, the
// stack will discover the ID by broadcasting a ZDO address request. The
// application can avoid the need for this discovery by using
// setBindingRemoteNodeId when it knows the correct ID via some other means. The
// destination's node ID is forgotten when the binding is changed, when the
// local node reboots or, much more rarely, when the destination node changes
// its ID in response to an ID conflict.
// Return: The short ID of the destination node or EMBER_NULL_NODE_ID if no
// destination is known.
EmberNodeId emberGetBindingRemoteNodeId(
      // The index of a binding table entry.
      int8u index);

// Set the node ID for the binding's destination. See getBindingRemoteNodeId for
// a description.
void emberSetBindingRemoteNodeId(
      // The index of a binding table entry.
      int8u index,
      // The short ID of the destination node.
      EmberNodeId nodeId);

// Callback
// The NCP used the external binding modification policy to decide how to handle
// a remote set binding request. The Host cannot change the current decision,
// but it can change the policy for future decisions using the setPolicy
// command.
void ezspRemoteSetBindingHandler(
      // The requested binding.
      EmberBindingTableEntry *entry,
      // The index at which the binding was added.
      int8u index,
      // EMBER_SUCCESS if the binding was added to the table and any other
      // status if not.
      EmberStatus policyDecision);

// Callback
// The NCP used the external binding modification policy to decide how to handle
// a remote delete binding request. The Host cannot change the current decision,
// but it can change the policy for future decisions using the setPolicy
// command.
void ezspRemoteDeleteBindingHandler(
      // The index of the binding whose deletion was requested.
      int8u index,
      // EMBER_SUCCESS if the binding was removed from the table and any other
      // status if not.
      EmberStatus policyDecision);

//------------------------------------------------------------------------------
// Messaging Frames
//------------------------------------------------------------------------------

// Returns the maximum size of the payload. The size depends on the security
// level in use.
// Return: The maximum APS payload length.
int8u ezspMaximumPayloadLength(void);

// Sends a unicast message as per the ZigBee specification. The message will
// arrive at its destination only if there is a known route to the destination
// node. Setting the ENABLE_ROUTE_DISCOVERY option will cause a route to be
// discovered if none is known. Setting the FORCE_ROUTE_DISCOVERY option will
// force route discovery. Routes to end-device children of the local node are
// always known. Setting the APS_RETRY option will cause the message to be
// retransmitted until either a matching acknowledgement is received or three
// transmissions have been made. Note: Using the FORCE_ROUTE_DISCOVERY option
// will cause the first transmission to be consumed by a route request as part
// of discovery, so the application payload of this packet will not reach its
// destination on the first attempt. If you want the packet to reach its
// destination, the APS_RETRY option must be set so that another attempt is made
// to transmit the message with its application payload after the route has been
// constructed. Note: When sending fragmented messages, the stack will only
// assign a new APS sequence number for the first fragment of the message (i.e.,
// EMBER_APS_OPTION_FRAGMENT is set and the low-order byte of the groupId field
// in the APS frame is zero). For all subsequent fragments of the same message,
// the application must set the sequence number field in the APS frame to the
// sequence number assigned by the stack to the first fragment.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSendUnicast(
      // Specifies the outgoing message type. Must be one of
      // EMBER_OUTGOING_DIRECT, EMBER_OUTGOING_VIA_ADDRESS_TABLE, or
      // EMBER_OUTGOING_VIA_BINDING.
      EmberOutgoingMessageType type,
      // Depending on the type of addressing used, this is either the
      // EmberNodeId of the destination, an index into the address table, or an
      // index into the binding table.
      EmberNodeId indexOrDestination,
      // The APS frame which is to be added to the message.
      EmberApsFrame *apsFrame,
      // A value chosen by the Host. This value is used in the
      // ezspMessageSentHandler response to refer to this message.
      int8u messageTag,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // Content of the message.
      int8u *messageContents,
      // Return: The sequence number that will be used when this message is
      // transmitted.
      int8u *sequence);

// Sends a broadcast message as per the ZigBee specification.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSendBroadcast(
      // The destination to which to send the broadcast. This must be one of the
      // three ZigBee broadcast addresses.
      EmberNodeId destination,
      // The APS frame for the message.
      EmberApsFrame *apsFrame,
      // The message will be delivered to all nodes within radius hops of the
      // sender. A radius of zero is converted to EMBER_MAX_HOPS.
      int8u radius,
      // A value chosen by the Host. This value is used in the
      // ezspMessageSentHandler response to refer to this message.
      int8u messageTag,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The broadcast message.
      int8u *messageContents,
      // Return: The sequence number that will be used when this message is
      // transmitted.
      int8u *sequence);

// Sends a multicast message to all endpoints that share a specific multicast ID
// and are within a specified number of hops of the sender.
// Return: An EmberStatus value. For any result other than EMBER_SUCCESS, the
// message will not be sent. EMBER_SUCCESS - The message has been submitted for
// transmission. EMBER_INVALID_BINDING_INDEX - The bindingTableIndex refers to a
// non-multicast binding. EMBER_NETWORK_DOWN - The node is not part of a
// network. EMBER_MESSAGE_TOO_LONG - The message is too large to fit in a MAC
// layer frame. EMBER_NO_BUFFERS - The free packet buffer pool is empty.
// EMBER_NETWORK_BUSY - Insufficient resources avalable in Network or MAC layers
// to send message.
EmberStatus ezspSendMulticast(
      // The APS frame for the message. The multicast will be sent to the
      // groupId in this frame.
      EmberApsFrame *apsFrame,
      // The message will be delivered to all nodes within this number of hops
      // of the sender. A value of zero is converted to EMBER_MAX_HOPS.
      int8u hops,
      // The number of hops that the message will be forwarded by devices that
      // are not members of the group. A value of 7 or greater is treated as
      // infinite.
      int8u nonmemberRadius,
      // A value chosen by the Host. This value is used in the
      // ezspMessageSentHandler response to refer to this message.
      int8u messageTag,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The multicast message.
      int8u *messageContents,
      // Return: The sequence number that will be used when this message is
      // transmitted.
      int8u *sequence);

// Sends a reply to a received unicast message. The incomingMessageHandler
// callback for the unicast being replied to supplies the values for all the
// parameters except the reply itself.
// Return: An EmberStatus value. EMBER_INVALID_CALL - The
// EZSP_UNICAST_REPLIES_POLICY is set to EZSP_HOST_WILL_NOT_SUPPLY_REPLY. This
// means the NCP will automatically send an empty reply. The Host must change
// the policy to EZSP_HOST_WILL_SUPPLY_REPLY before it can supply the reply.
// There is one exception to this rule: In the case of responses to message
// fragments, the host must call sendReply when a message fragment is received.
// In this case, the policy set on the NCP does not matter. The NCP expects a
// sendReply call from the Host for message fragments regardless of the current
// policy settings. EMBER_NO_BUFFERS - Not enough memory was available to send
// the reply. EMBER_NETWORK_BUSY - Either no route or insufficient resources
// available. EMBER_SUCCESS - The reply was successfully queued for
// transmission.
EmberStatus ezspSendReply(
      // Value supplied by incoming unicast.
      EmberNodeId sender,
      // Value supplied by incoming unicast.
      EmberApsFrame *apsFrame,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The reply message.
      int8u *messageContents);

// Callback
// A callback indicating the stack has completed sending a message.
void ezspMessageSentHandler(
      // The type of message sent.
      EmberOutgoingMessageType type,
      // The destination to which the message was sent, for direct unicasts, or
      // the address table or binding index for other unicasts. The value is
      // unspecified for multicasts and broadcasts.
      int16u indexOrDestination,
      // The APS frame for the message.
      EmberApsFrame *apsFrame,
      // The value supplied by the Host in the ezspSendUnicast,
      // ezspSendBroadcast or ezspSendMulticast command.
      int8u messageTag,
      // An EmberStatus value of EMBER_SUCCESS if an ACK was received from the
      // destination or EMBER_DELIVERY_FAILED if no ACK was received.
      EmberStatus status,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The unicast message supplied by the Host. The message contents are only
      // included here if the decision for the messageContentsInCallback policy
      // is messageTagAndContentsInCallback.
      int8u *messageContents);

// Sends a route request packet that creates routes from every node in the
// network back to this node. This function should be called by an application
// that wishes to communicate with many nodes, for example, a gateway, central
// monitor, or controller. A device using this function was referred to as an
// 'aggregator' in EmberZNet 2.x and earlier, and is referred to as a
// 'concentrator' in the ZigBee specification and EmberZNet 3.  This function
// enables large scale networks, because the other devices do not have to
// individually perform bandwidth-intensive route discoveries. Instead, when a
// remote node sends an APS unicast to a concentrator, its network layer
// automatically delivers a special route record packet first, which lists the
// network ids of all the intermediate relays. The concentrator can then use
// source routing to send outbound APS unicasts. (A source routed message is one
// in which the entire route is listed in the network layer header.) This allows
// the concentrator to communicate with thousands of devices without requiring
// large route tables on neighboring nodes.  This function is only available in
// ZigBee Pro (stack profile 2), and cannot be called on end devices. Any router
// can be a concentrator (not just the coordinator), and there can be multiple
// concentrators on a network.  Note that a concentrator does not automatically
// obtain routes to all network nodes after calling this function. Remote
// applications must first initiate an inbound APS unicast.  Many-to-one routes
// are not repaired automatically. Instead, the concentrator application must
// call this function to rediscover the routes as necessary, for example, upon
// failure of a retried APS message. The reason for this is that there is no
// scalable one-size-fits-all route repair strategy. A common and recommended
// strategy is for the concentrator application to refresh the routes by calling
// this function periodically.
// Return: EMBER_SUCCESS if the route request was successfully submitted to the
// transmit queue, and EMBER_ERR_FATAL otherwise.
EmberStatus emberSendManyToOneRouteRequest(
      // Must be either EMBER_HIGH_RAM_CONCENTRATOR or
      // EMBER_LOW_RAM_CONCENTRATOR. The former is used when the caller has
      // enough memory to store source routes for the whole network. In that
      // case, remote nodes stop sending route records once the concentrator has
      // successfully received one. The latter is used when the concentrator has
      // insufficient RAM to store all outbound source routes. In that case,
      // route records are sent to the concentrator prior to every inbound APS
      // unicast.
      int16u concentratorType,
      // The maximum number of hops the route request will be relayed. A radius
      // of zero is converted to EMBER_MAX_HOPS
      int8u radius);

// Periodically request any pending data from our parent. Setting interval to 0
// or units to EMBER_EVENT_INACTIVE will generate a single poll.
// Return: The result of sending the first poll.
EmberStatus ezspPollForData(
      // The time between polls. Note that the timer clock is free running and
      // is not synchronized with this command. This means that the time will be
      // between interval and (interval - 1). The maximum interval is 32767.
      int16u interval,
      // The units for interval.
      EmberEventUnits units,
      // The number of poll failures that will be tolerated before a
      // pollCompleteHandler callback is generated. A value of zero will result
      // in a callback for every poll. Any status value apart from EMBER_SUCCESS
      // and EMBER_MAC_NO_DATA is counted as a failure.
      int8u failureLimit);

// Callback
// Indicates the result of a data poll to the parent of the local node.
void ezspPollCompleteHandler(
      // An EmberStatus value: EMBER_SUCCESS - Data was received in response to
      // the poll. EMBER_MAC_NO_DATA - No data was pending.
      // EMBER_DELIVERY_FAILED - The poll message could not be sent.
      // EMBER_MAC_NO_ACK_RECEIVED - The poll message was sent but not
      // acknowledged by the parent.
      EmberStatus status);

// Callback
// Indicates that the local node received a data poll from a child.
void ezspPollHandler(
      // The node ID of the child that is requesting data.
      EmberNodeId childId);

// Callback
// A callback indicating a message has been received containing the EUI64 of the
// sender. This callback is called immediately before the incomingMessageHandler
// callback. It is not called if the incoming message did not contain the EUI64
// of the sender.
void ezspIncomingSenderEui64Handler(
      // The EUI64 of the sender
      EmberEUI64 senderEui64);

// Callback
// A callback indicating a message has been received.
void ezspIncomingMessageHandler(
      // The type of the incoming message. One of the following:
      // EMBER_INCOMING_UNICAST, EMBER_INCOMING_UNICAST_REPLY,
      // EMBER_INCOMING_MULTICAST, EMBER_INCOMING_MULTICAST_LOOPBACK,
      // EMBER_INCOMING_BROADCAST, EMBER_INCOMING_BROADCAST_LOOPBACK
      EmberIncomingMessageType type,
      // The APS frame from the incoming message.
      EmberApsFrame *apsFrame,
      // The link quality from the node that last relayed the message.
      int8u lastHopLqi,
      // The energy level (in units of dBm) observed during the reception.
      int8s lastHopRssi,
      // The sender of the message.
      EmberNodeId sender,
      // The index of a binding that matches the message or 0xFF if there is no
      // matching binding.
      int8u bindingIndex,
      // The index of the entry in the address table that matches the sender of
      // the message or 0xFF if there is no matching entry.
      int8u addressIndex,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The incoming message.
      int8u *messageContents);

// Callback
// Reports the arrival of a route record command frame.
void ezspIncomingRouteRecordHandler(
      // The source of the route record.
      EmberNodeId source,
      // The EUI64 of the source.
      EmberEUI64 sourceEui,
      // The link quality from the node that last relayed the route record.
      int8u lastHopLqi,
      // The energy level (in units of dBm) observed during the reception.
      int8s lastHopRssi,
      // The number of relays in relayList.
      int8u relayCount,
      // The route record. Each relay in the list is an int16u node ID. The list
      // is passed as int8u * to avoid alignment problems.
      int8u *relayList);

// Supply a source route for the next outgoing message.
// Return: EMBER_SUCCESS if the source route was successfully stored, and
// EMBER_NO_BUFFERS otherwise.
EmberStatus ezspSetSourceRoute(
      // The destination of the source route.
      EmberNodeId destination,
      // The number of relays in relayList.
      int8u relayCount,
      // The source route.
      int16u *relayList);

// Callback
// A callback indicating that a many-to-one route to the concentrator with the
// given short and long id is available for use.
void ezspIncomingManyToOneRouteRequestHandler(
      // The short id of the concentrator.
      EmberNodeId source,
      // The EUI64 of the concentrator.
      EmberEUI64 longId,
      // The path cost to the concentrator. The cost may decrease as additional
      // route request packets for this discovery arrive, but the callback is
      // made only once.
      int8u cost);

// Callback
// A callback invoked when a route error message is received. The error
// indicates that a problem routing to or from the target node was encountered.
void ezspIncomingRouteErrorHandler(
      // EMBER_SOURCE_ROUTE_FAILURE or EMBER_MANY_TO_ONE_ROUTE_FAILURE.
      EmberStatus status,
      // The short id of the remote node.
      EmberNodeId target);

// Indicates whether any messages are currently being sent using this address
// table entry. Note that this function does not indicate whether the address
// table entry is unused. To determine whether an address table entry is unused,
// check the remote node ID. The remote node ID will have the value
// EMBER_TABLE_ENTRY_UNUSED_NODE_ID when the address table entry is not in use.
// Return: True if the address table entry is active, false otherwise.
boolean emberAddressTableEntryIsActive(
      // The index of an address table entry.
      int8u addressTableIndex);

// Sets the EUI64 of an address table entry. This function will also check other
// address table entries, the child table and the neighbor table to see if the
// node ID for the given EUI64 is already known. If known then this function
// will also set node ID. If not known it will set the node ID to
// EMBER_UNKNOWN_NODE_ID.
// Return: EMBER_SUCCESS if the EUI64 was successfully set, and
// EMBER_ADDRESS_TABLE_ENTRY_IS_ACTIVE otherwise.
EmberStatus emberSetAddressTableRemoteEui64(
      // The index of an address table entry.
      int8u addressTableIndex,
      // The EUI64 to use for the address table entry.
      EmberEUI64 eui64);

// Sets the short ID of an address table entry. Usually the application will not
// need to set the short ID in the address table. Once the remote EUI64 is set
// the stack is capable of figuring out the short ID on it's own. However, in
// cases where the application does set the short ID, the application must set
// the remote EUI64 prior to setting the short ID.
void emberSetAddressTableRemoteNodeId(
      // The index of an address table entry.
      int8u addressTableIndex,
      // The short ID corresponding to the remote node whose EUI64 is stored in
      // the address table at the given index or
      // EMBER_TABLE_ENTRY_UNUSED_NODE_ID which indicates that the entry stored
      // in the address table at the given index is not in use.
      EmberNodeId id);

// Gets the EUI64 of an address table entry.
void emberGetAddressTableRemoteEui64(
      // The index of an address table entry.
      int8u addressTableIndex,
      // Return: The EUI64 of the address table entry is copied to this
      // location.
      EmberEUI64 eui64);

// Gets the short ID of an address table entry.
// Return: One of the following: The short ID corresponding to the remote node
// whose EUI64 is stored in the address table at the given index.
// EMBER_UNKNOWN_NODE_ID - Indicates that the EUI64 stored in the address table
// at the given index is valid but the short ID is currently unknown.
// EMBER_DISCOVERY_ACTIVE_NODE_ID - Indicates that the EUI64 stored in the
// address table at the given location is valid and network address discovery is
// underway. EMBER_TABLE_ENTRY_UNUSED_NODE_ID - Indicates that the entry stored
// in the address table at the given index is not in use.
EmberNodeId emberGetAddressTableRemoteNodeId(
      // The index of an address table entry.
      int8u addressTableIndex);

// Tells the stack whether or not the normal interval between retransmissions of
// a retried unicast message should be increased by
// EMBER_INDIRECT_TRANSMISSION_TIMEOUT. The interval needs to be increased when
// sending to a sleepy node so that the message is not retransmitted until the
// destination has had time to wake up and poll its parent. The stack will
// automatically extend the timeout: - For our own sleepy children. - When an
// address response is received from a parent on behalf of its child. - When an
// indirect transaction expiry route error is received. - When an end device
// announcement is received from a sleepy node.
void emberSetExtendedTimeout(
      // The address of the node for which the timeout is to be set.
      EmberEUI64 remoteEui64,
      // TRUE if the retry interval should be increased by
      // EMBER_INDIRECT_TRANSMISSION_TIMEOUT. FALSE if the normal retry interval
      // should be used.
      boolean extendedTimeout);

// Indicates whether or not the stack will extend the normal interval between
// retransmissions of a retried unicast message by
// EMBER_INDIRECT_TRANSMISSION_TIMEOUT.
// Return: TRUE if the retry interval will be increased by
// EMBER_INDIRECT_TRANSMISSION_TIMEOUT and FALSE if the normal retry interval
// will be used.
boolean emberGetExtendedTimeout(
      // The address of the node for which the timeout is to be returned.
      EmberEUI64 remoteEui64);

// Replaces the EUI64, short ID and extended timeout setting of an address table
// entry. The previous EUI64, short ID and extended timeout setting are
// returned.
// Return: EMBER_SUCCESS if the EUI64, short ID and extended timeout setting
// were successfully modified, and EMBER_ADDRESS_TABLE_ENTRY_IS_ACTIVE
// otherwise.
EmberStatus ezspReplaceAddressTableEntry(
      // The index of the address table entry that will be modified.
      int8u addressTableIndex,
      // The EUI64 to be written to the address table entry.
      EmberEUI64 newEui64,
      // One of the following: The short ID corresponding to the new EUI64.
      // EMBER_UNKNOWN_NODE_ID if the new EUI64 is valid but the short ID is
      // unknown and should be discovered by the stack.
      // EMBER_TABLE_ENTRY_UNUSED_NODE_ID if the address table entry is now
      // unused.
      EmberNodeId newId,
      // TRUE if the retry interval should be increased by
      // EMBER_INDIRECT_TRANSMISSION_TIMEOUT. FALSE if the normal retry interval
      // should be used.
      boolean newExtendedTimeout,
      // Return: The EUI64 of the address table entry before it was modified.
      EmberEUI64 oldEui64,
      // Return: One of the following: The short ID corresponding to the EUI64
      // before it was modified. EMBER_UNKNOWN_NODE_ID if the short ID was
      // unknown. EMBER_DISCOVERY_ACTIVE_NODE_ID if discovery of the short ID
      // was underway. EMBER_TABLE_ENTRY_UNUSED_NODE_ID if the address table
      // entry was unused.
      EmberNodeId *oldId,
      // Return: TRUE if the retry interval was being increased by
      // EMBER_INDIRECT_TRANSMISSION_TIMEOUT. FALSE if the normal retry interval
      // was being used.
      boolean *oldExtendedTimeout);

// Returns the node ID that corresponds to the specified EUI64. The node ID is
// found by searching through all stack tables for the specified EUI64.
// Return: The short ID of the node or EMBER_NULL_NODE_ID if the short ID is not
// known.
EmberNodeId emberLookupNodeIdByEui64(
      // The EUI64 of the node to look up.
      EmberEUI64 eui64);

// Returns the EUI64 that corresponds to the specified node ID. The EUI64 is
// found by searching through all stack tables for the specified node ID.
// Return: EMBER_SUCCESS if the EUI64 was found, EMBER_ERR_FATAL if the EUI64 is
// not known.
EmberStatus emberLookupEui64ByNodeId(
      // The short ID of the node to look up.
      EmberNodeId nodeId,
      // Return: The EUI64 of the node.
      EmberEUI64 eui64);

// Gets an entry from the multicast table.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspGetMulticastTableEntry(
      // The index of a multicast table entry.
      int8u index,
      // Return: The contents of the multicast entry.
      EmberMulticastTableEntry *value);

// Sets an entry in the multicast table.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSetMulticastTableEntry(
      // The index of a multicast table entry
      int8u index,
      // The contents of the multicast entry.
      EmberMulticastTableEntry *value);

// Callback
// A callback invoked by the EmberZNet stack when an id conflict is discovered,
// that is, two different nodes in the network were found to be using the same
// short id. The stack automatically removes the conflicting short id from its
// internal tables (address, binding, route, neighbor, and child tables). The
// application should discontinue any other use of the id.
void ezspIdConflictHandler(
      // The short id for which a conflict was detected
      EmberNodeId id);

// Transmits the given message without modification. The MAC header is assumed
// to be configured in the message at the time this function is called.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSendRawMessage(
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The raw message.
      int8u *messageContents);

// Callback
// A callback invoked by the EmberZNet stack when a MAC passthrough message is
// received.
void ezspMacPassthroughMessageHandler(
      // The type of MAC passthrough message received.
      EmberMacPassthroughType messageType,
      // The link quality from the node that last relayed the message.
      int8u lastHopLqi,
      // The energy level (in units of dBm) observed during reception.
      int8s lastHopRssi,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The raw message that was received.
      int8u *messageContents);

// Callback
// A callback invoked by the EmberZNet stack when the MAC has finished
// transmitting a raw message.
void ezspRawTransmitCompleteHandler(
      // EMBER_SUCCESS if the transmission was successful, or
      // EMBER_DELIVERY_FAILED if not
      EmberStatus status);

//------------------------------------------------------------------------------
// Security Frames
//------------------------------------------------------------------------------

// Sets the security state that will be used by the device when it forms or
// joins the network. This call should not be used when restoring saved network
// state via networkInit as this will result in a loss of security data and will
// cause communication problems when the device re-enters the network.
// Return: The success or failure code of the operation.
EmberStatus emberSetInitialSecurityState(
      // The security configuration to be set.
      EmberInitialSecurityState *state);

// Gets the current security state that is being used by a device that is joined
// in the network.
// Return: The success or failure code of the operation.
EmberStatus emberGetCurrentSecurityState(
      // Return: The security configuration in use by the stack.
      EmberCurrentSecurityState *state);

// Gets a Security Key based on the passed key type.
// Return: The success or failure code of the operation.
EmberStatus emberGetKey(
      EmberKeyType keyType,
      // Return: The structure containing the key and its associated data.
      EmberKeyStruct *keyStruct);

// Callback
// A callback to inform the application that the Network Key has been updated
// and the node has been switched over to use the new key. The actual key being
// used is not passed up, but the sequence number is.
void ezspSwitchNetworkKeyHandler(
      // The sequence number of the new network key.
      int8u sequenceNumber);

// This function retrieves the key table entry at the specified index. If the
// index is invalid or the key table entry is empty, then FALSE is returned.
// Return: The success or failure error code of the operation.
EmberStatus emberGetKeyTableEntry(
      // The index of the entry in the table to retrieve.
      int8u index,
      // Return: A structure containing the data to be written by the stack.
      EmberKeyStruct *keyStruct);

// This function sets the key table entry at the specified index. If the index
// is invalid, then FALSE is returned.
// Return: The success or failure error code of the operation.
EmberStatus emberSetKeyTableEntry(
      // The index of the entry in the table to set.
      int8u index,
      // The address of the partner device that shares the key
      EmberEUI64 address,
      // This boolean indicates whether the key is a Link or a Master Key
      boolean linkKey,
      // The actual key data associated with the table entry.
      EmberKeyData *keyData);

// This function searches through the Key Table and tries to find the entry that
// matches the passed search criteria.
// Return: This indicates the index of the entry that matches the search
// criteria. A value of 0xFF is returned if not matching entry is found.
int8u emberFindKeyTableEntry(
      // The address to search for. Alternatively, all zeros may be passed in to
      // search for the first empty entry.
      EmberEUI64 address,
      // This indicates whether to search for an entry that contains a link key
      // or a master key. TRUE means to search for an entry with a Link Key.
      boolean linkKey);

// This function updates an existing entry in the key table or adds a new one.
// It first searches the table for an existing entry that matches the passed
// EUI64 address. If no entry is found, it searches for the first free entry. If
// successful, it updates the key data and resets the associated incoming frame
// counter. If it fails to find an existing entry and no free one exists, it
// returns a failure.
// Return: The success or failure error code of the operation.
EmberStatus emberAddOrUpdateKeyTableEntry(
      // The address of the partner device associated with the Key.
      EmberEUI64 address,
      // An indication of whether this is a Link Key (TRUE) or Master Key
      // (FALSE)
      boolean linkKey,
      // The actual key data associated with the entry.
      EmberKeyData *keyData);

// This function erases the data in the key table entry at the specified index.
// If the index is invalid, FALSE is returned.
// Return: The success or failure of the operation.
EmberStatus emberEraseKeyTableEntry(
      // This indicates the index of entry to erase.
      int8u index);

// A function to request a Link Key from the Trust Center with another device
// device on the Network (which could be the Trust Center). A Link Key with the
// Trust Center is possible but the requesting device cannot be the Trust
// Center. Link Keys are optional in ZigBee Standard Security and thus the stack
// cannot know whether the other device supports them. If
// EMBER_REQUEST_KEY_TIMEOUT is non-zero on the Trust Center and the partner
// device is not the Trust Center, both devices must request keys with their
// partner device within the time period. The Trust Center only supports one
// outstanding key request at a time and therefore will ignore other requests.
// If the timeout is zero then the Trust Center will immediately respond and not
// wait for the second request. The Trust Center will always immediately respond
// to requests for a Link Key with it. Sleepy devices should poll at a higher
// rate until a response is received or the request times out. The success or
// failure of the request is returned via ezspZigbeeKeyEstablishmentHandler(...)
// Return: The success or failure of sending the request. This is not the final
// result of the attempt. ezspZigbeeKeyEstablishmentHandler(...) will return
// that.
EmberStatus emberRequestLinkKey(
      // This is the IEEE address of the partner device that will share the link
      // key.
      EmberEUI64 partner);

// Callback
// This is a callback that indicates the success or failure of an attempt to
// establish a key with a partner device.
void ezspZigbeeKeyEstablishmentHandler(
      // This is the IEEE address of the partner that the device successfully
      // established a key with. This value is all zeros on a failure.
      EmberEUI64 partner,
      // This is the status indicating what was established or why the key
      // establishment failed.
      EmberKeyStatus status);

//------------------------------------------------------------------------------
// Trust Center Frames
//------------------------------------------------------------------------------

// Callback
// The NCP used the trust center behavior policy to decide whether to allow a
// new node to join the network. The Host cannot change the current decision,
// but it can change the policy for future decisions using the setPolicy
// command.
void ezspTrustCenterJoinHandler(
      // The Node Id of the node whose status changed
      EmberNodeId newNodeId,
      // The EUI64 of the node whose status changed.
      EmberEUI64 newNodeEui64,
      // The status of the node: Secure Join/Rejoin, Unsecure Join/Rejoin,
      // Device left.
      EmberDeviceUpdate status,
      // An EmberJoinDecision reflecting the decision made.
      EmberJoinDecision policyDecision,
      // The parent of the node whose status has changed.
      EmberNodeId parentOfNewNodeId);

// This function broadcasts a new encryption key, but does not tell the nodes in
// the network to start using it. To tell nodes to switch to the new key, use
// emberSendNetworkKeySwitch(). This is only valid for the Trust
// Center/Coordinator. It is up to the application to determine how quickly to
// send the Switch Key after sending the alternate encryption key.
// Return: EmberStatus value that indicates the success or failure of the
// command.
EmberStatus emberBroadcastNextNetworkKey(
      // An optional pointer to a 16-byte encryption key
      // (EMBER_ENCRYPTION_KEY_SIZE). An all zero key may be passed in, which
      // will cause the stack to randomly generate a new key.
      EmberKeyData *key);

// This function broadcasts a switch key message to tell all nodes to change to
// the sequence number of the previously sent Alternate Encryption Key.
// Return: EmberStatus value that indicates the success or failure of the
// command.
EmberStatus emberBroadcastNetworkKeySwitch(void);

// This function causes a coordinator to become the Trust Center when it is
// operating in a network that is not using one. It will send out an updated
// Network Key to all devices that will indicate a transition of the network to
// now use a Trust Center. The Trust Center should also switch all devices to
// using this new network key with the appropriate API.
EmberStatus emberBecomeTrustCenter(
      // The key data for the Updated Network Key.
      EmberKeyData *newNetworkKey);

// This routine processes the passed chunk of data and updates the hash context
// based on it. If the 'finalize' parameter is not set, then the length of the
// data passed in must be a multiple of 16. If the 'finalize' parameter is set
// then the length can be any value up 1-16, and the final hash value will be
// calculated.
// Return: The result of the operation
EmberStatus ezspAesMmoHash(
      // The hash context to update.
      EmberAesMmoHashContext *context,
      // This indicates whether the final hash value should be calculated
      boolean finalize,
      // The length of the data to hash.
      int8u length,
      // The data to hash.
      int8u *data,
      // Return: The updated hash context.
      EmberAesMmoHashContext *returnContext);

// This command sends an APS remove device using APS encryption to the
// destination indicating either to remove itself from the network, or one of
// its children.
// Return: An EmberStatus value indicating success, or the reason for failure
EmberStatus ezspRemoveDevice(
      // The node ID of the device that will receive the message
      EmberNodeId destShort,
      // The long address (EUI64) of the device that will receive the message.
      EmberEUI64 destLong,
      // The long address (EUI64) of the device to be removed.
      int8u *targetLong);

// This command will send a unicast transport key message with a new NWK key to
// the specified device. APS encryption using the device's existing link key
// will be used.
// Return: An EmberStatus value indicating success, or the reason for failure
EmberStatus ezspUnicastNwkKeyUpdate(
      // The node ID of the device that will receive the message
      EmberNodeId destShort,
      // The long address (EUI64) of the device that will receive the message.
      EmberEUI64 destLong,
      // The the NWK key to send to the new device.
      EmberKeyData *key);

//------------------------------------------------------------------------------
// Certificate Based Key Exchange (CBKE)
//------------------------------------------------------------------------------

// This call starts the generation of the ECC Ephemeral Public/Private key pair.
// When complete it stores the private key. The results are returned via
// ezspGenerateCbkeKeysHandler().
EmberStatus emberGenerateCbkeKeys(void);

// Callback
// A callback by the Crypto Engine indicating that a new ephemeral
// public/private key pair has been generated. The public/private key pair is
// stored on the NCP, but only the associated public key is returned to the
// host. The node's associated certificate is also returned.
void ezspGenerateCbkeKeysHandler(
      // The result of the CBKE operation.
      EmberStatus status,
      // The generated ephemeral public key.
      EmberPublicKeyData *ephemeralPublicKey);

// Calculates the SMAC verification keys for both the initiator and responder
// roles of CBKE using the passed parameters and the stored public/private key
// pair previously generated with ezspGenerateKeysRetrieveCert(). It also stores
// the unverified link key data in temporary storage on the NCP until the key
// establishment is complete.
EmberStatus emberCalculateSmacs(
      // The role of this device in the Key Establishment protocol.
      boolean amInitiator,
      // The key establishment partner's implicit certificate.
      EmberCertificateData *partnerCertificate,
      // The key establishment partner's ephemeral public key
      EmberPublicKeyData *partnerEphemeralPublicKey);

// Callback
// A callback to indicate that the NCP has finished calculating the Secure
// Message Authentication Codes (SMAC) for both the initiator and responder. The
// associated link key is kept in temporary storage until the host tells the NCP
// to store or discard the key via emberClearTemporaryDataMaybeStoreLinkKey().
void ezspCalculateSmacsHandler(
      // The Result of the CBKE operation.
      EmberStatus status,
      // The calculated value of the initiator's SMAC
      EmberSmacData *initiatorSmac,
      // The calculated value of the responder's SMAC
      EmberSmacData *responderSmac);

// Clears the temporary data associated with CBKE and the key establishment,
// most notably the ephemeral public/private key pair. If storeLinKey is TRUE it
// moves the unverfied link key stored in temporary storage into the link key
// table. Otherwise it discards the key.
EmberStatus emberClearTemporaryDataMaybeStoreLinkKey(
      // A boolean indicating whether to store (TRUE) or discard (FALSE) the
      // unverified link key derived when ezspCalculateSmacs() was previously
      // called.
      boolean storeLinkKey);

// Retrieves the certificate installed on the NCP.
EmberStatus emberGetCertificate(
      // Return: The locally installed certificate.
      EmberCertificateData *localCert);

// LEGACY FUNCTION: This functionality has been replaced by a single bit in the
// EmberApsFrame, EMBER_APS_OPTION_DSA_SIGN. Devices wishing to send signed
// messages should use that as it requires fewer function calls and message
// buffering. The dsaSignHandler response is still called when
// EMBER_APS_OPTION_DSA_SIGN is used. However, this function is still supported.
// This function begins the process of signing the passed message contained
// within the messageContents array. If no other ECC operation is going on, it
// will immediately return with EMBER_OPERATION_IN_PROGRESS to indicate the
// start of ECC operation. It will delay a period of time to let APS retries
// take place, but then it will shutdown the radio and consume the CPU
// processing until the signing is complete. This may take up to 1 second. The
// signed message will be returned in the dsaSignHandler response. Note that the
// last byte of the messageContents passed to this function has special
// significance. As the typical use case for DSA signing is to sign the ZCL
// payload of a DRLC Report Event Status message in SE 1.0, there is often both
// a signed portion (ZCL payload) and an unsigned portion (ZCL header). The last
// byte in the content of messageToSign is therefore used as a special indicator
// to signify how many bytes of leading data in the array should be excluded
// from consideration during the signing process. If the signature needs to
// cover the entire array (all bytes except last one), the caller should ensure
// that the last byte of messageContents is 0x00. When the signature operation
// is complete, this final byte will be replaced by the signature type indicator
// (0x01 for ECDSA signatures), and the actual signature will be appended to the
// original contents after this byte.
// Return: EMBER_OPERATION_IN_PROGRESS if the stack has queued up the operation
// for execution. EMBER_INVALID_CALL if the operation can't be performed in this
// context, possibly because another ECC operation is pending.
EmberStatus ezspDsaSign(
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The message contents for which to create a signature. Per above notes,
      // this may include a leading portion of data not included in the
      // signature, in which case the last byte of this array should be set to
      // the index of the first byte to be considered for signing. Otherwise,
      // the last byte of messageContents should be 0x00 to indicate that a
      // signature should occur across the entire contents.
      int8u *messageContents);

// Callback
// The handler that returns the results of the signing operation. On success,
// the signature will be appended to the original message (including the
// signature type indicator that replaced the startIndex field for the signing)
// and both are returned via this callback.
void ezspDsaSignHandler(
      // The result of the DSA signing operation.
      EmberStatus status,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The message and attached which includes the original message and the
      // appended signature.
      int8u *messageContents);

// Verify that signature of the associated message digest was signed by the
// private key of the associated certificate.
EmberStatus emberDsaVerify(
      // The AES-MMO message digest of the signed data. If dsaSign command was
      // used to generate the signature for this data, the final byte (replaced
      // by signature type of 0x01) in the messageContents array passed to
      // dsaSign is included in the has context used for the digest calculation.
      EmberMessageDigest *digest,
      // The certificate of the signer. Note that the signer's certificate and
      // the verifier's certificate must both be issued by the same Certificate
      // Authority, so they should share the same CA Public Key.
      EmberCertificateData *signerCertificate,
      // The signature of the signed data.
      EmberSignatureData *receivedSig);

// Callback
// This callback is executed by the stack when the DSA verification has
// completed and has a result. If the result is EMBER_SUCCESS, the signature is
// valid. If the result is EMBER_SIGNATURE_VERIFY_FAILURE then the signature is
// invalid. If the result is anything else then the signature verify operation
// failed and the validity is unknown.
void ezspDsaVerifyHandler(
      // The result of the DSA verification operation.
      EmberStatus status);

// Sets the device's CA public key, local certificate, and static private key on
// the NCP associated with this node.
EmberStatus emberSetPreinstalledCbkeData(
      // The Certificate Authority's public key.
      EmberPublicKeyData *caPublic,
      // The node's new certificate signed by the CA.
      EmberCertificateData *myCert,
      // The node's new static private key.
      EmberPrivateKeyData *myKey);

//------------------------------------------------------------------------------
// Mfglib
//------------------------------------------------------------------------------

// Activate use of mfglib test routines and enables the radio receiver to report
// packets it receives to the mfgLibRxHandler() callback. These packets will not
// be passed up with a CRC failure. All other mfglib functions will return an
// error until the mfglibStart() has been called
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspMfglibStart(
      // TRUE to generate a mfglibRxHandler callback when a packet is received.
      boolean rxCallback);

// Deactivate use of mfglib test routines; restores the hardware to the state it
// was in prior to mfglibStart() and stops receiving packets started by
// mfglibStart() at the same time.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibEnd(void);

// Starts transmitting an unmodulated tone on the currently set channel and
// power level. Upon successful return, the tone will be transmitting. To stop
// transmitting tone, application must call mfglibStopTone(), allowing it the
// flexibility to determine its own criteria for tone duration (time, event,
// etc.)
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibStartTone(void);

// Stops transmitting tone started by mfglibStartTone().
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibStopTone(void);

// Starts transmitting a random stream of characters. This is so that the radio
// modulation can be measured.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibStartStream(void);

// Stops transmitting a random stream of characters started by
// mfglibStartStream().
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibStopStream(void);

// Sends a single packet consisting of the following bytes: packetLength,
// packetContents[0], ... , packetContents[packetLength - 3], CRC[0], CRC[1].
// The total number of bytes sent is packetLength + 1. The radio replaces the
// last two bytes of packetContents[] with the 16-bit CRC for the packet.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibSendPacket(
      // The length of the packetContents parameter in bytes. Must be greater
      // than 3 and less than 123.
      int8u packetLength,
      // The packet to send. The last two bytes will be replaced with the 16-bit
      // CRC.
      int8u *packetContents);

// Sets the radio channel. Calibration occurs if this is the first time the
// channel has been used.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibSetChannel(
      // The channel to switch to. Valid values are 11 to 26.
      int8u channel);

// Returns the current radio channel, as previously set via mfglibSetChannel().
// Return: The current channel.
int8u mfglibGetChannel(void);

// First select the transmit power mode, and then include a method for selecting
// the radio transmit power. The valid power settings depend upon the specific
// radio in use. Ember radios have discrete power settings, and then requested
// power is rounded to a valid power setting; the actual power output is
// available to the caller via mfglibGetPower().
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus mfglibSetPower(
      // Power mode. Refer to txPowerModes in stack/include/ember-types.h for
      // possible values.
      int16u txPowerMode,
      // Power in units of dBm. Refer to radio datasheet for valid range.
      int8s power);

// Returns the current radio power setting, as previously set via
// mfglibSetPower().
// Return: Power in units of dBm. Refer to radio datasheet for valid range.
int8s mfglibGetPower(void);

// Callback
// A callback indicating a packet with a valid CRC has been received.
void ezspMfglibRxHandler(
      // The link quality observed during the reception
      int8u linkQuality,
      // The energy level (in units of dBm) observed during the reception.
      int8s rssi,
      // The length of the packetContents parameter in bytes. Will be greater
      // than 3 and less than 123.
      int8u packetLength,
      // The received packet. The last two bytes are the 16-bit CRC.
      int8u *packetContents);

//------------------------------------------------------------------------------
// Bootloader
//------------------------------------------------------------------------------

// Quits the current application and launches the standalone bootloader (if
// installed) The function returns an error if the standalone bootloader is not
// present
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspLaunchStandaloneBootloader(
      // Controls the mode in which the standalone bootloader will run. See the
      // app. note for full details. Options are:
      // STANDALONE_BOOTLOADER_NORMAL_MODE: Will listen for an over-the-air
      // image transfer on the current channel with current power settings.
      // STANDALONE_BOOTLOADER_RECOVERY_MODE: Will listen for an over-the-air
      // image transfer on the default channel with default power settings. Both
      // modes also allow an image transfer to begin with XMODEM over the serial
      // protocol's Bootloader Frame.
      int8u mode);

// Transmits the given bootload message to a neighboring node using a specific
// 802.15.4 header that allows the EmberZNet stack as well as the bootloader to
// recognize the message, but will not interfere with other ZigBee stacks.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspSendBootloadMessage(
      // If TRUE, the destination address and pan id are both set to the
      // broadcast address.
      boolean broadcast,
      // The EUI64 of the target node. Ignored if the broadcast field is set to
      // TRUE.
      EmberEUI64 destEui64,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The multicast message.
      int8u *messageContents);

// Detects if the standalone bootloder is installed, and if so returns the
// installed version. If not return 0xffff. A returned version of 0x1234 would
// indicate version 1.2 build 34. Also return the node's version of PLAT, MICRO
// and PHY.
// Return: BOOTLOADER_INVALID_VERSION if the standalone bootloader is not
// present, or the version of the installed standalone bootloader.
int16u ezspGetStandaloneBootloaderVersionPlatMicroPhy(
      // Return: The value of PLAT on the node
      int8u *nodePlat,
      // Return: The value of MICRO on the node
      int8u *nodeMicro,
      // Return: The value of PHY on the node
      int8u *nodePhy);

// Callback
// A callback invoked by the EmberZNet stack when a bootload message is
// received.
void ezspIncomingBootloadMessageHandler(
      // The EUI64 of the sending node.
      EmberEUI64 longId,
      // The link quality from the node that last relayed the message.
      int8u lastHopLqi,
      // The energy level (in units of dBm) observed during the reception.
      int8s lastHopRssi,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The bootload message that was sent.
      int8u *messageContents);

// Callback
// A callback invoked by the EmberZNet stack when the MAC has finished
// transmitting a bootload message.
void ezspBootloadTransmitCompleteHandler(
      // An EmberStatus value of EMBER_SUCCESS if an ACK was received from the
      // destination or EMBER_DELIVERY_FAILED if no ACK was received.
      EmberStatus status,
      // The length of the messageContents parameter in bytes.
      int8u messageLength,
      // The message that was sent.
      int8u *messageContents);

// Perform AES encryption on plaintext using key.
void ezspAesEncrypt(
      // 16 bytes of plaintext.
      int8u *plaintext,
      // The 16 byte encryption key to use.
      int8u *key,
      // Return: 16 bytes of ciphertext.
      int8u *ciphertext);

// A bootloader method for selecting the radio channel. This routine only works
// for sending and receiving bootload packets. Does not correctly do ZigBee
// stack changes.
// Return: An EmberStatus value indicating success or the reason for failure.
EmberStatus ezspOverrideCurrentChannel(
      // The channel to switch to. Valid values are 11 to 26.
      int8u channel);