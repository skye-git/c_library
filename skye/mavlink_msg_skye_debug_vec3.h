// MESSAGE SKYE_DEBUG_VEC3 PACKING

#define MAVLINK_MSG_ID_SKYE_DEBUG_VEC3 225

MAVPACKED(
typedef struct __mavlink_skye_debug_vec3_t {
 uint64_t timestamp; /*< Unix time*/
 float x; /*< X*/
 float y; /*< Y*/
 float z; /*< Z*/
}) mavlink_skye_debug_vec3_t;

#define MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN 20
#define MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN 20
#define MAVLINK_MSG_ID_225_LEN 20
#define MAVLINK_MSG_ID_225_MIN_LEN 20

#define MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC 12
#define MAVLINK_MSG_ID_225_CRC 12



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SKYE_DEBUG_VEC3 { \
	225, \
	"SKYE_DEBUG_VEC3", \
	4, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_skye_debug_vec3_t, timestamp) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_skye_debug_vec3_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_skye_debug_vec3_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_skye_debug_vec3_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SKYE_DEBUG_VEC3 { \
	"SKYE_DEBUG_VEC3", \
	4, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_skye_debug_vec3_t, timestamp) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_skye_debug_vec3_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_skye_debug_vec3_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_skye_debug_vec3_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a skye_debug_vec3 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Unix time
 * @param x X
 * @param y Y
 * @param z Z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_debug_vec3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN);
#else
	mavlink_skye_debug_vec3_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_DEBUG_VEC3;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
}

/**
 * @brief Pack a skye_debug_vec3 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Unix time
 * @param x X
 * @param y Y
 * @param z Z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_debug_vec3_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN);
#else
	mavlink_skye_debug_vec3_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_DEBUG_VEC3;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
}

/**
 * @brief Encode a skye_debug_vec3 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param skye_debug_vec3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_debug_vec3_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_skye_debug_vec3_t* skye_debug_vec3)
{
	return mavlink_msg_skye_debug_vec3_pack(system_id, component_id, msg, skye_debug_vec3->timestamp, skye_debug_vec3->x, skye_debug_vec3->y, skye_debug_vec3->z);
}

/**
 * @brief Encode a skye_debug_vec3 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param skye_debug_vec3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_debug_vec3_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_skye_debug_vec3_t* skye_debug_vec3)
{
	return mavlink_msg_skye_debug_vec3_pack_chan(system_id, component_id, chan, msg, skye_debug_vec3->timestamp, skye_debug_vec3->x, skye_debug_vec3->y, skye_debug_vec3->z);
}

/**
 * @brief Send a skye_debug_vec3 message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Unix time
 * @param x X
 * @param y Y
 * @param z Z
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_skye_debug_vec3_send(mavlink_channel_t chan, uint64_t timestamp, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3, buf, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
#else
	mavlink_skye_debug_vec3_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3, (const char *)&packet, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
#endif
}

/**
 * @brief Send a skye_debug_vec3 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_skye_debug_vec3_send_struct(mavlink_channel_t chan, const mavlink_skye_debug_vec3_t* skye_debug_vec3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_skye_debug_vec3_send(chan, skye_debug_vec3->timestamp, skye_debug_vec3->x, skye_debug_vec3->y, skye_debug_vec3->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3, (const char *)skye_debug_vec3, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
#endif
}

#if MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_skye_debug_vec3_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3, buf, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
#else
	mavlink_skye_debug_vec3_t *packet = (mavlink_skye_debug_vec3_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->x = x;
	packet->y = y;
	packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3, (const char *)packet, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_MIN_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_CRC);
#endif
}
#endif

#endif

// MESSAGE SKYE_DEBUG_VEC3 UNPACKING


/**
 * @brief Get field timestamp from skye_debug_vec3 message
 *
 * @return Unix time
 */
static inline uint64_t mavlink_msg_skye_debug_vec3_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from skye_debug_vec3 message
 *
 * @return X
 */
static inline float mavlink_msg_skye_debug_vec3_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from skye_debug_vec3 message
 *
 * @return Y
 */
static inline float mavlink_msg_skye_debug_vec3_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from skye_debug_vec3 message
 *
 * @return Z
 */
static inline float mavlink_msg_skye_debug_vec3_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a skye_debug_vec3 message into a struct
 *
 * @param msg The message to decode
 * @param skye_debug_vec3 C-struct to decode the message contents into
 */
static inline void mavlink_msg_skye_debug_vec3_decode(const mavlink_message_t* msg, mavlink_skye_debug_vec3_t* skye_debug_vec3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	skye_debug_vec3->timestamp = mavlink_msg_skye_debug_vec3_get_timestamp(msg);
	skye_debug_vec3->x = mavlink_msg_skye_debug_vec3_get_x(msg);
	skye_debug_vec3->y = mavlink_msg_skye_debug_vec3_get_y(msg);
	skye_debug_vec3->z = mavlink_msg_skye_debug_vec3_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN? msg->len : MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN;
        memset(skye_debug_vec3, 0, MAVLINK_MSG_ID_SKYE_DEBUG_VEC3_LEN);
	memcpy(skye_debug_vec3, _MAV_PAYLOAD(msg), len);
#endif
}
