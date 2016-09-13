// MESSAGE POSITION_HIL PACKING

#define MAVLINK_MSG_ID_POSITION_HIL 224

MAVPACKED(
typedef struct __mavlink_position_hil_t {
 uint64_t timestamp; /*< Unix time*/
 float x; /*< Local North position*/
 float y; /*< Local East position*/
 float z; /*< Local Down position*/
 float vx; /*< Local North velocity*/
 float vy; /*< Local East velocity*/
 float vz; /*< Local Down velocity*/
}) mavlink_position_hil_t;

#define MAVLINK_MSG_ID_POSITION_HIL_LEN 32
#define MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN 32
#define MAVLINK_MSG_ID_224_LEN 32
#define MAVLINK_MSG_ID_224_MIN_LEN 32

#define MAVLINK_MSG_ID_POSITION_HIL_CRC 179
#define MAVLINK_MSG_ID_224_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POSITION_HIL { \
	224, \
	"POSITION_HIL", \
	7, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_position_hil_t, timestamp) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_position_hil_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_position_hil_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_position_hil_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_position_hil_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_position_hil_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_position_hil_t, vz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POSITION_HIL { \
	"POSITION_HIL", \
	7, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_position_hil_t, timestamp) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_position_hil_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_position_hil_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_position_hil_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_position_hil_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_position_hil_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_position_hil_t, vz) }, \
         } \
}
#endif

/**
 * @brief Pack a position_hil message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Unix time
 * @param x Local North position
 * @param y Local East position
 * @param z Local Down position
 * @param vx Local North velocity
 * @param vy Local East velocity
 * @param vz Local Down velocity
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_hil_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, vx);
	_mav_put_float(buf, 24, vy);
	_mav_put_float(buf, 28, vz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_HIL_LEN);
#else
	mavlink_position_hil_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_HIL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
}

/**
 * @brief Pack a position_hil message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Unix time
 * @param x Local North position
 * @param y Local East position
 * @param z Local Down position
 * @param vx Local North velocity
 * @param vy Local East velocity
 * @param vz Local Down velocity
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_hil_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,float x,float y,float z,float vx,float vy,float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, vx);
	_mav_put_float(buf, 24, vy);
	_mav_put_float(buf, 28, vz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_HIL_LEN);
#else
	mavlink_position_hil_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_HIL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
}

/**
 * @brief Encode a position_hil struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param position_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_hil_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_position_hil_t* position_hil)
{
	return mavlink_msg_position_hil_pack(system_id, component_id, msg, position_hil->timestamp, position_hil->x, position_hil->y, position_hil->z, position_hil->vx, position_hil->vy, position_hil->vz);
}

/**
 * @brief Encode a position_hil struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param position_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_hil_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_position_hil_t* position_hil)
{
	return mavlink_msg_position_hil_pack_chan(system_id, component_id, chan, msg, position_hil->timestamp, position_hil->x, position_hil->y, position_hil->z, position_hil->vx, position_hil->vy, position_hil->vz);
}

/**
 * @brief Send a position_hil message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Unix time
 * @param x Local North position
 * @param y Local East position
 * @param z Local Down position
 * @param vx Local North velocity
 * @param vy Local East velocity
 * @param vz Local Down velocity
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_position_hil_send(mavlink_channel_t chan, uint64_t timestamp, float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, vx);
	_mav_put_float(buf, 24, vy);
	_mav_put_float(buf, 28, vz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_HIL, buf, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
#else
	mavlink_position_hil_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_HIL, (const char *)&packet, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
#endif
}

/**
 * @brief Send a position_hil message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_position_hil_send_struct(mavlink_channel_t chan, const mavlink_position_hil_t* position_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_position_hil_send(chan, position_hil->timestamp, position_hil->x, position_hil->y, position_hil->z, position_hil->vx, position_hil->vy, position_hil->vz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_HIL, (const char *)position_hil, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
#endif
}

#if MAVLINK_MSG_ID_POSITION_HIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_position_hil_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, vx);
	_mav_put_float(buf, 24, vy);
	_mav_put_float(buf, 28, vz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_HIL, buf, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
#else
	mavlink_position_hil_t *packet = (mavlink_position_hil_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->vx = vx;
	packet->vy = vy;
	packet->vz = vz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_HIL, (const char *)packet, MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN, MAVLINK_MSG_ID_POSITION_HIL_LEN, MAVLINK_MSG_ID_POSITION_HIL_CRC);
#endif
}
#endif

#endif

// MESSAGE POSITION_HIL UNPACKING


/**
 * @brief Get field timestamp from position_hil message
 *
 * @return Unix time
 */
static inline uint64_t mavlink_msg_position_hil_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from position_hil message
 *
 * @return Local North position
 */
static inline float mavlink_msg_position_hil_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from position_hil message
 *
 * @return Local East position
 */
static inline float mavlink_msg_position_hil_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from position_hil message
 *
 * @return Local Down position
 */
static inline float mavlink_msg_position_hil_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vx from position_hil message
 *
 * @return Local North velocity
 */
static inline float mavlink_msg_position_hil_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vy from position_hil message
 *
 * @return Local East velocity
 */
static inline float mavlink_msg_position_hil_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vz from position_hil message
 *
 * @return Local Down velocity
 */
static inline float mavlink_msg_position_hil_get_vz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a position_hil message into a struct
 *
 * @param msg The message to decode
 * @param position_hil C-struct to decode the message contents into
 */
static inline void mavlink_msg_position_hil_decode(const mavlink_message_t* msg, mavlink_position_hil_t* position_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	position_hil->timestamp = mavlink_msg_position_hil_get_timestamp(msg);
	position_hil->x = mavlink_msg_position_hil_get_x(msg);
	position_hil->y = mavlink_msg_position_hil_get_y(msg);
	position_hil->z = mavlink_msg_position_hil_get_z(msg);
	position_hil->vx = mavlink_msg_position_hil_get_vx(msg);
	position_hil->vy = mavlink_msg_position_hil_get_vy(msg);
	position_hil->vz = mavlink_msg_position_hil_get_vz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POSITION_HIL_LEN? msg->len : MAVLINK_MSG_ID_POSITION_HIL_LEN;
        memset(position_hil, 0, MAVLINK_MSG_ID_POSITION_HIL_LEN);
	memcpy(position_hil, _MAV_PAYLOAD(msg), len);
#endif
}
