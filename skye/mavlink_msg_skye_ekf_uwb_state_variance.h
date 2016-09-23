// MESSAGE SKYE_EKF_UWB_STATE_VARIANCE PACKING

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE 217

MAVPACKED(
typedef struct __mavlink_skye_ekf_uwb_state_variance_t {
 float position[3]; /*< Variance of the estimated position of the blimp center in the NED (intertial) frame (m^2)*/
 float velocity[3]; /*< Variance of the estimated velocity of the blimp center in the NED (intertial) frame (m^2/s^2)*/
 float angular_velocity[3]; /*< Variance of the estimated angular velocity of the blimp in the body frame (rad^2/s^2)*/
 float orientation[3]; /*< Variance of the estimated orientation error of the blimp in the NED (inertial) frame, expressed as delta (rad^2)*/
 float external_force[3]; /*< Variance of the estimated external force applied on the the blimp in the body frame (N^2)*/
 float external_torque[3]; /*< Variance of the estimated external torque applied on the the blimp in the body frame (N^2.m^2)*/
 float accelerometer_bias[3]; /*< Variance of the estimated accelerometer bias in the body frame (m^2/s^4)*/
}) mavlink_skye_ekf_uwb_state_variance_t;

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN 84
#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN 84
#define MAVLINK_MSG_ID_217_LEN 84
#define MAVLINK_MSG_ID_217_MIN_LEN 84

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC 106
#define MAVLINK_MSG_ID_217_CRC 106

#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_POSITION_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_VELOCITY_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_ANGULAR_VELOCITY_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_ORIENTATION_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_EXTERNAL_FORCE_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_EXTERNAL_TORQUE_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_VARIANCE_FIELD_ACCELEROMETER_BIAS_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SKYE_EKF_UWB_STATE_VARIANCE { \
	217, \
	"SKYE_EKF_UWB_STATE_VARIANCE", \
	7, \
	{  { "position", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_skye_ekf_uwb_state_variance_t, position) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_skye_ekf_uwb_state_variance_t, velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_skye_ekf_uwb_state_variance_t, angular_velocity) }, \
         { "orientation", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_skye_ekf_uwb_state_variance_t, orientation) }, \
         { "external_force", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_skye_ekf_uwb_state_variance_t, external_force) }, \
         { "external_torque", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_skye_ekf_uwb_state_variance_t, external_torque) }, \
         { "accelerometer_bias", NULL, MAVLINK_TYPE_FLOAT, 3, 72, offsetof(mavlink_skye_ekf_uwb_state_variance_t, accelerometer_bias) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SKYE_EKF_UWB_STATE_VARIANCE { \
	"SKYE_EKF_UWB_STATE_VARIANCE", \
	7, \
	{  { "position", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_skye_ekf_uwb_state_variance_t, position) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_skye_ekf_uwb_state_variance_t, velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_skye_ekf_uwb_state_variance_t, angular_velocity) }, \
         { "orientation", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_skye_ekf_uwb_state_variance_t, orientation) }, \
         { "external_force", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_skye_ekf_uwb_state_variance_t, external_force) }, \
         { "external_torque", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_skye_ekf_uwb_state_variance_t, external_torque) }, \
         { "accelerometer_bias", NULL, MAVLINK_TYPE_FLOAT, 3, 72, offsetof(mavlink_skye_ekf_uwb_state_variance_t, accelerometer_bias) }, \
         } \
}
#endif

/**
 * @brief Pack a skye_ekf_uwb_state_variance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param position Variance of the estimated position of the blimp center in the NED (intertial) frame (m^2)
 * @param velocity Variance of the estimated velocity of the blimp center in the NED (intertial) frame (m^2/s^2)
 * @param angular_velocity Variance of the estimated angular velocity of the blimp in the body frame (rad^2/s^2)
 * @param orientation Variance of the estimated orientation error of the blimp in the NED (inertial) frame, expressed as delta (rad^2)
 * @param external_force Variance of the estimated external force applied on the the blimp in the body frame (N^2)
 * @param external_torque Variance of the estimated external torque applied on the the blimp in the body frame (N^2.m^2)
 * @param accelerometer_bias Variance of the estimated accelerometer bias in the body frame (m^2/s^4)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN];

	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN);
#else
	mavlink_skye_ekf_uwb_state_variance_t packet;

	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
}

/**
 * @brief Pack a skye_ekf_uwb_state_variance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param position Variance of the estimated position of the blimp center in the NED (intertial) frame (m^2)
 * @param velocity Variance of the estimated velocity of the blimp center in the NED (intertial) frame (m^2/s^2)
 * @param angular_velocity Variance of the estimated angular velocity of the blimp in the body frame (rad^2/s^2)
 * @param orientation Variance of the estimated orientation error of the blimp in the NED (inertial) frame, expressed as delta (rad^2)
 * @param external_force Variance of the estimated external force applied on the the blimp in the body frame (N^2)
 * @param external_torque Variance of the estimated external torque applied on the the blimp in the body frame (N^2.m^2)
 * @param accelerometer_bias Variance of the estimated accelerometer bias in the body frame (m^2/s^4)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *position,const float *velocity,const float *angular_velocity,const float *orientation,const float *external_force,const float *external_torque,const float *accelerometer_bias)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN];

	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN);
#else
	mavlink_skye_ekf_uwb_state_variance_t packet;

	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
}

/**
 * @brief Encode a skye_ekf_uwb_state_variance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param skye_ekf_uwb_state_variance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_skye_ekf_uwb_state_variance_t* skye_ekf_uwb_state_variance)
{
	return mavlink_msg_skye_ekf_uwb_state_variance_pack(system_id, component_id, msg, skye_ekf_uwb_state_variance->position, skye_ekf_uwb_state_variance->velocity, skye_ekf_uwb_state_variance->angular_velocity, skye_ekf_uwb_state_variance->orientation, skye_ekf_uwb_state_variance->external_force, skye_ekf_uwb_state_variance->external_torque, skye_ekf_uwb_state_variance->accelerometer_bias);
}

/**
 * @brief Encode a skye_ekf_uwb_state_variance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param skye_ekf_uwb_state_variance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_skye_ekf_uwb_state_variance_t* skye_ekf_uwb_state_variance)
{
	return mavlink_msg_skye_ekf_uwb_state_variance_pack_chan(system_id, component_id, chan, msg, skye_ekf_uwb_state_variance->position, skye_ekf_uwb_state_variance->velocity, skye_ekf_uwb_state_variance->angular_velocity, skye_ekf_uwb_state_variance->orientation, skye_ekf_uwb_state_variance->external_force, skye_ekf_uwb_state_variance->external_torque, skye_ekf_uwb_state_variance->accelerometer_bias);
}

/**
 * @brief Send a skye_ekf_uwb_state_variance message
 * @param chan MAVLink channel to send the message
 *
 * @param position Variance of the estimated position of the blimp center in the NED (intertial) frame (m^2)
 * @param velocity Variance of the estimated velocity of the blimp center in the NED (intertial) frame (m^2/s^2)
 * @param angular_velocity Variance of the estimated angular velocity of the blimp in the body frame (rad^2/s^2)
 * @param orientation Variance of the estimated orientation error of the blimp in the NED (inertial) frame, expressed as delta (rad^2)
 * @param external_force Variance of the estimated external force applied on the the blimp in the body frame (N^2)
 * @param external_torque Variance of the estimated external torque applied on the the blimp in the body frame (N^2.m^2)
 * @param accelerometer_bias Variance of the estimated accelerometer bias in the body frame (m^2/s^4)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_skye_ekf_uwb_state_variance_send(mavlink_channel_t chan, const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN];

	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE, buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
#else
	mavlink_skye_ekf_uwb_state_variance_t packet;

	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE, (const char *)&packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
#endif
}

/**
 * @brief Send a skye_ekf_uwb_state_variance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_skye_ekf_uwb_state_variance_send_struct(mavlink_channel_t chan, const mavlink_skye_ekf_uwb_state_variance_t* skye_ekf_uwb_state_variance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_skye_ekf_uwb_state_variance_send(chan, skye_ekf_uwb_state_variance->position, skye_ekf_uwb_state_variance->velocity, skye_ekf_uwb_state_variance->angular_velocity, skye_ekf_uwb_state_variance->orientation, skye_ekf_uwb_state_variance->external_force, skye_ekf_uwb_state_variance->external_torque, skye_ekf_uwb_state_variance->accelerometer_bias);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE, (const char *)skye_ekf_uwb_state_variance, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_skye_ekf_uwb_state_variance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE, buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
#else
	mavlink_skye_ekf_uwb_state_variance_t *packet = (mavlink_skye_ekf_uwb_state_variance_t *)msgbuf;

	mav_array_memcpy(packet->position, position, sizeof(float)*3);
	mav_array_memcpy(packet->velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet->angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet->orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet->external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet->external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet->accelerometer_bias, accelerometer_bias, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE, (const char *)packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE SKYE_EKF_UWB_STATE_VARIANCE UNPACKING


/**
 * @brief Get field position from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated position of the blimp center in the NED (intertial) frame (m^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_position(const mavlink_message_t* msg, float *position)
{
	return _MAV_RETURN_float_array(msg, position, 3,  0);
}

/**
 * @brief Get field velocity from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated velocity of the blimp center in the NED (intertial) frame (m^2/s^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_velocity(const mavlink_message_t* msg, float *velocity)
{
	return _MAV_RETURN_float_array(msg, velocity, 3,  12);
}

/**
 * @brief Get field angular_velocity from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated angular velocity of the blimp in the body frame (rad^2/s^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_angular_velocity(const mavlink_message_t* msg, float *angular_velocity)
{
	return _MAV_RETURN_float_array(msg, angular_velocity, 3,  24);
}

/**
 * @brief Get field orientation from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated orientation error of the blimp in the NED (inertial) frame, expressed as delta (rad^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_orientation(const mavlink_message_t* msg, float *orientation)
{
	return _MAV_RETURN_float_array(msg, orientation, 3,  36);
}

/**
 * @brief Get field external_force from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated external force applied on the the blimp in the body frame (N^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_external_force(const mavlink_message_t* msg, float *external_force)
{
	return _MAV_RETURN_float_array(msg, external_force, 3,  48);
}

/**
 * @brief Get field external_torque from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated external torque applied on the the blimp in the body frame (N^2.m^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_external_torque(const mavlink_message_t* msg, float *external_torque)
{
	return _MAV_RETURN_float_array(msg, external_torque, 3,  60);
}

/**
 * @brief Get field accelerometer_bias from skye_ekf_uwb_state_variance message
 *
 * @return Variance of the estimated accelerometer bias in the body frame (m^2/s^4)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_variance_get_accelerometer_bias(const mavlink_message_t* msg, float *accelerometer_bias)
{
	return _MAV_RETURN_float_array(msg, accelerometer_bias, 3,  72);
}

/**
 * @brief Decode a skye_ekf_uwb_state_variance message into a struct
 *
 * @param msg The message to decode
 * @param skye_ekf_uwb_state_variance C-struct to decode the message contents into
 */
static inline void mavlink_msg_skye_ekf_uwb_state_variance_decode(const mavlink_message_t* msg, mavlink_skye_ekf_uwb_state_variance_t* skye_ekf_uwb_state_variance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_skye_ekf_uwb_state_variance_get_position(msg, skye_ekf_uwb_state_variance->position);
	mavlink_msg_skye_ekf_uwb_state_variance_get_velocity(msg, skye_ekf_uwb_state_variance->velocity);
	mavlink_msg_skye_ekf_uwb_state_variance_get_angular_velocity(msg, skye_ekf_uwb_state_variance->angular_velocity);
	mavlink_msg_skye_ekf_uwb_state_variance_get_orientation(msg, skye_ekf_uwb_state_variance->orientation);
	mavlink_msg_skye_ekf_uwb_state_variance_get_external_force(msg, skye_ekf_uwb_state_variance->external_force);
	mavlink_msg_skye_ekf_uwb_state_variance_get_external_torque(msg, skye_ekf_uwb_state_variance->external_torque);
	mavlink_msg_skye_ekf_uwb_state_variance_get_accelerometer_bias(msg, skye_ekf_uwb_state_variance->accelerometer_bias);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN? msg->len : MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN;
        memset(skye_ekf_uwb_state_variance, 0, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_VARIANCE_LEN);
	memcpy(skye_ekf_uwb_state_variance, _MAV_PAYLOAD(msg), len);
#endif
}
