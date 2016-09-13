// MESSAGE ALLOCATION_OUTPUT_ID PACKING

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID 212

MAVPACKED(
typedef struct __mavlink_allocation_output_id_t {
 float angle; /*< Orientation motor setpoint of the AU [deg]*/
 float thrust; /*< Thrust motor setpoint of the AU [N]*/
 uint8_t id; /*< Actuation Unit ID*/
}) mavlink_allocation_output_id_t;

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN 9
#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN 9
#define MAVLINK_MSG_ID_212_LEN 9
#define MAVLINK_MSG_ID_212_MIN_LEN 9

#define MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC 169
#define MAVLINK_MSG_ID_212_CRC 169



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ALLOCATION_OUTPUT_ID { \
	212, \
	"ALLOCATION_OUTPUT_ID", \
	3, \
	{  { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_allocation_output_id_t, angle) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_allocation_output_id_t, thrust) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_allocation_output_id_t, id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ALLOCATION_OUTPUT_ID { \
	"ALLOCATION_OUTPUT_ID", \
	3, \
	{  { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_allocation_output_id_t, angle) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_allocation_output_id_t, thrust) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_allocation_output_id_t, id) }, \
         } \
}
#endif

/**
 * @brief Pack a allocation_output_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id Actuation Unit ID
 * @param angle Orientation motor setpoint of the AU [deg]
 * @param thrust Thrust motor setpoint of the AU [N]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, float angle, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_float(buf, 4, thrust);
	_mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN);
#else
	mavlink_allocation_output_id_t packet;
	packet.angle = angle;
	packet.thrust = thrust;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
}

/**
 * @brief Pack a allocation_output_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id Actuation Unit ID
 * @param angle Orientation motor setpoint of the AU [deg]
 * @param thrust Thrust motor setpoint of the AU [N]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_allocation_output_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,float angle,float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_float(buf, 4, thrust);
	_mav_put_uint8_t(buf, 8, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN);
#else
	mavlink_allocation_output_id_t packet;
	packet.angle = angle;
	packet.thrust = thrust;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
}

/**
 * @brief Encode a allocation_output_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_allocation_output_id_t* allocation_output_id)
{
	return mavlink_msg_allocation_output_id_pack(system_id, component_id, msg, allocation_output_id->id, allocation_output_id->angle, allocation_output_id->thrust);
}

/**
 * @brief Encode a allocation_output_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param allocation_output_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_allocation_output_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_allocation_output_id_t* allocation_output_id)
{
	return mavlink_msg_allocation_output_id_pack_chan(system_id, component_id, chan, msg, allocation_output_id->id, allocation_output_id->angle, allocation_output_id->thrust);
}

/**
 * @brief Send a allocation_output_id message
 * @param chan MAVLink channel to send the message
 *
 * @param id Actuation Unit ID
 * @param angle Orientation motor setpoint of the AU [deg]
 * @param thrust Thrust motor setpoint of the AU [N]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_allocation_output_id_send(mavlink_channel_t chan, uint8_t id, float angle, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_float(buf, 4, thrust);
	_mav_put_uint8_t(buf, 8, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
#else
	mavlink_allocation_output_id_t packet;
	packet.angle = angle;
	packet.thrust = thrust;
	packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID, (const char *)&packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
#endif
}

/**
 * @brief Send a allocation_output_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_allocation_output_id_send_struct(mavlink_channel_t chan, const mavlink_allocation_output_id_t* allocation_output_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_allocation_output_id_send(chan, allocation_output_id->id, allocation_output_id->angle, allocation_output_id->thrust);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID, (const char *)allocation_output_id, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_allocation_output_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, float angle, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, angle);
	_mav_put_float(buf, 4, thrust);
	_mav_put_uint8_t(buf, 8, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID, buf, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
#else
	mavlink_allocation_output_id_t *packet = (mavlink_allocation_output_id_t *)msgbuf;
	packet->angle = angle;
	packet->thrust = thrust;
	packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID, (const char *)packet, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE ALLOCATION_OUTPUT_ID UNPACKING


/**
 * @brief Get field id from allocation_output_id message
 *
 * @return Actuation Unit ID
 */
static inline uint8_t mavlink_msg_allocation_output_id_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field angle from allocation_output_id message
 *
 * @return Orientation motor setpoint of the AU [deg]
 */
static inline float mavlink_msg_allocation_output_id_get_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field thrust from allocation_output_id message
 *
 * @return Thrust motor setpoint of the AU [N]
 */
static inline float mavlink_msg_allocation_output_id_get_thrust(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a allocation_output_id message into a struct
 *
 * @param msg The message to decode
 * @param allocation_output_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_allocation_output_id_decode(const mavlink_message_t* msg, mavlink_allocation_output_id_t* allocation_output_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	allocation_output_id->angle = mavlink_msg_allocation_output_id_get_angle(msg);
	allocation_output_id->thrust = mavlink_msg_allocation_output_id_get_thrust(msg);
	allocation_output_id->id = mavlink_msg_allocation_output_id_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN? msg->len : MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN;
        memset(allocation_output_id, 0, MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_LEN);
	memcpy(allocation_output_id, _MAV_PAYLOAD(msg), len);
#endif
}
