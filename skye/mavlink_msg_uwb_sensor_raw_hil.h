// MESSAGE UWB_SENSOR_RAW_HIL PACKING

#define MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL 228

MAVPACKED(
typedef struct __mavlink_uwb_sensor_raw_hil_t {
 uint64_t time_msg_sent; /*< Time at which the message was sent*/
 float dist_raw; /*< Distance of the tag from the anchor*/
 uint8_t tag_id; /*< UWB tag id*/
 uint8_t anchor_id; /*< UWB anchor id*/
}) mavlink_uwb_sensor_raw_hil_t;

#define MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN 14
#define MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN 14
#define MAVLINK_MSG_ID_228_LEN 14
#define MAVLINK_MSG_ID_228_MIN_LEN 14

#define MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC 251
#define MAVLINK_MSG_ID_228_CRC 251



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UWB_SENSOR_RAW_HIL { \
	228, \
	"UWB_SENSOR_RAW_HIL", \
	4, \
	{  { "time_msg_sent", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uwb_sensor_raw_hil_t, time_msg_sent) }, \
         { "dist_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uwb_sensor_raw_hil_t, dist_raw) }, \
         { "tag_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_uwb_sensor_raw_hil_t, tag_id) }, \
         { "anchor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_uwb_sensor_raw_hil_t, anchor_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UWB_SENSOR_RAW_HIL { \
	"UWB_SENSOR_RAW_HIL", \
	4, \
	{  { "time_msg_sent", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uwb_sensor_raw_hil_t, time_msg_sent) }, \
         { "dist_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uwb_sensor_raw_hil_t, dist_raw) }, \
         { "tag_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_uwb_sensor_raw_hil_t, tag_id) }, \
         { "anchor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_uwb_sensor_raw_hil_t, anchor_id) }, \
         } \
}
#endif

/**
 * @brief Pack a uwb_sensor_raw_hil message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_msg_sent Time at which the message was sent
 * @param tag_id UWB tag id
 * @param anchor_id UWB anchor id
 * @param dist_raw Distance of the tag from the anchor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_sensor_raw_hil_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_msg_sent, uint8_t tag_id, uint8_t anchor_id, float dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN];
	_mav_put_uint64_t(buf, 0, time_msg_sent);
	_mav_put_float(buf, 8, dist_raw);
	_mav_put_uint8_t(buf, 12, tag_id);
	_mav_put_uint8_t(buf, 13, anchor_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN);
#else
	mavlink_uwb_sensor_raw_hil_t packet;
	packet.time_msg_sent = time_msg_sent;
	packet.dist_raw = dist_raw;
	packet.tag_id = tag_id;
	packet.anchor_id = anchor_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
}

/**
 * @brief Pack a uwb_sensor_raw_hil message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_msg_sent Time at which the message was sent
 * @param tag_id UWB tag id
 * @param anchor_id UWB anchor id
 * @param dist_raw Distance of the tag from the anchor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_sensor_raw_hil_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_msg_sent,uint8_t tag_id,uint8_t anchor_id,float dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN];
	_mav_put_uint64_t(buf, 0, time_msg_sent);
	_mav_put_float(buf, 8, dist_raw);
	_mav_put_uint8_t(buf, 12, tag_id);
	_mav_put_uint8_t(buf, 13, anchor_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN);
#else
	mavlink_uwb_sensor_raw_hil_t packet;
	packet.time_msg_sent = time_msg_sent;
	packet.dist_raw = dist_raw;
	packet.tag_id = tag_id;
	packet.anchor_id = anchor_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
}

/**
 * @brief Encode a uwb_sensor_raw_hil struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uwb_sensor_raw_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_sensor_raw_hil_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uwb_sensor_raw_hil_t* uwb_sensor_raw_hil)
{
	return mavlink_msg_uwb_sensor_raw_hil_pack(system_id, component_id, msg, uwb_sensor_raw_hil->time_msg_sent, uwb_sensor_raw_hil->tag_id, uwb_sensor_raw_hil->anchor_id, uwb_sensor_raw_hil->dist_raw);
}

/**
 * @brief Encode a uwb_sensor_raw_hil struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uwb_sensor_raw_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_sensor_raw_hil_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uwb_sensor_raw_hil_t* uwb_sensor_raw_hil)
{
	return mavlink_msg_uwb_sensor_raw_hil_pack_chan(system_id, component_id, chan, msg, uwb_sensor_raw_hil->time_msg_sent, uwb_sensor_raw_hil->tag_id, uwb_sensor_raw_hil->anchor_id, uwb_sensor_raw_hil->dist_raw);
}

/**
 * @brief Send a uwb_sensor_raw_hil message
 * @param chan MAVLink channel to send the message
 *
 * @param time_msg_sent Time at which the message was sent
 * @param tag_id UWB tag id
 * @param anchor_id UWB anchor id
 * @param dist_raw Distance of the tag from the anchor
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uwb_sensor_raw_hil_send(mavlink_channel_t chan, uint64_t time_msg_sent, uint8_t tag_id, uint8_t anchor_id, float dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN];
	_mav_put_uint64_t(buf, 0, time_msg_sent);
	_mav_put_float(buf, 8, dist_raw);
	_mav_put_uint8_t(buf, 12, tag_id);
	_mav_put_uint8_t(buf, 13, anchor_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL, buf, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
#else
	mavlink_uwb_sensor_raw_hil_t packet;
	packet.time_msg_sent = time_msg_sent;
	packet.dist_raw = dist_raw;
	packet.tag_id = tag_id;
	packet.anchor_id = anchor_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL, (const char *)&packet, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
#endif
}

/**
 * @brief Send a uwb_sensor_raw_hil message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uwb_sensor_raw_hil_send_struct(mavlink_channel_t chan, const mavlink_uwb_sensor_raw_hil_t* uwb_sensor_raw_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uwb_sensor_raw_hil_send(chan, uwb_sensor_raw_hil->time_msg_sent, uwb_sensor_raw_hil->tag_id, uwb_sensor_raw_hil->anchor_id, uwb_sensor_raw_hil->dist_raw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL, (const char *)uwb_sensor_raw_hil, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
#endif
}

#if MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uwb_sensor_raw_hil_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_msg_sent, uint8_t tag_id, uint8_t anchor_id, float dist_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_msg_sent);
	_mav_put_float(buf, 8, dist_raw);
	_mav_put_uint8_t(buf, 12, tag_id);
	_mav_put_uint8_t(buf, 13, anchor_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL, buf, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
#else
	mavlink_uwb_sensor_raw_hil_t *packet = (mavlink_uwb_sensor_raw_hil_t *)msgbuf;
	packet->time_msg_sent = time_msg_sent;
	packet->dist_raw = dist_raw;
	packet->tag_id = tag_id;
	packet->anchor_id = anchor_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL, (const char *)packet, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_CRC);
#endif
}
#endif

#endif

// MESSAGE UWB_SENSOR_RAW_HIL UNPACKING


/**
 * @brief Get field time_msg_sent from uwb_sensor_raw_hil message
 *
 * @return Time at which the message was sent
 */
static inline uint64_t mavlink_msg_uwb_sensor_raw_hil_get_time_msg_sent(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field tag_id from uwb_sensor_raw_hil message
 *
 * @return UWB tag id
 */
static inline uint8_t mavlink_msg_uwb_sensor_raw_hil_get_tag_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field anchor_id from uwb_sensor_raw_hil message
 *
 * @return UWB anchor id
 */
static inline uint8_t mavlink_msg_uwb_sensor_raw_hil_get_anchor_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field dist_raw from uwb_sensor_raw_hil message
 *
 * @return Distance of the tag from the anchor
 */
static inline float mavlink_msg_uwb_sensor_raw_hil_get_dist_raw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a uwb_sensor_raw_hil message into a struct
 *
 * @param msg The message to decode
 * @param uwb_sensor_raw_hil C-struct to decode the message contents into
 */
static inline void mavlink_msg_uwb_sensor_raw_hil_decode(const mavlink_message_t* msg, mavlink_uwb_sensor_raw_hil_t* uwb_sensor_raw_hil)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	uwb_sensor_raw_hil->time_msg_sent = mavlink_msg_uwb_sensor_raw_hil_get_time_msg_sent(msg);
	uwb_sensor_raw_hil->dist_raw = mavlink_msg_uwb_sensor_raw_hil_get_dist_raw(msg);
	uwb_sensor_raw_hil->tag_id = mavlink_msg_uwb_sensor_raw_hil_get_tag_id(msg);
	uwb_sensor_raw_hil->anchor_id = mavlink_msg_uwb_sensor_raw_hil_get_anchor_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN? msg->len : MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN;
        memset(uwb_sensor_raw_hil, 0, MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_LEN);
	memcpy(uwb_sensor_raw_hil, _MAV_PAYLOAD(msg), len);
#endif
}
