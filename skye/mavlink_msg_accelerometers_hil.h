// MESSAGE ACCELEROMETERS_HIL PACKING

#define MAVLINK_MSG_ID_ACCELEROMETERS_HIL 226

MAVPACKED(
typedef struct __mavlink_accelerometers_hil_t {
 float x; /*< X acceleration, body frame*/
 float y; /*< Y acceleration, body frame*/
 float z; /*< Z acceleration, body frame*/
}) mavlink_accelerometers_hil_t;

#define MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN 12
#define MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN 12
#define MAVLINK_MSG_ID_226_LEN 12
#define MAVLINK_MSG_ID_226_MIN_LEN 12

#define MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC 93
#define MAVLINK_MSG_ID_226_CRC 93



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACCELEROMETERS_HIL { \
	226, \
	"ACCELEROMETERS_HIL", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_accelerometers_hil_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_accelerometers_hil_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_accelerometers_hil_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACCELEROMETERS_HIL { \
	"ACCELEROMETERS_HIL", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_accelerometers_hil_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_accelerometers_hil_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_accelerometers_hil_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a accelerometers_hil message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x X acceleration, body frame
 * @param y Y acceleration, body frame
 * @param z Z acceleration, body frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_accelerometers_hil_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN);
#else
	mavlink_accelerometers_hil_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACCELEROMETERS_HIL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
}

/**
 * @brief Pack a accelerometers_hil message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x X acceleration, body frame
 * @param y Y acceleration, body frame
 * @param z Z acceleration, body frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_accelerometers_hil_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN);
#else
	mavlink_accelerometers_hil_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACCELEROMETERS_HIL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
}

/**
 * @brief Encode a accelerometers_hil struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param accelerometers_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_accelerometers_hil_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_accelerometers_hil_t* accelerometers_hil)
{
	return mavlink_msg_accelerometers_hil_pack(system_id, component_id, msg, accelerometers_hil->x, accelerometers_hil->y, accelerometers_hil->z);
}

/**
 * @brief Encode a accelerometers_hil struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param accelerometers_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_accelerometers_hil_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_accelerometers_hil_t* accelerometers_hil)
{
	return mavlink_msg_accelerometers_hil_pack_chan(system_id, component_id, chan, msg, accelerometers_hil->x, accelerometers_hil->y, accelerometers_hil->z);
}

/**
 * @brief Send a accelerometers_hil message
 * @param chan MAVLink channel to send the message
 *
 * @param x X acceleration, body frame
 * @param y Y acceleration, body frame
 * @param z Z acceleration, body frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_accelerometers_hil_send(mavlink_channel_t chan, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL, buf, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
#else
	mavlink_accelerometers_hil_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL, (const char *)&packet, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
#endif
}

/**
 * @brief Send a accelerometers_hil message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_accelerometers_hil_send_struct(mavlink_channel_t chan, const mavlink_accelerometers_hil_t* accelerometers_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_accelerometers_hil_send(chan, accelerometers_hil->x, accelerometers_hil->y, accelerometers_hil->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL, (const char *)accelerometers_hil, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_accelerometers_hil_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL, buf, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
#else
	mavlink_accelerometers_hil_t *packet = (mavlink_accelerometers_hil_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCELEROMETERS_HIL, (const char *)packet, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_CRC);
#endif
}
#endif

#endif

// MESSAGE ACCELEROMETERS_HIL UNPACKING


/**
 * @brief Get field x from accelerometers_hil message
 *
 * @return X acceleration, body frame
 */
static inline float mavlink_msg_accelerometers_hil_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from accelerometers_hil message
 *
 * @return Y acceleration, body frame
 */
static inline float mavlink_msg_accelerometers_hil_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from accelerometers_hil message
 *
 * @return Z acceleration, body frame
 */
static inline float mavlink_msg_accelerometers_hil_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a accelerometers_hil message into a struct
 *
 * @param msg The message to decode
 * @param accelerometers_hil C-struct to decode the message contents into
 */
static inline void mavlink_msg_accelerometers_hil_decode(const mavlink_message_t* msg, mavlink_accelerometers_hil_t* accelerometers_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	accelerometers_hil->x = mavlink_msg_accelerometers_hil_get_x(msg);
	accelerometers_hil->y = mavlink_msg_accelerometers_hil_get_y(msg);
	accelerometers_hil->z = mavlink_msg_accelerometers_hil_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN? msg->len : MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN;
        memset(accelerometers_hil, 0, MAVLINK_MSG_ID_ACCELEROMETERS_HIL_LEN);
	memcpy(accelerometers_hil, _MAV_PAYLOAD(msg), len);
#endif
}
