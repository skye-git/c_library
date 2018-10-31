// MESSAGE POZYX_DISTANCE_DATA PACKING

#define MAVLINK_MSG_ID_POZYX_DISTANCE_DATA 201

MAVPACKED(
typedef struct __mavlink_pozyx_distance_data_t {
 float distances[8]; /*< Distances of the beacons to the tag*/
 uint8_t id; /*< Tag ID*/
 uint8_t num_beacons; /*< number of beacons active*/
}) mavlink_pozyx_distance_data_t;

#define MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN 34
#define MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN 34
#define MAVLINK_MSG_ID_201_LEN 34
#define MAVLINK_MSG_ID_201_MIN_LEN 34

#define MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC 104
#define MAVLINK_MSG_ID_201_CRC 104

#define MAVLINK_MSG_POZYX_DISTANCE_DATA_FIELD_DISTANCES_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POZYX_DISTANCE_DATA { \
	201, \
	"POZYX_DISTANCE_DATA", \
	3, \
	{  { "distances", NULL, MAVLINK_TYPE_FLOAT, 8, 0, offsetof(mavlink_pozyx_distance_data_t, distances) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_pozyx_distance_data_t, id) }, \
         { "num_beacons", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_pozyx_distance_data_t, num_beacons) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POZYX_DISTANCE_DATA { \
	"POZYX_DISTANCE_DATA", \
	3, \
	{  { "distances", NULL, MAVLINK_TYPE_FLOAT, 8, 0, offsetof(mavlink_pozyx_distance_data_t, distances) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_pozyx_distance_data_t, id) }, \
         { "num_beacons", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_pozyx_distance_data_t, num_beacons) }, \
         } \
}
#endif

/**
 * @brief Pack a pozyx_distance_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id Tag ID
 * @param num_beacons number of beacons active
 * @param distances Distances of the beacons to the tag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pozyx_distance_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, uint8_t num_beacons, const float *distances)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN];
	_mav_put_uint8_t(buf, 32, id);
	_mav_put_uint8_t(buf, 33, num_beacons);
	_mav_put_float_array(buf, 0, distances, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN);
#else
	mavlink_pozyx_distance_data_t packet;
	packet.id = id;
	packet.num_beacons = num_beacons;
	mav_array_memcpy(packet.distances, distances, sizeof(float)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POZYX_DISTANCE_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
}

/**
 * @brief Pack a pozyx_distance_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id Tag ID
 * @param num_beacons number of beacons active
 * @param distances Distances of the beacons to the tag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pozyx_distance_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,uint8_t num_beacons,const float *distances)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN];
	_mav_put_uint8_t(buf, 32, id);
	_mav_put_uint8_t(buf, 33, num_beacons);
	_mav_put_float_array(buf, 0, distances, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN);
#else
	mavlink_pozyx_distance_data_t packet;
	packet.id = id;
	packet.num_beacons = num_beacons;
	mav_array_memcpy(packet.distances, distances, sizeof(float)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POZYX_DISTANCE_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
}

/**
 * @brief Encode a pozyx_distance_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pozyx_distance_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pozyx_distance_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pozyx_distance_data_t* pozyx_distance_data)
{
	return mavlink_msg_pozyx_distance_data_pack(system_id, component_id, msg, pozyx_distance_data->id, pozyx_distance_data->num_beacons, pozyx_distance_data->distances);
}

/**
 * @brief Encode a pozyx_distance_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pozyx_distance_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pozyx_distance_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pozyx_distance_data_t* pozyx_distance_data)
{
	return mavlink_msg_pozyx_distance_data_pack_chan(system_id, component_id, chan, msg, pozyx_distance_data->id, pozyx_distance_data->num_beacons, pozyx_distance_data->distances);
}

/**
 * @brief Send a pozyx_distance_data message
 * @param chan MAVLink channel to send the message
 *
 * @param id Tag ID
 * @param num_beacons number of beacons active
 * @param distances Distances of the beacons to the tag
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pozyx_distance_data_send(mavlink_channel_t chan, uint8_t id, uint8_t num_beacons, const float *distances)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN];
	_mav_put_uint8_t(buf, 32, id);
	_mav_put_uint8_t(buf, 33, num_beacons);
	_mav_put_float_array(buf, 0, distances, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA, buf, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
#else
	mavlink_pozyx_distance_data_t packet;
	packet.id = id;
	packet.num_beacons = num_beacons;
	mav_array_memcpy(packet.distances, distances, sizeof(float)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA, (const char *)&packet, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
#endif
}

/**
 * @brief Send a pozyx_distance_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pozyx_distance_data_send_struct(mavlink_channel_t chan, const mavlink_pozyx_distance_data_t* pozyx_distance_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pozyx_distance_data_send(chan, pozyx_distance_data->id, pozyx_distance_data->num_beacons, pozyx_distance_data->distances);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA, (const char *)pozyx_distance_data, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pozyx_distance_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, uint8_t num_beacons, const float *distances)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 32, id);
	_mav_put_uint8_t(buf, 33, num_beacons);
	_mav_put_float_array(buf, 0, distances, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA, buf, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
#else
	mavlink_pozyx_distance_data_t *packet = (mavlink_pozyx_distance_data_t *)msgbuf;
	packet->id = id;
	packet->num_beacons = num_beacons;
	mav_array_memcpy(packet->distances, distances, sizeof(float)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA, (const char *)packet, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_MIN_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE POZYX_DISTANCE_DATA UNPACKING


/**
 * @brief Get field id from pozyx_distance_data message
 *
 * @return Tag ID
 */
static inline uint8_t mavlink_msg_pozyx_distance_data_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field num_beacons from pozyx_distance_data message
 *
 * @return number of beacons active
 */
static inline uint8_t mavlink_msg_pozyx_distance_data_get_num_beacons(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field distances from pozyx_distance_data message
 *
 * @return Distances of the beacons to the tag
 */
static inline uint16_t mavlink_msg_pozyx_distance_data_get_distances(const mavlink_message_t* msg, float *distances)
{
	return _MAV_RETURN_float_array(msg, distances, 8,  0);
}

/**
 * @brief Decode a pozyx_distance_data message into a struct
 *
 * @param msg The message to decode
 * @param pozyx_distance_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_pozyx_distance_data_decode(const mavlink_message_t* msg, mavlink_pozyx_distance_data_t* pozyx_distance_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_pozyx_distance_data_get_distances(msg, pozyx_distance_data->distances);
	pozyx_distance_data->id = mavlink_msg_pozyx_distance_data_get_id(msg);
	pozyx_distance_data->num_beacons = mavlink_msg_pozyx_distance_data_get_num_beacons(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN? msg->len : MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN;
        memset(pozyx_distance_data, 0, MAVLINK_MSG_ID_POZYX_DISTANCE_DATA_LEN);
	memcpy(pozyx_distance_data, _MAV_PAYLOAD(msg), len);
#endif
}
