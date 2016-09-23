// MESSAGE ACTUATION_STATUS_ID PACKING

#define MAVLINK_MSG_ID_ACTUATION_STATUS_ID 202

MAVPACKED(
typedef struct __mavlink_actuation_status_id_t {
 uint8_t id; /*< Actuation Unit ID*/
 int8_t status; /*< -1: unknown, 0: detached:, 1: init, 2: homing, 3: ready, 4: disabled, 5: error*/
}) mavlink_actuation_status_id_t;

#define MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN 2
#define MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN 2
#define MAVLINK_MSG_ID_202_LEN 2
#define MAVLINK_MSG_ID_202_MIN_LEN 2

#define MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC 127
#define MAVLINK_MSG_ID_202_CRC 127



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATION_STATUS_ID { \
	202, \
	"ACTUATION_STATUS_ID", \
	2, \
	{  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuation_status_id_t, id) }, \
         { "status", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_actuation_status_id_t, status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATION_STATUS_ID { \
	"ACTUATION_STATUS_ID", \
	2, \
	{  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuation_status_id_t, id) }, \
         { "status", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_actuation_status_id_t, status) }, \
         } \
}
#endif

/**
 * @brief Pack a actuation_status_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id Actuation Unit ID
 * @param status -1: unknown, 0: detached:, 1: init, 2: homing, 3: ready, 4: disabled, 5: error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuation_status_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, int8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN];
	_mav_put_uint8_t(buf, 0, id);
	_mav_put_int8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN);
#else
	mavlink_actuation_status_id_t packet;
	packet.id = id;
	packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACTUATION_STATUS_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
}

/**
 * @brief Pack a actuation_status_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id Actuation Unit ID
 * @param status -1: unknown, 0: detached:, 1: init, 2: homing, 3: ready, 4: disabled, 5: error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuation_status_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,int8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN];
	_mav_put_uint8_t(buf, 0, id);
	_mav_put_int8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN);
#else
	mavlink_actuation_status_id_t packet;
	packet.id = id;
	packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACTUATION_STATUS_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
}

/**
 * @brief Encode a actuation_status_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuation_status_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuation_status_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuation_status_id_t* actuation_status_id)
{
	return mavlink_msg_actuation_status_id_pack(system_id, component_id, msg, actuation_status_id->id, actuation_status_id->status);
}

/**
 * @brief Encode a actuation_status_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuation_status_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuation_status_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuation_status_id_t* actuation_status_id)
{
	return mavlink_msg_actuation_status_id_pack_chan(system_id, component_id, chan, msg, actuation_status_id->id, actuation_status_id->status);
}

/**
 * @brief Send a actuation_status_id message
 * @param chan MAVLink channel to send the message
 *
 * @param id Actuation Unit ID
 * @param status -1: unknown, 0: detached:, 1: init, 2: homing, 3: ready, 4: disabled, 5: error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuation_status_id_send(mavlink_channel_t chan, uint8_t id, int8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN];
	_mav_put_uint8_t(buf, 0, id);
	_mav_put_int8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID, buf, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
#else
	mavlink_actuation_status_id_t packet;
	packet.id = id;
	packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID, (const char *)&packet, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
#endif
}

/**
 * @brief Send a actuation_status_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuation_status_id_send_struct(mavlink_channel_t chan, const mavlink_actuation_status_id_t* actuation_status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuation_status_id_send(chan, actuation_status_id->id, actuation_status_id->status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID, (const char *)actuation_status_id, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuation_status_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, int8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, id);
	_mav_put_int8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID, buf, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
#else
	mavlink_actuation_status_id_t *packet = (mavlink_actuation_status_id_t *)msgbuf;
	packet->id = id;
	packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATION_STATUS_ID, (const char *)packet, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATION_STATUS_ID UNPACKING


/**
 * @brief Get field id from actuation_status_id message
 *
 * @return Actuation Unit ID
 */
static inline uint8_t mavlink_msg_actuation_status_id_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field status from actuation_status_id message
 *
 * @return -1: unknown, 0: detached:, 1: init, 2: homing, 3: ready, 4: disabled, 5: error
 */
static inline int8_t mavlink_msg_actuation_status_id_get_status(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a actuation_status_id message into a struct
 *
 * @param msg The message to decode
 * @param actuation_status_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuation_status_id_decode(const mavlink_message_t* msg, mavlink_actuation_status_id_t* actuation_status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	actuation_status_id->id = mavlink_msg_actuation_status_id_get_id(msg);
	actuation_status_id->status = mavlink_msg_actuation_status_id_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN? msg->len : MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN;
        memset(actuation_status_id, 0, MAVLINK_MSG_ID_ACTUATION_STATUS_ID_LEN);
	memcpy(actuation_status_id, _MAV_PAYLOAD(msg), len);
#endif
}
