// MESSAGE ALLOCATION_OUTPUT PACKING

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT 212

typedef struct __mavlink_allocation_output_t
{
 float angle[6]; /*< Orientation motor setpoint of AUs [deg]*/
 float thrust[6]; /*< Thrust motor setpoint of AUs [N]*/
 float angle_valid[6]; /*< Indicates if angle field is valid*/
 float thrust_valid[6]; /*< Indicate if thrust field is valid*/
} mavlink_allocation_output_t;

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN 96
#define MAVLINK_MSG_ID_212_LEN 96

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC 67
#define MAVLINK_MSG_ID_212_CRC 67

#define MAVLINK_MSG_ALLOCATION_OUTPUT_FIELD_ANGLE_LEN 6
#define MAVLINK_MSG_ALLOCATION_OUTPUT_FIELD_THRUST_LEN 6
#define MAVLINK_MSG_ALLOCATION_OUTPUT_FIELD_ANGLE_VALID_LEN 6
#define MAVLINK_MSG_ALLOCATION_OUTPUT_FIELD_THRUST_VALID_LEN 6

#define MAVLINK_MESSAGE_INFO_ALLOCATION_OUTPUT { \
	"ALLOCATION_OUTPUT", \
	4, \
	{  { "angle", NULL, MAVLINK_TYPE_FLOAT, 6, 0, offsetof(mavlink_allocation_output_t, angle) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 6, 24, offsetof(mavlink_allocation_output_t, thrust) }, \
         { "angle_valid", NULL, MAVLINK_TYPE_FLOAT, 6, 48, offsetof(mavlink_allocation_output_t, angle_valid) }, \
         { "thrust_valid", NULL, MAVLINK_TYPE_FLOAT, 6, 72, offsetof(mavlink_allocation_output_t, thrust_valid) }, \
         } \
}


/**
 * @brief Pack a allocation_output message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param angle Orientation motor setpoint of AUs [deg]
 * @param thrust Thrust motor setpoint of AUs [N]
 * @param angle_valid Indicates if angle field is valid
 * @param thrust_valid Indicate if thrust field is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *angle, const float *thrust, const float *angle_valid, const float *thrust_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN];

	_mav_put_float_array(buf, 0, angle, 6);
	_mav_put_float_array(buf, 24, thrust, 6);
	_mav_put_float_array(buf, 48, angle_valid, 6);
	_mav_put_float_array(buf, 72, thrust_valid, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#else
	mavlink_allocation_output_t packet;

	mav_array_memcpy(packet.angle, angle, sizeof(float)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(float)*6);
	mav_array_memcpy(packet.angle_valid, angle_valid, sizeof(float)*6);
	mav_array_memcpy(packet.thrust_valid, thrust_valid, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
}

/**
 * @brief Pack a allocation_output message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param angle Orientation motor setpoint of AUs [deg]
 * @param thrust Thrust motor setpoint of AUs [N]
 * @param angle_valid Indicates if angle field is valid
 * @param thrust_valid Indicate if thrust field is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *angle,const float *thrust,const float *angle_valid,const float *thrust_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN];

	_mav_put_float_array(buf, 0, angle, 6);
	_mav_put_float_array(buf, 24, thrust, 6);
	_mav_put_float_array(buf, 48, angle_valid, 6);
	_mav_put_float_array(buf, 72, thrust_valid, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#else
	mavlink_allocation_output_t packet;

	mav_array_memcpy(packet.angle, angle, sizeof(float)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(float)*6);
	mav_array_memcpy(packet.angle_valid, angle_valid, sizeof(float)*6);
	mav_array_memcpy(packet.thrust_valid, thrust_valid, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
}

/**
 * @brief Encode a allocation_output struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_allocation_output_t* allocation_output)
{
	return mavlink_msg_allocation_output_pack(system_id, component_id, msg, allocation_output->angle, allocation_output->thrust, allocation_output->angle_valid, allocation_output->thrust_valid);
}

/**
 * @brief Encode a allocation_output struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_allocation_output_t* allocation_output)
{
	return mavlink_msg_allocation_output_pack_chan(system_id, component_id, chan, msg, allocation_output->angle, allocation_output->thrust, allocation_output->angle_valid, allocation_output->thrust_valid);
}

/**
 * @brief Send a allocation_output message
 * @param chan MAVLink channel to send the message
 *
 * @param angle Orientation motor setpoint of AUs [deg]
 * @param thrust Thrust motor setpoint of AUs [N]
 * @param angle_valid Indicates if angle field is valid
 * @param thrust_valid Indicate if thrust field is valid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_allocation_output_send(mavlink_channel_t chan, const float *angle, const float *thrust, const float *angle_valid, const float *thrust_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN];

	_mav_put_float_array(buf, 0, angle, 6);
	_mav_put_float_array(buf, 24, thrust, 6);
	_mav_put_float_array(buf, 48, angle_valid, 6);
	_mav_put_float_array(buf, 72, thrust_valid, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
#else
	mavlink_allocation_output_t packet;

	mav_array_memcpy(packet.angle, angle, sizeof(float)*6);
	mav_array_memcpy(packet.thrust, thrust, sizeof(float)*6);
	mav_array_memcpy(packet.angle_valid, angle_valid, sizeof(float)*6);
	mav_array_memcpy(packet.thrust_valid, thrust_valid, sizeof(float)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_allocation_output_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *angle, const float *thrust, const float *angle_valid, const float *thrust_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_float_array(buf, 0, angle, 6);
	_mav_put_float_array(buf, 24, thrust, 6);
	_mav_put_float_array(buf, 48, angle_valid, 6);
	_mav_put_float_array(buf, 72, thrust_valid, 6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
#else
	mavlink_allocation_output_t *packet = (mavlink_allocation_output_t *)msgbuf;

	mav_array_memcpy(packet->angle, angle, sizeof(float)*6);
	mav_array_memcpy(packet->thrust, thrust, sizeof(float)*6);
	mav_array_memcpy(packet->angle_valid, angle_valid, sizeof(float)*6);
	mav_array_memcpy(packet->thrust_valid, thrust_valid, sizeof(float)*6);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ALLOCATION_OUTPUT UNPACKING


/**
 * @brief Get field angle from allocation_output message
 *
 * @return Orientation motor setpoint of AUs [deg]
 */
static inline uint16_t mavlink_msg_allocation_output_get_angle(const mavlink_message_t* msg, float *angle)
{
	return _MAV_RETURN_float_array(msg, angle, 6,  0);
}

/**
 * @brief Get field thrust from allocation_output message
 *
 * @return Thrust motor setpoint of AUs [N]
 */
static inline uint16_t mavlink_msg_allocation_output_get_thrust(const mavlink_message_t* msg, float *thrust)
{
	return _MAV_RETURN_float_array(msg, thrust, 6,  24);
}

/**
 * @brief Get field angle_valid from allocation_output message
 *
 * @return Indicates if angle field is valid
 */
static inline uint16_t mavlink_msg_allocation_output_get_angle_valid(const mavlink_message_t* msg, float *angle_valid)
{
	return _MAV_RETURN_float_array(msg, angle_valid, 6,  48);
}

/**
 * @brief Get field thrust_valid from allocation_output message
 *
 * @return Indicate if thrust field is valid
 */
static inline uint16_t mavlink_msg_allocation_output_get_thrust_valid(const mavlink_message_t* msg, float *thrust_valid)
{
	return _MAV_RETURN_float_array(msg, thrust_valid, 6,  72);
}

/**
 * @brief Decode a allocation_output message into a struct
 *
 * @param msg The message to decode
 * @param allocation_output C-struct to decode the message contents into
 */
static inline void mavlink_msg_allocation_output_decode(const mavlink_message_t* msg, mavlink_allocation_output_t* allocation_output)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_allocation_output_get_angle(msg, allocation_output->angle);
	mavlink_msg_allocation_output_get_thrust(msg, allocation_output->thrust);
	mavlink_msg_allocation_output_get_angle_valid(msg, allocation_output->angle_valid);
	mavlink_msg_allocation_output_get_thrust_valid(msg, allocation_output->thrust_valid);
#else
	memcpy(allocation_output, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ALLOCATION_OUTPUT_LEN);
#endif
}
