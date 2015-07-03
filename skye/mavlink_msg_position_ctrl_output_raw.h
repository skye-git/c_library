// MESSAGE POSITION_CTRL_OUTPUT_RAW PACKING

#define MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW 210

typedef struct __mavlink_position_ctrl_output_raw_t
{
 float F_x; ///< Force in x axis [N]
 float F_y; ///< Force in y axis [N]
 float F_z; ///< Force in z axis [N]
} mavlink_position_ctrl_output_raw_t;

#define MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN 12
#define MAVLINK_MSG_ID_210_LEN 12

#define MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC 161
#define MAVLINK_MSG_ID_210_CRC 161



#define MAVLINK_MESSAGE_INFO_POSITION_CTRL_OUTPUT_RAW { \
	"POSITION_CTRL_OUTPUT_RAW", \
	3, \
	{  { "F_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_position_ctrl_output_raw_t, F_x) }, \
         { "F_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_position_ctrl_output_raw_t, F_y) }, \
         { "F_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_position_ctrl_output_raw_t, F_z) }, \
         } \
}


/**
 * @brief Pack a position_ctrl_output_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param F_x Force in x axis [N]
 * @param F_y Force in y axis [N]
 * @param F_z Force in z axis [N]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_ctrl_output_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float F_x, float F_y, float F_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN];
	_mav_put_float(buf, 0, F_x);
	_mav_put_float(buf, 4, F_y);
	_mav_put_float(buf, 8, F_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#else
	mavlink_position_ctrl_output_raw_t packet;
	packet.F_x = F_x;
	packet.F_y = F_y;
	packet.F_z = F_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
}

/**
 * @brief Pack a position_ctrl_output_raw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param F_x Force in x axis [N]
 * @param F_y Force in y axis [N]
 * @param F_z Force in z axis [N]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_ctrl_output_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float F_x,float F_y,float F_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN];
	_mav_put_float(buf, 0, F_x);
	_mav_put_float(buf, 4, F_y);
	_mav_put_float(buf, 8, F_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#else
	mavlink_position_ctrl_output_raw_t packet;
	packet.F_x = F_x;
	packet.F_y = F_y;
	packet.F_z = F_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
}

/**
 * @brief Encode a position_ctrl_output_raw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param position_ctrl_output_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_ctrl_output_raw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_position_ctrl_output_raw_t* position_ctrl_output_raw)
{
	return mavlink_msg_position_ctrl_output_raw_pack(system_id, component_id, msg, position_ctrl_output_raw->F_x, position_ctrl_output_raw->F_y, position_ctrl_output_raw->F_z);
}

/**
 * @brief Encode a position_ctrl_output_raw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param position_ctrl_output_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_ctrl_output_raw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_position_ctrl_output_raw_t* position_ctrl_output_raw)
{
	return mavlink_msg_position_ctrl_output_raw_pack_chan(system_id, component_id, chan, msg, position_ctrl_output_raw->F_x, position_ctrl_output_raw->F_y, position_ctrl_output_raw->F_z);
}

/**
 * @brief Send a position_ctrl_output_raw message
 * @param chan MAVLink channel to send the message
 *
 * @param F_x Force in x axis [N]
 * @param F_y Force in y axis [N]
 * @param F_z Force in z axis [N]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_position_ctrl_output_raw_send(mavlink_channel_t chan, float F_x, float F_y, float F_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN];
	_mav_put_float(buf, 0, F_x);
	_mav_put_float(buf, 4, F_y);
	_mav_put_float(buf, 8, F_z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
#else
	mavlink_position_ctrl_output_raw_t packet;
	packet.F_x = F_x;
	packet.F_y = F_y;
	packet.F_z = F_z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, (const char *)&packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, (const char *)&packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_position_ctrl_output_raw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float F_x, float F_y, float F_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, F_x);
	_mav_put_float(buf, 4, F_y);
	_mav_put_float(buf, 8, F_z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, buf, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
#else
	mavlink_position_ctrl_output_raw_t *packet = (mavlink_position_ctrl_output_raw_t *)msgbuf;
	packet->F_x = F_x;
	packet->F_y = F_y;
	packet->F_z = F_z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, (const char *)packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW, (const char *)packet, MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POSITION_CTRL_OUTPUT_RAW UNPACKING


/**
 * @brief Get field F_x from position_ctrl_output_raw message
 *
 * @return Force in x axis [N]
 */
static inline float mavlink_msg_position_ctrl_output_raw_get_F_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field F_y from position_ctrl_output_raw message
 *
 * @return Force in y axis [N]
 */
static inline float mavlink_msg_position_ctrl_output_raw_get_F_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field F_z from position_ctrl_output_raw message
 *
 * @return Force in z axis [N]
 */
static inline float mavlink_msg_position_ctrl_output_raw_get_F_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a position_ctrl_output_raw message into a struct
 *
 * @param msg The message to decode
 * @param position_ctrl_output_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_position_ctrl_output_raw_decode(const mavlink_message_t* msg, mavlink_position_ctrl_output_raw_t* position_ctrl_output_raw)
{
#if MAVLINK_NEED_BYTE_SWAP
	position_ctrl_output_raw->F_x = mavlink_msg_position_ctrl_output_raw_get_F_x(msg);
	position_ctrl_output_raw->F_y = mavlink_msg_position_ctrl_output_raw_get_F_y(msg);
	position_ctrl_output_raw->F_z = mavlink_msg_position_ctrl_output_raw_get_F_z(msg);
#else
	memcpy(position_ctrl_output_raw, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_RAW_LEN);
#endif
}
