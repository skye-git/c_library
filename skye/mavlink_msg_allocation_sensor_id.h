// MESSAGE ALLOCATION_SENSOR_ID PACKING

#define MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID 213

MAVPACKED(
typedef struct __mavlink_allocation_sensor_id_t {
 uint64_t timestamp; /*< Onboard time*/
 float thrust; /*< Thrust estimate of the AU [N]*/
 float angle; /*< Orientation readout of the AU [deg]*/
 uint8_t id; /*< Actuation Unit ID*/
}) mavlink_allocation_sensor_id_t;

#define MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN 17
#define MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN 17
#define MAVLINK_MSG_ID_213_LEN 17
#define MAVLINK_MSG_ID_213_MIN_LEN 17

#define MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC 40
#define MAVLINK_MSG_ID_213_CRC 40



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ALLOCATION_SENSOR_ID { \
	213, \
	"ALLOCATION_SENSOR_ID", \
	4, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_allocation_sensor_id_t, timestamp) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_allocation_sensor_id_t, thrust) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_allocation_sensor_id_t, angle) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_allocation_sensor_id_t, id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ALLOCATION_SENSOR_ID { \
	"ALLOCATION_SENSOR_ID", \
	4, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_allocation_sensor_id_t, timestamp) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_allocation_sensor_id_t, thrust) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_allocation_sensor_id_t, angle) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_allocation_sensor_id_t, id) }, \
         } \
}
#endif

/**
 * @brief Pack a allocation_sensor_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Onboard time
 * @param id Actuation Unit ID
 * @param thrust Thrust estimate of the AU [N]
 * @param angle Orientation readout of the AU [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_sensor_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float(buf, 12, angle);
	_mav_put_uint8_t(buf, 16, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN);
#else
	mavlink_allocation_sensor_id_t packet;
	packet.timestamp = timestamp;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
}

/**
 * @brief Pack a allocation_sensor_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Onboard time
 * @param id Actuation Unit ID
 * @param thrust Thrust estimate of the AU [N]
 * @param angle Orientation readout of the AU [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_sensor_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,uint8_t id,float thrust,float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float(buf, 12, angle);
	_mav_put_uint8_t(buf, 16, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN);
#else
	mavlink_allocation_sensor_id_t packet;
	packet.timestamp = timestamp;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
}

/**
 * @brief Encode a allocation_sensor_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param allocation_sensor_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_sensor_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_allocation_sensor_id_t* allocation_sensor_id)
{
	return mavlink_msg_allocation_sensor_id_pack(system_id, component_id, msg, allocation_sensor_id->timestamp, allocation_sensor_id->id, allocation_sensor_id->thrust, allocation_sensor_id->angle);
}

/**
 * @brief Encode a allocation_sensor_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param allocation_sensor_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_sensor_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_allocation_sensor_id_t* allocation_sensor_id)
{
	return mavlink_msg_allocation_sensor_id_pack_chan(system_id, component_id, chan, msg, allocation_sensor_id->timestamp, allocation_sensor_id->id, allocation_sensor_id->thrust, allocation_sensor_id->angle);
}

/**
 * @brief Send a allocation_sensor_id message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Onboard time
 * @param id Actuation Unit ID
 * @param thrust Thrust estimate of the AU [N]
 * @param angle Orientation readout of the AU [deg]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_allocation_sensor_id_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float(buf, 12, angle);
	_mav_put_uint8_t(buf, 16, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID, buf, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
#else
	mavlink_allocation_sensor_id_t packet;
	packet.timestamp = timestamp;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
#endif
}

/**
 * @brief Send a allocation_sensor_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_allocation_sensor_id_send_struct(mavlink_channel_t chan, const mavlink_allocation_sensor_id_t* allocation_sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_allocation_sensor_id_send(chan, allocation_sensor_id->timestamp, allocation_sensor_id->id, allocation_sensor_id->thrust, allocation_sensor_id->angle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID, (const char *)allocation_sensor_id, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_allocation_sensor_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float(buf, 12, angle);
	_mav_put_uint8_t(buf, 16, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID, buf, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
#else
	mavlink_allocation_sensor_id_t *packet = (mavlink_allocation_sensor_id_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->thrust = thrust;
	packet->angle = angle;
	packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE ALLOCATION_SENSOR_ID UNPACKING


/**
 * @brief Get field timestamp from allocation_sensor_id message
 *
 * @return Onboard time
 */
static inline uint64_t mavlink_msg_allocation_sensor_id_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field id from allocation_sensor_id message
 *
 * @return Actuation Unit ID
 */
static inline uint8_t mavlink_msg_allocation_sensor_id_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field thrust from allocation_sensor_id message
 *
 * @return Thrust estimate of the AU [N]
 */
static inline float mavlink_msg_allocation_sensor_id_get_thrust(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field angle from allocation_sensor_id message
 *
 * @return Orientation readout of the AU [deg]
 */
static inline float mavlink_msg_allocation_sensor_id_get_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a allocation_sensor_id message into a struct
 *
 * @param msg The message to decode
 * @param allocation_sensor_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_allocation_sensor_id_decode(const mavlink_message_t* msg, mavlink_allocation_sensor_id_t* allocation_sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	allocation_sensor_id->timestamp = mavlink_msg_allocation_sensor_id_get_timestamp(msg);
	allocation_sensor_id->thrust = mavlink_msg_allocation_sensor_id_get_thrust(msg);
	allocation_sensor_id->angle = mavlink_msg_allocation_sensor_id_get_angle(msg);
	allocation_sensor_id->id = mavlink_msg_allocation_sensor_id_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN? msg->len : MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN;
        memset(allocation_sensor_id, 0, MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_LEN);
	memcpy(allocation_sensor_id, _MAV_PAYLOAD(msg), len);
#endif
}
