// MESSAGE RANGE_SENSOR_SINGLE PACKING

#define MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE 216

typedef struct __mavlink_range_sensor_single_t
{
 uint64_t px4_ts; ///< PX4 timestamp taken when the actual measurement has been commanded at the pozyx node.
 uint32_t pozyx_ts; ///< Timestamp of last range measurement.
 uint32_t range; ///< Last range measurement in mm. The resolution of a range measurement is 4.69mm (corresponding to a timing resolution of 15.65ps)
 int16_t rssi; ///< Received signal strength value of last range measurement.
 uint16_t anchor_id; ///< Index of anchor
 uint16_t tag_id; ///< Index of tag
} mavlink_range_sensor_single_t;

#define MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN 22
#define MAVLINK_MSG_ID_216_LEN 22

#define MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC 117
#define MAVLINK_MSG_ID_216_CRC 117



#define MAVLINK_MESSAGE_INFO_RANGE_SENSOR_SINGLE { \
	"RANGE_SENSOR_SINGLE", \
	6, \
	{  { "px4_ts", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_range_sensor_single_t, px4_ts) }, \
         { "pozyx_ts", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_range_sensor_single_t, pozyx_ts) }, \
         { "range", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_range_sensor_single_t, range) }, \
         { "rssi", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_range_sensor_single_t, rssi) }, \
         { "anchor_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_range_sensor_single_t, anchor_id) }, \
         { "tag_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_range_sensor_single_t, tag_id) }, \
         } \
}


/**
 * @brief Pack a range_sensor_single message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param px4_ts PX4 timestamp taken when the actual measurement has been commanded at the pozyx node.
 * @param pozyx_ts Timestamp of last range measurement.
 * @param range Last range measurement in mm. The resolution of a range measurement is 4.69mm (corresponding to a timing resolution of 15.65ps)
 * @param rssi Received signal strength value of last range measurement.
 * @param anchor_id Index of anchor
 * @param tag_id Index of tag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_range_sensor_single_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t px4_ts, uint32_t pozyx_ts, uint32_t range, int16_t rssi, uint16_t anchor_id, uint16_t tag_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN];
	_mav_put_uint64_t(buf, 0, px4_ts);
	_mav_put_uint32_t(buf, 8, pozyx_ts);
	_mav_put_uint32_t(buf, 12, range);
	_mav_put_int16_t(buf, 16, rssi);
	_mav_put_uint16_t(buf, 18, anchor_id);
	_mav_put_uint16_t(buf, 20, tag_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#else
	mavlink_range_sensor_single_t packet;
	packet.px4_ts = px4_ts;
	packet.pozyx_ts = pozyx_ts;
	packet.range = range;
	packet.rssi = rssi;
	packet.anchor_id = anchor_id;
	packet.tag_id = tag_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
}

/**
 * @brief Pack a range_sensor_single message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param px4_ts PX4 timestamp taken when the actual measurement has been commanded at the pozyx node.
 * @param pozyx_ts Timestamp of last range measurement.
 * @param range Last range measurement in mm. The resolution of a range measurement is 4.69mm (corresponding to a timing resolution of 15.65ps)
 * @param rssi Received signal strength value of last range measurement.
 * @param anchor_id Index of anchor
 * @param tag_id Index of tag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_range_sensor_single_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t px4_ts,uint32_t pozyx_ts,uint32_t range,int16_t rssi,uint16_t anchor_id,uint16_t tag_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN];
	_mav_put_uint64_t(buf, 0, px4_ts);
	_mav_put_uint32_t(buf, 8, pozyx_ts);
	_mav_put_uint32_t(buf, 12, range);
	_mav_put_int16_t(buf, 16, rssi);
	_mav_put_uint16_t(buf, 18, anchor_id);
	_mav_put_uint16_t(buf, 20, tag_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#else
	mavlink_range_sensor_single_t packet;
	packet.px4_ts = px4_ts;
	packet.pozyx_ts = pozyx_ts;
	packet.range = range;
	packet.rssi = rssi;
	packet.anchor_id = anchor_id;
	packet.tag_id = tag_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
}

/**
 * @brief Encode a range_sensor_single struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param range_sensor_single C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_range_sensor_single_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_range_sensor_single_t* range_sensor_single)
{
	return mavlink_msg_range_sensor_single_pack(system_id, component_id, msg, range_sensor_single->px4_ts, range_sensor_single->pozyx_ts, range_sensor_single->range, range_sensor_single->rssi, range_sensor_single->anchor_id, range_sensor_single->tag_id);
}

/**
 * @brief Encode a range_sensor_single struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param range_sensor_single C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_range_sensor_single_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_range_sensor_single_t* range_sensor_single)
{
	return mavlink_msg_range_sensor_single_pack_chan(system_id, component_id, chan, msg, range_sensor_single->px4_ts, range_sensor_single->pozyx_ts, range_sensor_single->range, range_sensor_single->rssi, range_sensor_single->anchor_id, range_sensor_single->tag_id);
}

/**
 * @brief Send a range_sensor_single message
 * @param chan MAVLink channel to send the message
 *
 * @param px4_ts PX4 timestamp taken when the actual measurement has been commanded at the pozyx node.
 * @param pozyx_ts Timestamp of last range measurement.
 * @param range Last range measurement in mm. The resolution of a range measurement is 4.69mm (corresponding to a timing resolution of 15.65ps)
 * @param rssi Received signal strength value of last range measurement.
 * @param anchor_id Index of anchor
 * @param tag_id Index of tag
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_range_sensor_single_send(mavlink_channel_t chan, uint64_t px4_ts, uint32_t pozyx_ts, uint32_t range, int16_t rssi, uint16_t anchor_id, uint16_t tag_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN];
	_mav_put_uint64_t(buf, 0, px4_ts);
	_mav_put_uint32_t(buf, 8, pozyx_ts);
	_mav_put_uint32_t(buf, 12, range);
	_mav_put_int16_t(buf, 16, rssi);
	_mav_put_uint16_t(buf, 18, anchor_id);
	_mav_put_uint16_t(buf, 20, tag_id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
#else
	mavlink_range_sensor_single_t packet;
	packet.px4_ts = px4_ts;
	packet.pozyx_ts = pozyx_ts;
	packet.range = range;
	packet.rssi = rssi;
	packet.anchor_id = anchor_id;
	packet.tag_id = tag_id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, (const char *)&packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, (const char *)&packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_range_sensor_single_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t px4_ts, uint32_t pozyx_ts, uint32_t range, int16_t rssi, uint16_t anchor_id, uint16_t tag_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, px4_ts);
	_mav_put_uint32_t(buf, 8, pozyx_ts);
	_mav_put_uint32_t(buf, 12, range);
	_mav_put_int16_t(buf, 16, rssi);
	_mav_put_uint16_t(buf, 18, anchor_id);
	_mav_put_uint16_t(buf, 20, tag_id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, buf, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
#else
	mavlink_range_sensor_single_t *packet = (mavlink_range_sensor_single_t *)msgbuf;
	packet->px4_ts = px4_ts;
	packet->pozyx_ts = pozyx_ts;
	packet->range = range;
	packet->rssi = rssi;
	packet->anchor_id = anchor_id;
	packet->tag_id = tag_id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, (const char *)packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE, (const char *)packet, MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE RANGE_SENSOR_SINGLE UNPACKING


/**
 * @brief Get field px4_ts from range_sensor_single message
 *
 * @return PX4 timestamp taken when the actual measurement has been commanded at the pozyx node.
 */
static inline uint64_t mavlink_msg_range_sensor_single_get_px4_ts(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pozyx_ts from range_sensor_single message
 *
 * @return Timestamp of last range measurement.
 */
static inline uint32_t mavlink_msg_range_sensor_single_get_pozyx_ts(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field range from range_sensor_single message
 *
 * @return Last range measurement in mm. The resolution of a range measurement is 4.69mm (corresponding to a timing resolution of 15.65ps)
 */
static inline uint32_t mavlink_msg_range_sensor_single_get_range(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field rssi from range_sensor_single message
 *
 * @return Received signal strength value of last range measurement.
 */
static inline int16_t mavlink_msg_range_sensor_single_get_rssi(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field anchor_id from range_sensor_single message
 *
 * @return Index of anchor
 */
static inline uint16_t mavlink_msg_range_sensor_single_get_anchor_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field tag_id from range_sensor_single message
 *
 * @return Index of tag
 */
static inline uint16_t mavlink_msg_range_sensor_single_get_tag_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Decode a range_sensor_single message into a struct
 *
 * @param msg The message to decode
 * @param range_sensor_single C-struct to decode the message contents into
 */
static inline void mavlink_msg_range_sensor_single_decode(const mavlink_message_t* msg, mavlink_range_sensor_single_t* range_sensor_single)
{
#if MAVLINK_NEED_BYTE_SWAP
	range_sensor_single->px4_ts = mavlink_msg_range_sensor_single_get_px4_ts(msg);
	range_sensor_single->pozyx_ts = mavlink_msg_range_sensor_single_get_pozyx_ts(msg);
	range_sensor_single->range = mavlink_msg_range_sensor_single_get_range(msg);
	range_sensor_single->rssi = mavlink_msg_range_sensor_single_get_rssi(msg);
	range_sensor_single->anchor_id = mavlink_msg_range_sensor_single_get_anchor_id(msg);
	range_sensor_single->tag_id = mavlink_msg_range_sensor_single_get_tag_id(msg);
#else
	memcpy(range_sensor_single, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_RANGE_SENSOR_SINGLE_LEN);
#endif
}
