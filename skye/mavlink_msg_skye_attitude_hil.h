// MESSAGE SKYE_ATTITUDE_HIL PACKING

#define MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL 223

typedef struct MAVLINK_PACKED __mavlink_skye_attitude_hil_t
{
 uint64_t timestamp; /*< Unix time*/
 float roll; /*< Roll angle (rad, Tait-Bryan, NED)*/
 float pitch; /*< Pitch angle (rad, Tait-Bryan, NED)*/
 float yaw; /*< Yaw angle (rad, Tait-Bryan, NED)*/
 float rollspeed; /*< Roll body angular rate (rad/s, x forward/y right/z down)*/
 float pitchspeed; /*< Pitch body angular rate (rad/s, x forward/y right/z down)*/
 float yawspeed; /*< Yaw body angular rate (rad/s, x forward/y right/z down)*/
 float q[4]; /*< Quaternion (NED)*/
} mavlink_skye_attitude_hil_t;

#define MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN 48
#define MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN 48
#define MAVLINK_MSG_ID_223_LEN 48
#define MAVLINK_MSG_ID_223_MIN_LEN 48

#define MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC 156
#define MAVLINK_MSG_ID_223_CRC 156

#define MAVLINK_MSG_SKYE_ATTITUDE_HIL_FIELD_Q_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SKYE_ATTITUDE_HIL { \
	223, \
	"SKYE_ATTITUDE_HIL", \
	8, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_skye_attitude_hil_t, timestamp) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_skye_attitude_hil_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_skye_attitude_hil_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_skye_attitude_hil_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_skye_attitude_hil_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_skye_attitude_hil_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_skye_attitude_hil_t, yawspeed) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 32, offsetof(mavlink_skye_attitude_hil_t, q) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SKYE_ATTITUDE_HIL { \
	"SKYE_ATTITUDE_HIL", \
	8, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_skye_attitude_hil_t, timestamp) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_skye_attitude_hil_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_skye_attitude_hil_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_skye_attitude_hil_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_skye_attitude_hil_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_skye_attitude_hil_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_skye_attitude_hil_t, yawspeed) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 32, offsetof(mavlink_skye_attitude_hil_t, q) }, \
         } \
}
#endif

/**
 * @brief Pack a skye_attitude_hil message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Unix time
 * @param roll Roll angle (rad, Tait-Bryan, NED)
 * @param pitch Pitch angle (rad, Tait-Bryan, NED)
 * @param yaw Yaw angle (rad, Tait-Bryan, NED)
 * @param rollspeed Roll body angular rate (rad/s, x forward/y right/z down)
 * @param pitchspeed Pitch body angular rate (rad/s, x forward/y right/z down)
 * @param yawspeed Yaw body angular rate (rad/s, x forward/y right/z down)
 * @param q Quaternion (NED)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_attitude_hil_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, const float *q)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, pitch);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, rollspeed);
	_mav_put_float(buf, 24, pitchspeed);
	_mav_put_float(buf, 28, yawspeed);
	_mav_put_float_array(buf, 32, q, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN);
#else
	mavlink_skye_attitude_hil_t packet;
	packet.timestamp = timestamp;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	mav_array_memcpy(packet.q, q, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
}

/**
 * @brief Pack a skye_attitude_hil message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Unix time
 * @param roll Roll angle (rad, Tait-Bryan, NED)
 * @param pitch Pitch angle (rad, Tait-Bryan, NED)
 * @param yaw Yaw angle (rad, Tait-Bryan, NED)
 * @param rollspeed Roll body angular rate (rad/s, x forward/y right/z down)
 * @param pitchspeed Pitch body angular rate (rad/s, x forward/y right/z down)
 * @param yawspeed Yaw body angular rate (rad/s, x forward/y right/z down)
 * @param q Quaternion (NED)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_attitude_hil_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed,const float *q)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, pitch);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, rollspeed);
	_mav_put_float(buf, 24, pitchspeed);
	_mav_put_float(buf, 28, yawspeed);
	_mav_put_float_array(buf, 32, q, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN);
#else
	mavlink_skye_attitude_hil_t packet;
	packet.timestamp = timestamp;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	mav_array_memcpy(packet.q, q, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
}

/**
 * @brief Encode a skye_attitude_hil struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param skye_attitude_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_attitude_hil_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_skye_attitude_hil_t* skye_attitude_hil)
{
	return mavlink_msg_skye_attitude_hil_pack(system_id, component_id, msg, skye_attitude_hil->timestamp, skye_attitude_hil->roll, skye_attitude_hil->pitch, skye_attitude_hil->yaw, skye_attitude_hil->rollspeed, skye_attitude_hil->pitchspeed, skye_attitude_hil->yawspeed, skye_attitude_hil->q);
}

/**
 * @brief Encode a skye_attitude_hil struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param skye_attitude_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_attitude_hil_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_skye_attitude_hil_t* skye_attitude_hil)
{
	return mavlink_msg_skye_attitude_hil_pack_chan(system_id, component_id, chan, msg, skye_attitude_hil->timestamp, skye_attitude_hil->roll, skye_attitude_hil->pitch, skye_attitude_hil->yaw, skye_attitude_hil->rollspeed, skye_attitude_hil->pitchspeed, skye_attitude_hil->yawspeed, skye_attitude_hil->q);
}

/**
 * @brief Send a skye_attitude_hil message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Unix time
 * @param roll Roll angle (rad, Tait-Bryan, NED)
 * @param pitch Pitch angle (rad, Tait-Bryan, NED)
 * @param yaw Yaw angle (rad, Tait-Bryan, NED)
 * @param rollspeed Roll body angular rate (rad/s, x forward/y right/z down)
 * @param pitchspeed Pitch body angular rate (rad/s, x forward/y right/z down)
 * @param yawspeed Yaw body angular rate (rad/s, x forward/y right/z down)
 * @param q Quaternion (NED)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_skye_attitude_hil_send(mavlink_channel_t chan, uint64_t timestamp, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, const float *q)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, pitch);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, rollspeed);
	_mav_put_float(buf, 24, pitchspeed);
	_mav_put_float(buf, 28, yawspeed);
	_mav_put_float_array(buf, 32, q, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL, buf, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
#else
	mavlink_skye_attitude_hil_t packet;
	packet.timestamp = timestamp;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.rollspeed = rollspeed;
	packet.pitchspeed = pitchspeed;
	packet.yawspeed = yawspeed;
	mav_array_memcpy(packet.q, q, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL, (const char *)&packet, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
#endif
}

/**
 * @brief Send a skye_attitude_hil message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_skye_attitude_hil_send_struct(mavlink_channel_t chan, const mavlink_skye_attitude_hil_t* skye_attitude_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_skye_attitude_hil_send(chan, skye_attitude_hil->timestamp, skye_attitude_hil->roll, skye_attitude_hil->pitch, skye_attitude_hil->yaw, skye_attitude_hil->rollspeed, skye_attitude_hil->pitchspeed, skye_attitude_hil->yawspeed, skye_attitude_hil->q);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL, (const char *)skye_attitude_hil, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
#endif
}

#if MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_skye_attitude_hil_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, const float *q)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, pitch);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, rollspeed);
	_mav_put_float(buf, 24, pitchspeed);
	_mav_put_float(buf, 28, yawspeed);
	_mav_put_float_array(buf, 32, q, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL, buf, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
#else
	mavlink_skye_attitude_hil_t *packet = (mavlink_skye_attitude_hil_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->roll = roll;
	packet->pitch = pitch;
	packet->yaw = yaw;
	packet->rollspeed = rollspeed;
	packet->pitchspeed = pitchspeed;
	packet->yawspeed = yawspeed;
	mav_array_memcpy(packet->q, q, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL, (const char *)packet, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_MIN_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_CRC);
#endif
}
#endif

#endif

// MESSAGE SKYE_ATTITUDE_HIL UNPACKING


/**
 * @brief Get field timestamp from skye_attitude_hil message
 *
 * @return Unix time
 */
static inline uint64_t mavlink_msg_skye_attitude_hil_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field roll from skye_attitude_hil message
 *
 * @return Roll angle (rad, Tait-Bryan, NED)
 */
static inline float mavlink_msg_skye_attitude_hil_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch from skye_attitude_hil message
 *
 * @return Pitch angle (rad, Tait-Bryan, NED)
 */
static inline float mavlink_msg_skye_attitude_hil_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from skye_attitude_hil message
 *
 * @return Yaw angle (rad, Tait-Bryan, NED)
 */
static inline float mavlink_msg_skye_attitude_hil_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rollspeed from skye_attitude_hil message
 *
 * @return Roll body angular rate (rad/s, x forward/y right/z down)
 */
static inline float mavlink_msg_skye_attitude_hil_get_rollspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitchspeed from skye_attitude_hil message
 *
 * @return Pitch body angular rate (rad/s, x forward/y right/z down)
 */
static inline float mavlink_msg_skye_attitude_hil_get_pitchspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field yawspeed from skye_attitude_hil message
 *
 * @return Yaw body angular rate (rad/s, x forward/y right/z down)
 */
static inline float mavlink_msg_skye_attitude_hil_get_yawspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field q from skye_attitude_hil message
 *
 * @return Quaternion (NED)
 */
static inline uint16_t mavlink_msg_skye_attitude_hil_get_q(const mavlink_message_t* msg, float *q)
{
	return _MAV_RETURN_float_array(msg, q, 4,  32);
}

/**
 * @brief Decode a skye_attitude_hil message into a struct
 *
 * @param msg The message to decode
 * @param skye_attitude_hil C-struct to decode the message contents into
 */
static inline void mavlink_msg_skye_attitude_hil_decode(const mavlink_message_t* msg, mavlink_skye_attitude_hil_t* skye_attitude_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	skye_attitude_hil->timestamp = mavlink_msg_skye_attitude_hil_get_timestamp(msg);
	skye_attitude_hil->roll = mavlink_msg_skye_attitude_hil_get_roll(msg);
	skye_attitude_hil->pitch = mavlink_msg_skye_attitude_hil_get_pitch(msg);
	skye_attitude_hil->yaw = mavlink_msg_skye_attitude_hil_get_yaw(msg);
	skye_attitude_hil->rollspeed = mavlink_msg_skye_attitude_hil_get_rollspeed(msg);
	skye_attitude_hil->pitchspeed = mavlink_msg_skye_attitude_hil_get_pitchspeed(msg);
	skye_attitude_hil->yawspeed = mavlink_msg_skye_attitude_hil_get_yawspeed(msg);
	mavlink_msg_skye_attitude_hil_get_q(msg, skye_attitude_hil->q);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN? msg->len : MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN;
        memset(skye_attitude_hil, 0, MAVLINK_MSG_ID_SKYE_ATTITUDE_HIL_LEN);
	memcpy(skye_attitude_hil, _MAV_PAYLOAD(msg), len);
#endif
}
