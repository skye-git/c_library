// MESSAGE BATTERY_STATUS_WITH_ID PACKING

#define MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID 217

typedef struct __mavlink_battery_status_with_id_t
{
 int32_t current_consumed; /*< */
 int32_t energy_consumed; /*< */
 int32_t current_charged; /*< */
 uint32_t time_charged; /*< */
 int16_t temperature; /*< */
 uint16_t voltage; /*< */
 uint16_t cell_voltages[6]; /*< */
 int16_t current_battery; /*< */
 int8_t n_cells; /*< */
 uint8_t battery_state; /*< */
 int8_t battery_remaining; /*< */
} mavlink_battery_status_with_id_t;

#define MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN 37
#define MAVLINK_MSG_ID_217_LEN 37

#define MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC 209
#define MAVLINK_MSG_ID_217_CRC 209

#define MAVLINK_MSG_BATTERY_STATUS_WITH_ID_FIELD_CELL_VOLTAGES_LEN 6

#define MAVLINK_MESSAGE_INFO_BATTERY_STATUS_WITH_ID { \
	"BATTERY_STATUS_WITH_ID", \
	11, \
	{  { "current_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_battery_status_with_id_t, current_consumed) }, \
         { "energy_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_battery_status_with_id_t, energy_consumed) }, \
         { "current_charged", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_battery_status_with_id_t, current_charged) }, \
         { "time_charged", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_battery_status_with_id_t, time_charged) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_battery_status_with_id_t, temperature) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_battery_status_with_id_t, voltage) }, \
         { "cell_voltages", NULL, MAVLINK_TYPE_UINT16_T, 6, 20, offsetof(mavlink_battery_status_with_id_t, cell_voltages) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_battery_status_with_id_t, current_battery) }, \
         { "n_cells", NULL, MAVLINK_TYPE_INT8_T, 0, 34, offsetof(mavlink_battery_status_with_id_t, n_cells) }, \
         { "battery_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_battery_status_with_id_t, battery_state) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_battery_status_with_id_t, battery_remaining) }, \
         } \
}


/**
 * @brief Pack a battery_status_with_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param current_consumed 
 * @param energy_consumed 
 * @param current_charged 
 * @param time_charged 
 * @param temperature 
 * @param voltage 
 * @param cell_voltages 
 * @param n_cells 
 * @param current_battery 
 * @param battery_state 
 * @param battery_remaining 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_status_with_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int32_t current_consumed, int32_t energy_consumed, int32_t current_charged, uint32_t time_charged, int16_t temperature, uint16_t voltage, const uint16_t *cell_voltages, int8_t n_cells, int16_t current_battery, uint8_t battery_state, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int32_t(buf, 8, current_charged);
	_mav_put_uint32_t(buf, 12, time_charged);
	_mav_put_int16_t(buf, 16, temperature);
	_mav_put_uint16_t(buf, 18, voltage);
	_mav_put_int16_t(buf, 32, current_battery);
	_mav_put_int8_t(buf, 34, n_cells);
	_mav_put_uint8_t(buf, 35, battery_state);
	_mav_put_int8_t(buf, 36, battery_remaining);
	_mav_put_uint16_t_array(buf, 20, cell_voltages, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#else
	mavlink_battery_status_with_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_charged = current_charged;
	packet.time_charged = time_charged;
	packet.temperature = temperature;
	packet.voltage = voltage;
	packet.current_battery = current_battery;
	packet.n_cells = n_cells;
	packet.battery_state = battery_state;
	packet.battery_remaining = battery_remaining;
	mav_array_memcpy(packet.cell_voltages, cell_voltages, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
}

/**
 * @brief Pack a battery_status_with_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param current_consumed 
 * @param energy_consumed 
 * @param current_charged 
 * @param time_charged 
 * @param temperature 
 * @param voltage 
 * @param cell_voltages 
 * @param n_cells 
 * @param current_battery 
 * @param battery_state 
 * @param battery_remaining 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_status_with_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int32_t current_consumed,int32_t energy_consumed,int32_t current_charged,uint32_t time_charged,int16_t temperature,uint16_t voltage,const uint16_t *cell_voltages,int8_t n_cells,int16_t current_battery,uint8_t battery_state,int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int32_t(buf, 8, current_charged);
	_mav_put_uint32_t(buf, 12, time_charged);
	_mav_put_int16_t(buf, 16, temperature);
	_mav_put_uint16_t(buf, 18, voltage);
	_mav_put_int16_t(buf, 32, current_battery);
	_mav_put_int8_t(buf, 34, n_cells);
	_mav_put_uint8_t(buf, 35, battery_state);
	_mav_put_int8_t(buf, 36, battery_remaining);
	_mav_put_uint16_t_array(buf, 20, cell_voltages, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#else
	mavlink_battery_status_with_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_charged = current_charged;
	packet.time_charged = time_charged;
	packet.temperature = temperature;
	packet.voltage = voltage;
	packet.current_battery = current_battery;
	packet.n_cells = n_cells;
	packet.battery_state = battery_state;
	packet.battery_remaining = battery_remaining;
	mav_array_memcpy(packet.cell_voltages, cell_voltages, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
}

/**
 * @brief Encode a battery_status_with_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_status_with_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_status_with_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_status_with_id_t* battery_status_with_id)
{
	return mavlink_msg_battery_status_with_id_pack(system_id, component_id, msg, battery_status_with_id->current_consumed, battery_status_with_id->energy_consumed, battery_status_with_id->current_charged, battery_status_with_id->time_charged, battery_status_with_id->temperature, battery_status_with_id->voltage, battery_status_with_id->cell_voltages, battery_status_with_id->n_cells, battery_status_with_id->current_battery, battery_status_with_id->battery_state, battery_status_with_id->battery_remaining);
}

/**
 * @brief Encode a battery_status_with_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_status_with_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_status_with_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_status_with_id_t* battery_status_with_id)
{
	return mavlink_msg_battery_status_with_id_pack_chan(system_id, component_id, chan, msg, battery_status_with_id->current_consumed, battery_status_with_id->energy_consumed, battery_status_with_id->current_charged, battery_status_with_id->time_charged, battery_status_with_id->temperature, battery_status_with_id->voltage, battery_status_with_id->cell_voltages, battery_status_with_id->n_cells, battery_status_with_id->current_battery, battery_status_with_id->battery_state, battery_status_with_id->battery_remaining);
}

/**
 * @brief Send a battery_status_with_id message
 * @param chan MAVLink channel to send the message
 *
 * @param current_consumed 
 * @param energy_consumed 
 * @param current_charged 
 * @param time_charged 
 * @param temperature 
 * @param voltage 
 * @param cell_voltages 
 * @param n_cells 
 * @param current_battery 
 * @param battery_state 
 * @param battery_remaining 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_status_with_id_send(mavlink_channel_t chan, int32_t current_consumed, int32_t energy_consumed, int32_t current_charged, uint32_t time_charged, int16_t temperature, uint16_t voltage, const uint16_t *cell_voltages, int8_t n_cells, int16_t current_battery, uint8_t battery_state, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN];
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int32_t(buf, 8, current_charged);
	_mav_put_uint32_t(buf, 12, time_charged);
	_mav_put_int16_t(buf, 16, temperature);
	_mav_put_uint16_t(buf, 18, voltage);
	_mav_put_int16_t(buf, 32, current_battery);
	_mav_put_int8_t(buf, 34, n_cells);
	_mav_put_uint8_t(buf, 35, battery_state);
	_mav_put_int8_t(buf, 36, battery_remaining);
	_mav_put_uint16_t_array(buf, 20, cell_voltages, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
#else
	mavlink_battery_status_with_id_t packet;
	packet.current_consumed = current_consumed;
	packet.energy_consumed = energy_consumed;
	packet.current_charged = current_charged;
	packet.time_charged = time_charged;
	packet.temperature = temperature;
	packet.voltage = voltage;
	packet.current_battery = current_battery;
	packet.n_cells = n_cells;
	packet.battery_state = battery_state;
	packet.battery_remaining = battery_remaining;
	mav_array_memcpy(packet.cell_voltages, cell_voltages, sizeof(uint16_t)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_status_with_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t current_consumed, int32_t energy_consumed, int32_t current_charged, uint32_t time_charged, int16_t temperature, uint16_t voltage, const uint16_t *cell_voltages, int8_t n_cells, int16_t current_battery, uint8_t battery_state, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, current_consumed);
	_mav_put_int32_t(buf, 4, energy_consumed);
	_mav_put_int32_t(buf, 8, current_charged);
	_mav_put_uint32_t(buf, 12, time_charged);
	_mav_put_int16_t(buf, 16, temperature);
	_mav_put_uint16_t(buf, 18, voltage);
	_mav_put_int16_t(buf, 32, current_battery);
	_mav_put_int8_t(buf, 34, n_cells);
	_mav_put_uint8_t(buf, 35, battery_state);
	_mav_put_int8_t(buf, 36, battery_remaining);
	_mav_put_uint16_t_array(buf, 20, cell_voltages, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, buf, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
#else
	mavlink_battery_status_with_id_t *packet = (mavlink_battery_status_with_id_t *)msgbuf;
	packet->current_consumed = current_consumed;
	packet->energy_consumed = energy_consumed;
	packet->current_charged = current_charged;
	packet->time_charged = time_charged;
	packet->temperature = temperature;
	packet->voltage = voltage;
	packet->current_battery = current_battery;
	packet->n_cells = n_cells;
	packet->battery_state = battery_state;
	packet->battery_remaining = battery_remaining;
	mav_array_memcpy(packet->cell_voltages, cell_voltages, sizeof(uint16_t)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, (const char *)packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID, (const char *)packet, MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE BATTERY_STATUS_WITH_ID UNPACKING


/**
 * @brief Get field current_consumed from battery_status_with_id message
 *
 * @return 
 */
static inline int32_t mavlink_msg_battery_status_with_id_get_current_consumed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field energy_consumed from battery_status_with_id message
 *
 * @return 
 */
static inline int32_t mavlink_msg_battery_status_with_id_get_energy_consumed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field current_charged from battery_status_with_id message
 *
 * @return 
 */
static inline int32_t mavlink_msg_battery_status_with_id_get_current_charged(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field time_charged from battery_status_with_id message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_battery_status_with_id_get_time_charged(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field temperature from battery_status_with_id message
 *
 * @return 
 */
static inline int16_t mavlink_msg_battery_status_with_id_get_temperature(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field voltage from battery_status_with_id message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_battery_status_with_id_get_voltage(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field cell_voltages from battery_status_with_id message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_battery_status_with_id_get_cell_voltages(const mavlink_message_t* msg, uint16_t *cell_voltages)
{
	return _MAV_RETURN_uint16_t_array(msg, cell_voltages, 6,  20);
}

/**
 * @brief Get field n_cells from battery_status_with_id message
 *
 * @return 
 */
static inline int8_t mavlink_msg_battery_status_with_id_get_n_cells(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  34);
}

/**
 * @brief Get field current_battery from battery_status_with_id message
 *
 * @return 
 */
static inline int16_t mavlink_msg_battery_status_with_id_get_current_battery(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field battery_state from battery_status_with_id message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_battery_status_with_id_get_battery_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field battery_remaining from battery_status_with_id message
 *
 * @return 
 */
static inline int8_t mavlink_msg_battery_status_with_id_get_battery_remaining(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  36);
}

/**
 * @brief Decode a battery_status_with_id message into a struct
 *
 * @param msg The message to decode
 * @param battery_status_with_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_status_with_id_decode(const mavlink_message_t* msg, mavlink_battery_status_with_id_t* battery_status_with_id)
{
#if MAVLINK_NEED_BYTE_SWAP
	battery_status_with_id->current_consumed = mavlink_msg_battery_status_with_id_get_current_consumed(msg);
	battery_status_with_id->energy_consumed = mavlink_msg_battery_status_with_id_get_energy_consumed(msg);
	battery_status_with_id->current_charged = mavlink_msg_battery_status_with_id_get_current_charged(msg);
	battery_status_with_id->time_charged = mavlink_msg_battery_status_with_id_get_time_charged(msg);
	battery_status_with_id->temperature = mavlink_msg_battery_status_with_id_get_temperature(msg);
	battery_status_with_id->voltage = mavlink_msg_battery_status_with_id_get_voltage(msg);
	mavlink_msg_battery_status_with_id_get_cell_voltages(msg, battery_status_with_id->cell_voltages);
	battery_status_with_id->current_battery = mavlink_msg_battery_status_with_id_get_current_battery(msg);
	battery_status_with_id->n_cells = mavlink_msg_battery_status_with_id_get_n_cells(msg);
	battery_status_with_id->battery_state = mavlink_msg_battery_status_with_id_get_battery_state(msg);
	battery_status_with_id->battery_remaining = mavlink_msg_battery_status_with_id_get_battery_remaining(msg);
#else
	memcpy(battery_status_with_id, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_BATTERY_STATUS_WITH_ID_LEN);
#endif
}
