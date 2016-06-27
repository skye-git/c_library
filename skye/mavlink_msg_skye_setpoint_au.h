// MESSAGE SKYE_SETPOINT_AU PACKING

#define MAVLINK_MSG_ID_SKYE_SETPOINT_AU 226

typedef struct __mavlink_skye_setpoint_au_t
{
 float thrust; ///< Thrust command
 float angle; ///< Angle command
 uint8_t id; ///< Actuation Unit ID
} mavlink_skye_setpoint_au_t;

#define MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN 9
#define MAVLINK_MSG_ID_226_LEN 9

#define MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC 59
#define MAVLINK_MSG_ID_226_CRC 59



#define MAVLINK_MESSAGE_INFO_SKYE_SETPOINT_AU { \
	"SKYE_SETPOINT_AU", \
	3, \
	{  { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_skye_setpoint_au_t, thrust) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_skye_setpoint_au_t, angle) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_skye_setpoint_au_t, id) }, \
         } \
}


/**
 * @brief Pack a skye_setpoint_au message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id Actuation Unit ID
 * @param thrust Thrust command
 * @param angle Angle command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_setpoint_au_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN];
	_mav_put_float(buf, 0, thrust);
	_mav_put_float(buf, 4, angle);
	_mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#else
	mavlink_skye_setpoint_au_t packet;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_SETPOINT_AU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
}

/**
 * @brief Pack a skye_setpoint_au message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id Actuation Unit ID
 * @param thrust Thrust command
 * @param angle Angle command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_setpoint_au_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,float thrust,float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN];
	_mav_put_float(buf, 0, thrust);
	_mav_put_float(buf, 4, angle);
	_mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#else
	mavlink_skye_setpoint_au_t packet;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_SETPOINT_AU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
}

/**
 * @brief Encode a skye_setpoint_au struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param skye_setpoint_au C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_setpoint_au_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_skye_setpoint_au_t* skye_setpoint_au)
{
	return mavlink_msg_skye_setpoint_au_pack(system_id, component_id, msg, skye_setpoint_au->id, skye_setpoint_au->thrust, skye_setpoint_au->angle);
}

/**
 * @brief Encode a skye_setpoint_au struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param skye_setpoint_au C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_setpoint_au_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_skye_setpoint_au_t* skye_setpoint_au)
{
	return mavlink_msg_skye_setpoint_au_pack_chan(system_id, component_id, chan, msg, skye_setpoint_au->id, skye_setpoint_au->thrust, skye_setpoint_au->angle);
}

/**
 * @brief Send a skye_setpoint_au message
 * @param chan MAVLink channel to send the message
 *
 * @param id Actuation Unit ID
 * @param thrust Thrust command
 * @param angle Angle command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_skye_setpoint_au_send(mavlink_channel_t chan, uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN];
	_mav_put_float(buf, 0, thrust);
	_mav_put_float(buf, 4, angle);
	_mav_put_uint8_t(buf, 8, id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
#else
	mavlink_skye_setpoint_au_t packet;
	packet.thrust = thrust;
	packet.angle = angle;
	packet.id = id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, (const char *)&packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, (const char *)&packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_skye_setpoint_au_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, float thrust, float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, thrust);
	_mav_put_float(buf, 4, angle);
	_mav_put_uint8_t(buf, 8, id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, buf, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
#else
	mavlink_skye_setpoint_au_t *packet = (mavlink_skye_setpoint_au_t *)msgbuf;
	packet->thrust = thrust;
	packet->angle = angle;
	packet->id = id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, (const char *)packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_SETPOINT_AU, (const char *)packet, MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SKYE_SETPOINT_AU UNPACKING


/**
 * @brief Get field id from skye_setpoint_au message
 *
 * @return Actuation Unit ID
 */
static inline uint8_t mavlink_msg_skye_setpoint_au_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field thrust from skye_setpoint_au message
 *
 * @return Thrust command
 */
static inline float mavlink_msg_skye_setpoint_au_get_thrust(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field angle from skye_setpoint_au message
 *
 * @return Angle command
 */
static inline float mavlink_msg_skye_setpoint_au_get_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a skye_setpoint_au message into a struct
 *
 * @param msg The message to decode
 * @param skye_setpoint_au C-struct to decode the message contents into
 */
static inline void mavlink_msg_skye_setpoint_au_decode(const mavlink_message_t* msg, mavlink_skye_setpoint_au_t* skye_setpoint_au)
{
#if MAVLINK_NEED_BYTE_SWAP
	skye_setpoint_au->thrust = mavlink_msg_skye_setpoint_au_get_thrust(msg);
	skye_setpoint_au->angle = mavlink_msg_skye_setpoint_au_get_angle(msg);
	skye_setpoint_au->id = mavlink_msg_skye_setpoint_au_get_id(msg);
#else
	memcpy(skye_setpoint_au, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SKYE_SETPOINT_AU_LEN);
#endif
}
