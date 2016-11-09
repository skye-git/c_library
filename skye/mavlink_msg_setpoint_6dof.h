// MESSAGE SETPOINT_6DOF PACKING

#define MAVLINK_MSG_ID_SETPOINT_6DOF 221

MAVPACKED(
typedef struct __mavlink_setpoint_6dof_t {
 uint32_t timestamp; /*< QGC Timestamp */
 int16_t trans_x; /*< Translational Component in x*/
 int16_t trans_y; /*< Translational Component in y*/
 int16_t trans_z; /*< Translational Component in z*/
 int16_t rot_x; /*< Rotational Component in x*/
 int16_t rot_y; /*< Rotational Component in y*/
 int16_t rot_z; /*< Rotational Component in z*/
}) mavlink_setpoint_6dof_t;

#define MAVLINK_MSG_ID_SETPOINT_6DOF_LEN 16
#define MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN 16
#define MAVLINK_MSG_ID_221_LEN 16
#define MAVLINK_MSG_ID_221_MIN_LEN 16

#define MAVLINK_MSG_ID_SETPOINT_6DOF_CRC 171
#define MAVLINK_MSG_ID_221_CRC 171



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SETPOINT_6DOF { \
	221, \
	"SETPOINT_6DOF", \
	7, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_setpoint_6dof_t, timestamp) }, \
         { "trans_x", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_setpoint_6dof_t, trans_x) }, \
         { "trans_y", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_setpoint_6dof_t, trans_y) }, \
         { "trans_z", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_setpoint_6dof_t, trans_z) }, \
         { "rot_x", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_setpoint_6dof_t, rot_x) }, \
         { "rot_y", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_setpoint_6dof_t, rot_y) }, \
         { "rot_z", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_setpoint_6dof_t, rot_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SETPOINT_6DOF { \
	"SETPOINT_6DOF", \
	7, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_setpoint_6dof_t, timestamp) }, \
         { "trans_x", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_setpoint_6dof_t, trans_x) }, \
         { "trans_y", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_setpoint_6dof_t, trans_y) }, \
         { "trans_z", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_setpoint_6dof_t, trans_z) }, \
         { "rot_x", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_setpoint_6dof_t, rot_x) }, \
         { "rot_y", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_setpoint_6dof_t, rot_y) }, \
         { "rot_z", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_setpoint_6dof_t, rot_z) }, \
         } \
}
#endif

/**
 * @brief Pack a setpoint_6dof message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param trans_x Translational Component in x
 * @param trans_y Translational Component in y
 * @param trans_z Translational Component in z
 * @param rot_x Rotational Component in x
 * @param rot_y Rotational Component in y
 * @param rot_z Rotational Component in z
 * @param timestamp QGC Timestamp 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_setpoint_6dof_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t trans_x, int16_t trans_y, int16_t trans_z, int16_t rot_x, int16_t rot_y, int16_t rot_z, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_6DOF_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_int16_t(buf, 4, trans_x);
	_mav_put_int16_t(buf, 6, trans_y);
	_mav_put_int16_t(buf, 8, trans_z);
	_mav_put_int16_t(buf, 10, rot_x);
	_mav_put_int16_t(buf, 12, rot_y);
	_mav_put_int16_t(buf, 14, rot_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN);
#else
	mavlink_setpoint_6dof_t packet;
	packet.timestamp = timestamp;
	packet.trans_x = trans_x;
	packet.trans_y = trans_y;
	packet.trans_z = trans_z;
	packet.rot_x = rot_x;
	packet.rot_y = rot_y;
	packet.rot_z = rot_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SETPOINT_6DOF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
}

/**
 * @brief Pack a setpoint_6dof message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param trans_x Translational Component in x
 * @param trans_y Translational Component in y
 * @param trans_z Translational Component in z
 * @param rot_x Rotational Component in x
 * @param rot_y Rotational Component in y
 * @param rot_z Rotational Component in z
 * @param timestamp QGC Timestamp 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_setpoint_6dof_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t trans_x,int16_t trans_y,int16_t trans_z,int16_t rot_x,int16_t rot_y,int16_t rot_z,uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_6DOF_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_int16_t(buf, 4, trans_x);
	_mav_put_int16_t(buf, 6, trans_y);
	_mav_put_int16_t(buf, 8, trans_z);
	_mav_put_int16_t(buf, 10, rot_x);
	_mav_put_int16_t(buf, 12, rot_y);
	_mav_put_int16_t(buf, 14, rot_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN);
#else
	mavlink_setpoint_6dof_t packet;
	packet.timestamp = timestamp;
	packet.trans_x = trans_x;
	packet.trans_y = trans_y;
	packet.trans_z = trans_z;
	packet.rot_x = rot_x;
	packet.rot_y = rot_y;
	packet.rot_z = rot_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SETPOINT_6DOF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
}

/**
 * @brief Encode a setpoint_6dof struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param setpoint_6dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_setpoint_6dof_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_setpoint_6dof_t* setpoint_6dof)
{
	return mavlink_msg_setpoint_6dof_pack(system_id, component_id, msg, setpoint_6dof->trans_x, setpoint_6dof->trans_y, setpoint_6dof->trans_z, setpoint_6dof->rot_x, setpoint_6dof->rot_y, setpoint_6dof->rot_z, setpoint_6dof->timestamp);
}

/**
 * @brief Encode a setpoint_6dof struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param setpoint_6dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_setpoint_6dof_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_setpoint_6dof_t* setpoint_6dof)
{
	return mavlink_msg_setpoint_6dof_pack_chan(system_id, component_id, chan, msg, setpoint_6dof->trans_x, setpoint_6dof->trans_y, setpoint_6dof->trans_z, setpoint_6dof->rot_x, setpoint_6dof->rot_y, setpoint_6dof->rot_z, setpoint_6dof->timestamp);
}

/**
 * @brief Send a setpoint_6dof message
 * @param chan MAVLink channel to send the message
 *
 * @param trans_x Translational Component in x
 * @param trans_y Translational Component in y
 * @param trans_z Translational Component in z
 * @param rot_x Rotational Component in x
 * @param rot_y Rotational Component in y
 * @param rot_z Rotational Component in z
 * @param timestamp QGC Timestamp 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_setpoint_6dof_send(mavlink_channel_t chan, int16_t trans_x, int16_t trans_y, int16_t trans_z, int16_t rot_x, int16_t rot_y, int16_t rot_z, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_6DOF_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_int16_t(buf, 4, trans_x);
	_mav_put_int16_t(buf, 6, trans_y);
	_mav_put_int16_t(buf, 8, trans_z);
	_mav_put_int16_t(buf, 10, rot_x);
	_mav_put_int16_t(buf, 12, rot_y);
	_mav_put_int16_t(buf, 14, rot_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_6DOF, buf, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
#else
	mavlink_setpoint_6dof_t packet;
	packet.timestamp = timestamp;
	packet.trans_x = trans_x;
	packet.trans_y = trans_y;
	packet.trans_z = trans_z;
	packet.rot_x = rot_x;
	packet.rot_y = rot_y;
	packet.rot_z = rot_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_6DOF, (const char *)&packet, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
#endif
}

/**
 * @brief Send a setpoint_6dof message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_setpoint_6dof_send_struct(mavlink_channel_t chan, const mavlink_setpoint_6dof_t* setpoint_6dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_setpoint_6dof_send(chan, setpoint_6dof->trans_x, setpoint_6dof->trans_y, setpoint_6dof->trans_z, setpoint_6dof->rot_x, setpoint_6dof->rot_y, setpoint_6dof->rot_z, setpoint_6dof->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_6DOF, (const char *)setpoint_6dof, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
#endif
}

#if MAVLINK_MSG_ID_SETPOINT_6DOF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_setpoint_6dof_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t trans_x, int16_t trans_y, int16_t trans_z, int16_t rot_x, int16_t rot_y, int16_t rot_z, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_int16_t(buf, 4, trans_x);
	_mav_put_int16_t(buf, 6, trans_y);
	_mav_put_int16_t(buf, 8, trans_z);
	_mav_put_int16_t(buf, 10, rot_x);
	_mav_put_int16_t(buf, 12, rot_y);
	_mav_put_int16_t(buf, 14, rot_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_6DOF, buf, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
#else
	mavlink_setpoint_6dof_t *packet = (mavlink_setpoint_6dof_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->trans_x = trans_x;
	packet->trans_y = trans_y;
	packet->trans_z = trans_z;
	packet->rot_x = rot_x;
	packet->rot_y = rot_y;
	packet->rot_z = rot_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_6DOF, (const char *)packet, MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN, MAVLINK_MSG_ID_SETPOINT_6DOF_CRC);
#endif
}
#endif

#endif

// MESSAGE SETPOINT_6DOF UNPACKING


/**
 * @brief Get field trans_x from setpoint_6dof message
 *
 * @return Translational Component in x
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_trans_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field trans_y from setpoint_6dof message
 *
 * @return Translational Component in y
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_trans_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field trans_z from setpoint_6dof message
 *
 * @return Translational Component in z
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_trans_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field rot_x from setpoint_6dof message
 *
 * @return Rotational Component in x
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_rot_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field rot_y from setpoint_6dof message
 *
 * @return Rotational Component in y
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_rot_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field rot_z from setpoint_6dof message
 *
 * @return Rotational Component in z
 */
static inline int16_t mavlink_msg_setpoint_6dof_get_rot_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field timestamp from setpoint_6dof message
 *
 * @return QGC Timestamp 
 */
static inline uint32_t mavlink_msg_setpoint_6dof_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a setpoint_6dof message into a struct
 *
 * @param msg The message to decode
 * @param setpoint_6dof C-struct to decode the message contents into
 */
static inline void mavlink_msg_setpoint_6dof_decode(const mavlink_message_t* msg, mavlink_setpoint_6dof_t* setpoint_6dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	setpoint_6dof->timestamp = mavlink_msg_setpoint_6dof_get_timestamp(msg);
	setpoint_6dof->trans_x = mavlink_msg_setpoint_6dof_get_trans_x(msg);
	setpoint_6dof->trans_y = mavlink_msg_setpoint_6dof_get_trans_y(msg);
	setpoint_6dof->trans_z = mavlink_msg_setpoint_6dof_get_trans_z(msg);
	setpoint_6dof->rot_x = mavlink_msg_setpoint_6dof_get_rot_x(msg);
	setpoint_6dof->rot_y = mavlink_msg_setpoint_6dof_get_rot_y(msg);
	setpoint_6dof->rot_z = mavlink_msg_setpoint_6dof_get_rot_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SETPOINT_6DOF_LEN? msg->len : MAVLINK_MSG_ID_SETPOINT_6DOF_LEN;
        memset(setpoint_6dof, 0, MAVLINK_MSG_ID_SETPOINT_6DOF_LEN);
	memcpy(setpoint_6dof, _MAV_PAYLOAD(msg), len);
#endif
}
