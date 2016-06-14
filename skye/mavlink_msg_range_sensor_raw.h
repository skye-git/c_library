// MESSAGE RANGE_SENSOR_RAW PACKING

#define MAVLINK_MSG_ID_RANGE_SENSOR_RAW 215

typedef struct MAVLINK_PACKED __mavlink_range_sensor_raw_t
{
 float dist_raw[6]; /*< Distances to receiver modules*/
 uint8_t sender_idx; /*< Sender module index*/
} mavlink_range_sensor_raw_t;

#define MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN 25
#define MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN 25
#define MAVLINK_MSG_ID_215_LEN 25
#define MAVLINK_MSG_ID_215_MIN_LEN 25

#define MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC 73
#define MAVLINK_MSG_ID_215_CRC 73

#define MAVLINK_MSG_RANGE_SENSOR_RAW_FIELD_DIST_RAW_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RANGE_SENSOR_RAW { \
	215, \
	"RANGE_SENSOR_RAW", \
	2, \
	{  { "dist_raw", NULL, MAVLINK_TYPE_FLOAT, 6, 0, offsetof(mavlink_range_sensor_raw_t, dist_raw) }, \
         { "sender_idx", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_range_sensor_raw_t, sender_idx) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RANGE_SENSOR_RAW { \
	"RANGE_SENSOR_RAW", \
	2, \
	{  { "dist_raw", NULL, MAVLINK_TYPE_FLOAT, 6, 0, offsetof(mavlink_range_sensor_raw_t, dist_raw) }, \
         { "sender_idx", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_range_sensor_raw_t, sender_idx) }, \
         } \
}
#endif

/**
 * @brief Pack a range_sensor_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sender_idx Sender module index
 * @param dist_raw Distances to receiver modules
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_range_sensor_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t sender_idx, const float *dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN];
	_mav_put_uint8_t(buf, 24, sender_idx);
	_mav_put_float_array(buf, 0, dist_raw, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN);
#else
	mavlink_range_sensor_raw_t packet;
	packet.sender_idx = sender_idx;
	mav_array_memcpy(packet.dist_raw, dist_raw, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RANGE_SENSOR_RAW;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
}

/**
 * @brief Pack a range_sensor_raw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sender_idx Sender module index
 * @param dist_raw Distances to receiver modules
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_range_sensor_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t sender_idx,const float *dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN];
	_mav_put_uint8_t(buf, 24, sender_idx);
	_mav_put_float_array(buf, 0, dist_raw, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN);
#else
	mavlink_range_sensor_raw_t packet;
	packet.sender_idx = sender_idx;
	mav_array_memcpy(packet.dist_raw, dist_raw, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RANGE_SENSOR_RAW;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
}

/**
 * @brief Encode a range_sensor_raw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param range_sensor_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_range_sensor_raw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_range_sensor_raw_t* range_sensor_raw)
{
	return mavlink_msg_range_sensor_raw_pack(system_id, component_id, msg, range_sensor_raw->sender_idx, range_sensor_raw->dist_raw);
}

/**
 * @brief Encode a range_sensor_raw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param range_sensor_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_range_sensor_raw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_range_sensor_raw_t* range_sensor_raw)
{
	return mavlink_msg_range_sensor_raw_pack_chan(system_id, component_id, chan, msg, range_sensor_raw->sender_idx, range_sensor_raw->dist_raw);
}

/**
 * @brief Send a range_sensor_raw message
 * @param chan MAVLink channel to send the message
 *
 * @param sender_idx Sender module index
 * @param dist_raw Distances to receiver modules
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_range_sensor_raw_send(mavlink_channel_t chan, uint8_t sender_idx, const float *dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN];
	_mav_put_uint8_t(buf, 24, sender_idx);
	_mav_put_float_array(buf, 0, dist_raw, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW, buf, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
#else
	mavlink_range_sensor_raw_t packet;
	packet.sender_idx = sender_idx;
	mav_array_memcpy(packet.dist_raw, dist_raw, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW, (const char *)&packet, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
#endif
}

/**
 * @brief Send a range_sensor_raw message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_range_sensor_raw_send_struct(mavlink_channel_t chan, const mavlink_range_sensor_raw_t* range_sensor_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_range_sensor_raw_send(chan, range_sensor_raw->sender_idx, range_sensor_raw->dist_raw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW, (const char *)range_sensor_raw, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
#endif
}

#if MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_range_sensor_raw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sender_idx, const float *dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 24, sender_idx);
	_mav_put_float_array(buf, 0, dist_raw, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW, buf, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
#else
	mavlink_range_sensor_raw_t *packet = (mavlink_range_sensor_raw_t *)msgbuf;
	packet->sender_idx = sender_idx;
	mav_array_memcpy(packet->dist_raw, dist_raw, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_RAW, (const char *)packet, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_CRC);
#endif
}
#endif

#endif

// MESSAGE RANGE_SENSOR_RAW UNPACKING


/**
 * @brief Get field sender_idx from range_sensor_raw message
 *
 * @return Sender module index
 */
static inline uint8_t mavlink_msg_range_sensor_raw_get_sender_idx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field dist_raw from range_sensor_raw message
 *
 * @return Distances to receiver modules
 */
static inline uint16_t mavlink_msg_range_sensor_raw_get_dist_raw(const mavlink_message_t* msg, float *dist_raw)
{
	return _MAV_RETURN_float_array(msg, dist_raw, 6,  0);
}

/**
 * @brief Decode a range_sensor_raw message into a struct
 *
 * @param msg The message to decode
 * @param range_sensor_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_range_sensor_raw_decode(const mavlink_message_t* msg, mavlink_range_sensor_raw_t* range_sensor_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_range_sensor_raw_get_dist_raw(msg, range_sensor_raw->dist_raw);
	range_sensor_raw->sender_idx = mavlink_msg_range_sensor_raw_get_sender_idx(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN? msg->len : MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN;
        memset(range_sensor_raw, 0, MAVLINK_MSG_ID_RANGE_SENSOR_RAW_LEN);
	memcpy(range_sensor_raw, _MAV_PAYLOAD(msg), len);
#endif
}
