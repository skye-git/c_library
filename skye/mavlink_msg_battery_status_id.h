// MESSAGE BATTERY_STATUS_ID PACKING

#define MAVLINK_MSG_ID_BATTERY_STATUS_ID 215

MAVPACKED(
typedef struct __mavlink_battery_status_id_t {
 int32_t current_consumed; /*< Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate*/
 int32_t energy_consumed; /*< Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate*/
 uint16_t voltages[6]; /*< Battery voltage of MAX 6 cells, in millivolts (1 = 1 millivolt)*/
 int16_t current_battery; /*< Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current*/
 uint8_t id; /*< Actuation Unit ID*/
 int8_t battery_remaining; /*< Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery*/
 uint8_t battery_status; /*< Status of the battery*/
}) mavlink_battery_status_id_t;

#define MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN 25
#define MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN 25
#define MAVLINK_MSG_ID_215_LEN 25
#define MAVLINK_MSG_ID_215_MIN_LEN 25

#define MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC 229
#define MAVLINK_MSG_ID_215_CRC 229

#define MAVLINK_MSG_BATTERY_STATUS_ID_FIELD_VOLTAGES_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BATTERY_STATUS_ID { \
	215, \
	"BATTERY_STATUS_ID", \
	7, \
	{  { "current_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_battery_status_id_t, current_consumed) }, \
         { "energy_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_battery_status_id_t, energy_consumed) }, \
         { "voltages", NULL, MAVLINK_TYPE_UINT16_T, 6, 8, offsetof(mavlink_battery_status_id_t, voltages) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_battery_status_id_t, current_battery) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_battery_status_id_t, id) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_battery_status_id_t, battery_remaining) }, \
         { "battery_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_battery_status_id_t, battery_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BATTERY_STATUS_ID { \
	"BATTERY_STATUS_ID", \
	7, \
	{  { "current_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_battery_status_id_t, current_consumed) }, \
         { "energy_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_battery_status_id_t, energy_consumed) }, \
         { "voltages", NULL, MAVLINK_TYPE_UINT16_T, 6, 8, offsetof(mavlink_battery_status_id_t, voltages) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_battery_status_id_t, current_battery) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_battery_status_id_t, id) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_battery_status_id_t, battery_remaining) }, \
         { "battery_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_battery_status_id_t, battery_status) }, \
         } \
}
#endif

/**
 * @brief Pack a battery_status_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id Actuation Unit ID
 * @param voltages Battery voltage of MAX 6 cells, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param current_consumed Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate
 * @param energy_consumed Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery
 * @param battery_status Status of the battery
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_status_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, const uint16_t *voltages, int16_t current_battery, int32_t current_consumed, int32_t energy_consumed, int8_t battery_remaining, uint8_t battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int16_t(buf, 20, current_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, battery_remaining);
	_mav_put_uint8_t(buf, 24, battery_status);
	_mav_put_uint16_t_array(buf, 8, voltages, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN);
#else
	mavlink_battery_status_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_battery = current_battery;
	packet.id = id;
	packet.battery_remaining = battery_remaining;
	packet.battery_status = battery_status;
	mav_array_memcpy(packet.voltages, voltages, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY_STATUS_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
}

/**
 * @brief Pack a battery_status_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id Actuation Unit ID
 * @param voltages Battery voltage of MAX 6 cells, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param current_consumed Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate
 * @param energy_consumed Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery
 * @param battery_status Status of the battery
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_status_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,const uint16_t *voltages,int16_t current_battery,int32_t current_consumed,int32_t energy_consumed,int8_t battery_remaining,uint8_t battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int16_t(buf, 20, current_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, battery_remaining);
	_mav_put_uint8_t(buf, 24, battery_status);
	_mav_put_uint16_t_array(buf, 8, voltages, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN);
#else
	mavlink_battery_status_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_battery = current_battery;
	packet.id = id;
	packet.battery_remaining = battery_remaining;
	packet.battery_status = battery_status;
	mav_array_memcpy(packet.voltages, voltages, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY_STATUS_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
}

/**
 * @brief Encode a battery_status_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_status_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_status_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_status_id_t* battery_status_id)
{
	return mavlink_msg_battery_status_id_pack(system_id, component_id, msg, battery_status_id->id, battery_status_id->voltages, battery_status_id->current_battery, battery_status_id->current_consumed, battery_status_id->energy_consumed, battery_status_id->battery_remaining, battery_status_id->battery_status);
}

/**
 * @brief Encode a battery_status_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_status_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_status_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_status_id_t* battery_status_id)
{
	return mavlink_msg_battery_status_id_pack_chan(system_id, component_id, chan, msg, battery_status_id->id, battery_status_id->voltages, battery_status_id->current_battery, battery_status_id->current_consumed, battery_status_id->energy_consumed, battery_status_id->battery_remaining, battery_status_id->battery_status);
}

/**
 * @brief Send a battery_status_id message
 * @param chan MAVLink channel to send the message
 *
 * @param id Actuation Unit ID
 * @param voltages Battery voltage of MAX 6 cells, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param current_consumed Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate
 * @param energy_consumed Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery
 * @param battery_status Status of the battery
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_status_id_send(mavlink_channel_t chan, uint8_t id, const uint16_t *voltages, int16_t current_battery, int32_t current_consumed, int32_t energy_consumed, int8_t battery_remaining, uint8_t battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int16_t(buf, 20, current_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, battery_remaining);
	_mav_put_uint8_t(buf, 24, battery_status);
	_mav_put_uint16_t_array(buf, 8, voltages, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
#else
	mavlink_battery_status_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_battery = current_battery;
	packet.id = id;
	packet.battery_remaining = battery_remaining;
	packet.battery_status = battery_status;
	mav_array_memcpy(packet.voltages, voltages, sizeof(uint16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
#endif
}

/**
 * @brief Send a battery_status_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_battery_status_id_send_struct(mavlink_channel_t chan, const mavlink_battery_status_id_t* battery_status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_battery_status_id_send(chan, battery_status_id->id, battery_status_id->voltages, battery_status_id->current_battery, battery_status_id->current_consumed, battery_status_id->energy_consumed, battery_status_id->battery_remaining, battery_status_id->battery_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID, (const char *)battery_status_id, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_status_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, const uint16_t *voltages, int16_t current_battery, int32_t current_consumed, int32_t energy_consumed, int8_t battery_remaining, uint8_t battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int16_t(buf, 20, current_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, battery_remaining);
	_mav_put_uint8_t(buf, 24, battery_status);
	_mav_put_uint16_t_array(buf, 8, voltages, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
#else
	mavlink_battery_status_id_t *packet = (mavlink_battery_status_id_t *)msgbuf;
	packet->current_consumed = current_consumed;
	packet->energy_consumed = energy_consumed;
	packet->current_battery = current_battery;
	packet->id = id;
	packet->battery_remaining = battery_remaining;
	packet->battery_status = battery_status;
	mav_array_memcpy(packet->voltages, voltages, sizeof(uint16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_ID, (const char *)packet, MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE BATTERY_STATUS_ID UNPACKING


/**
 * @brief Get field id from battery_status_id message
 *
 * @return Actuation Unit ID
 */
static inline uint8_t mavlink_msg_battery_status_id_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field voltages from battery_status_id message
 *
 * @return Battery voltage of MAX 6 cells, in millivolts (1 = 1 millivolt)
 */
static inline uint16_t mavlink_msg_battery_status_id_get_voltages(const mavlink_message_t* msg, uint16_t *voltages)
{
	return _MAV_RETURN_uint16_t_array(msg, voltages, 6,  8);
}

/**
 * @brief Get field current_battery from battery_status_id message
 *
 * @return Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 */
static inline int16_t mavlink_msg_battery_status_id_get_current_battery(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field current_consumed from battery_status_id message
 *
 * @return Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate
 */
static inline int32_t mavlink_msg_battery_status_id_get_current_consumed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field energy_consumed from battery_status_id message
 *
 * @return Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate
 */
static inline int32_t mavlink_msg_battery_status_id_get_energy_consumed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field battery_remaining from battery_status_id message
 *
 * @return Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery
 */
static inline int8_t mavlink_msg_battery_status_id_get_battery_remaining(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  23);
}

/**
 * @brief Get field battery_status from battery_status_id message
 *
 * @return Status of the battery
 */
static inline uint8_t mavlink_msg_battery_status_id_get_battery_status(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Decode a battery_status_id message into a struct
 *
 * @param msg The message to decode
 * @param battery_status_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_status_id_decode(const mavlink_message_t* msg, mavlink_battery_status_id_t* battery_status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	battery_status_id->current_consumed = mavlink_msg_battery_status_id_get_current_consumed(msg);
	battery_status_id->energy_consumed = mavlink_msg_battery_status_id_get_energy_consumed(msg);
	mavlink_msg_battery_status_id_get_voltages(msg, battery_status_id->voltages);
	battery_status_id->current_battery = mavlink_msg_battery_status_id_get_current_battery(msg);
	battery_status_id->id = mavlink_msg_battery_status_id_get_id(msg);
	battery_status_id->battery_remaining = mavlink_msg_battery_status_id_get_battery_remaining(msg);
	battery_status_id->battery_status = mavlink_msg_battery_status_id_get_battery_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN? msg->len : MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN;
        memset(battery_status_id, 0, MAVLINK_MSG_ID_BATTERY_STATUS_ID_LEN);
	memcpy(battery_status_id, _MAV_PAYLOAD(msg), len);
#endif
}
