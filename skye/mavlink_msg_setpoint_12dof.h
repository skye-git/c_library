// MESSAGE SETPOINT_12DOF PACKING

#define MAVLINK_MSG_ID_SETPOINT_12DOF 222

MAVPACKED(
typedef struct __mavlink_setpoint_12dof_t {
 float values[12]; /*< Input vector*/
 uint8_t target_system; /*< System ID*/
}) mavlink_setpoint_12dof_t;

#define MAVLINK_MSG_ID_SETPOINT_12DOF_LEN 49
#define MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN 49
#define MAVLINK_MSG_ID_222_LEN 49
#define MAVLINK_MSG_ID_222_MIN_LEN 49

#define MAVLINK_MSG_ID_SETPOINT_12DOF_CRC 209
#define MAVLINK_MSG_ID_222_CRC 209

#define MAVLINK_MSG_SETPOINT_12DOF_FIELD_VALUES_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SETPOINT_12DOF { \
	222, \
	"SETPOINT_12DOF", \
	2, \
	{  { "values", NULL, MAVLINK_TYPE_FLOAT, 12, 0, offsetof(mavlink_setpoint_12dof_t, values) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_setpoint_12dof_t, target_system) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SETPOINT_12DOF { \
	"SETPOINT_12DOF", \
	2, \
	{  { "values", NULL, MAVLINK_TYPE_FLOAT, 12, 0, offsetof(mavlink_setpoint_12dof_t, values) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_setpoint_12dof_t, target_system) }, \
         } \
}
#endif

/**
 * @brief Pack a setpoint_12dof message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param values Input vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_setpoint_12dof_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, const float *values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_12DOF_LEN];
	_mav_put_uint8_t(buf, 48, target_system);
	_mav_put_float_array(buf, 0, values, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN);
#else
	mavlink_setpoint_12dof_t packet;
	packet.target_system = target_system;
	mav_array_memcpy(packet.values, values, sizeof(float)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SETPOINT_12DOF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
}

/**
 * @brief Pack a setpoint_12dof message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param values Input vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_setpoint_12dof_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,const float *values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_12DOF_LEN];
	_mav_put_uint8_t(buf, 48, target_system);
	_mav_put_float_array(buf, 0, values, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN);
#else
	mavlink_setpoint_12dof_t packet;
	packet.target_system = target_system;
	mav_array_memcpy(packet.values, values, sizeof(float)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SETPOINT_12DOF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
}

/**
 * @brief Encode a setpoint_12dof struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param setpoint_12dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_setpoint_12dof_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_setpoint_12dof_t* setpoint_12dof)
{
	return mavlink_msg_setpoint_12dof_pack(system_id, component_id, msg, setpoint_12dof->target_system, setpoint_12dof->values);
}

/**
 * @brief Encode a setpoint_12dof struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param setpoint_12dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_setpoint_12dof_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_setpoint_12dof_t* setpoint_12dof)
{
	return mavlink_msg_setpoint_12dof_pack_chan(system_id, component_id, chan, msg, setpoint_12dof->target_system, setpoint_12dof->values);
}

/**
 * @brief Send a setpoint_12dof message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param values Input vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_setpoint_12dof_send(mavlink_channel_t chan, uint8_t target_system, const float *values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SETPOINT_12DOF_LEN];
	_mav_put_uint8_t(buf, 48, target_system);
	_mav_put_float_array(buf, 0, values, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_12DOF, buf, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
#else
	mavlink_setpoint_12dof_t packet;
	packet.target_system = target_system;
	mav_array_memcpy(packet.values, values, sizeof(float)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_12DOF, (const char *)&packet, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
#endif
}

/**
 * @brief Send a setpoint_12dof message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_setpoint_12dof_send_struct(mavlink_channel_t chan, const mavlink_setpoint_12dof_t* setpoint_12dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_setpoint_12dof_send(chan, setpoint_12dof->target_system, setpoint_12dof->values);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_12DOF, (const char *)setpoint_12dof, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
#endif
}

#if MAVLINK_MSG_ID_SETPOINT_12DOF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_setpoint_12dof_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, const float *values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 48, target_system);
	_mav_put_float_array(buf, 0, values, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_12DOF, buf, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
#else
	mavlink_setpoint_12dof_t *packet = (mavlink_setpoint_12dof_t *)msgbuf;
	packet->target_system = target_system;
	mav_array_memcpy(packet->values, values, sizeof(float)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SETPOINT_12DOF, (const char *)packet, MAVLINK_MSG_ID_SETPOINT_12DOF_MIN_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN, MAVLINK_MSG_ID_SETPOINT_12DOF_CRC);
#endif
}
#endif

#endif

// MESSAGE SETPOINT_12DOF UNPACKING


/**
 * @brief Get field target_system from setpoint_12dof message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_setpoint_12dof_get_target_system(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field values from setpoint_12dof message
 *
 * @return Input vector
 */
static inline uint16_t mavlink_msg_setpoint_12dof_get_values(const mavlink_message_t* msg, float *values)
{
	return _MAV_RETURN_float_array(msg, values, 12,  0);
}

/**
 * @brief Decode a setpoint_12dof message into a struct
 *
 * @param msg The message to decode
 * @param setpoint_12dof C-struct to decode the message contents into
 */
static inline void mavlink_msg_setpoint_12dof_decode(const mavlink_message_t* msg, mavlink_setpoint_12dof_t* setpoint_12dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_setpoint_12dof_get_values(msg, setpoint_12dof->values);
	setpoint_12dof->target_system = mavlink_msg_setpoint_12dof_get_target_system(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SETPOINT_12DOF_LEN? msg->len : MAVLINK_MSG_ID_SETPOINT_12DOF_LEN;
        memset(setpoint_12dof, 0, MAVLINK_MSG_ID_SETPOINT_12DOF_LEN);
	memcpy(setpoint_12dof, _MAV_PAYLOAD(msg), len);
#endif
}
