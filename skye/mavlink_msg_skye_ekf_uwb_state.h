// MESSAGE SKYE_EKF_UWB_STATE PACKING

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE 216

MAVPACKED(
typedef struct __mavlink_skye_ekf_uwb_state_t {
 float position[3]; /*< Estimated position of the blimp center in the NED (intertial) frame (m)*/
 float velocity[3]; /*< Estimated velocity of the blimp center in the NED (intertial) frame (m/s)*/
 float angular_velocity[3]; /*< Estimated angular velocity of the blimp in the body frame (rad/s)*/
 float orientation[3]; /*< Estimated orientation the blimp in the NED (inertial) frame, expressed as Euler's angles (rad)*/
 float external_force[3]; /*< Estimated external force applied on the the blimp in the body frame (N)*/
 float external_torque[3]; /*< Estimated external torque applied on the the blimp in the body frame (N.m)*/
 float accelerometer_bias[3]; /*< Estimated accelerometer bias in the body frame (m/s^2)*/
 uint8_t outlier_rejection_mode; /*< Outlier rejection mode. 0: model-based, 1: signal-based*/
 uint8_t state_valid; /*< Estimated validity of the state. 1: valid, 0: invalid*/
}) mavlink_skye_ekf_uwb_state_t;

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN 86
#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN 86
#define MAVLINK_MSG_ID_216_LEN 86
#define MAVLINK_MSG_ID_216_MIN_LEN 86

#define MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC 131
#define MAVLINK_MSG_ID_216_CRC 131

#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_POSITION_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_VELOCITY_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_ANGULAR_VELOCITY_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_ORIENTATION_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_EXTERNAL_FORCE_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_EXTERNAL_TORQUE_LEN 3
#define MAVLINK_MSG_SKYE_EKF_UWB_STATE_FIELD_ACCELEROMETER_BIAS_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SKYE_EKF_UWB_STATE { \
	216, \
	"SKYE_EKF_UWB_STATE", \
	9, \
	{  { "position", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_skye_ekf_uwb_state_t, position) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_skye_ekf_uwb_state_t, velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_skye_ekf_uwb_state_t, angular_velocity) }, \
         { "orientation", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_skye_ekf_uwb_state_t, orientation) }, \
         { "external_force", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_skye_ekf_uwb_state_t, external_force) }, \
         { "external_torque", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_skye_ekf_uwb_state_t, external_torque) }, \
         { "accelerometer_bias", NULL, MAVLINK_TYPE_FLOAT, 3, 72, offsetof(mavlink_skye_ekf_uwb_state_t, accelerometer_bias) }, \
         { "outlier_rejection_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_skye_ekf_uwb_state_t, outlier_rejection_mode) }, \
         { "state_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 85, offsetof(mavlink_skye_ekf_uwb_state_t, state_valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SKYE_EKF_UWB_STATE { \
	"SKYE_EKF_UWB_STATE", \
	9, \
	{  { "position", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_skye_ekf_uwb_state_t, position) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_skye_ekf_uwb_state_t, velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_skye_ekf_uwb_state_t, angular_velocity) }, \
         { "orientation", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_skye_ekf_uwb_state_t, orientation) }, \
         { "external_force", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_skye_ekf_uwb_state_t, external_force) }, \
         { "external_torque", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_skye_ekf_uwb_state_t, external_torque) }, \
         { "accelerometer_bias", NULL, MAVLINK_TYPE_FLOAT, 3, 72, offsetof(mavlink_skye_ekf_uwb_state_t, accelerometer_bias) }, \
         { "outlier_rejection_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_skye_ekf_uwb_state_t, outlier_rejection_mode) }, \
         { "state_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 85, offsetof(mavlink_skye_ekf_uwb_state_t, state_valid) }, \
         } \
}
#endif

/**
 * @brief Pack a skye_ekf_uwb_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param position Estimated position of the blimp center in the NED (intertial) frame (m)
 * @param velocity Estimated velocity of the blimp center in the NED (intertial) frame (m/s)
 * @param angular_velocity Estimated angular velocity of the blimp in the body frame (rad/s)
 * @param orientation Estimated orientation the blimp in the NED (inertial) frame, expressed as Euler's angles (rad)
 * @param external_force Estimated external force applied on the the blimp in the body frame (N)
 * @param external_torque Estimated external torque applied on the the blimp in the body frame (N.m)
 * @param accelerometer_bias Estimated accelerometer bias in the body frame (m/s^2)
 * @param outlier_rejection_mode Outlier rejection mode. 0: model-based, 1: signal-based
 * @param state_valid Estimated validity of the state. 1: valid, 0: invalid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias, uint8_t outlier_rejection_mode, uint8_t state_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN];
	_mav_put_uint8_t(buf, 84, outlier_rejection_mode);
	_mav_put_uint8_t(buf, 85, state_valid);
	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN);
#else
	mavlink_skye_ekf_uwb_state_t packet;
	packet.outlier_rejection_mode = outlier_rejection_mode;
	packet.state_valid = state_valid;
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
}

/**
 * @brief Pack a skye_ekf_uwb_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param position Estimated position of the blimp center in the NED (intertial) frame (m)
 * @param velocity Estimated velocity of the blimp center in the NED (intertial) frame (m/s)
 * @param angular_velocity Estimated angular velocity of the blimp in the body frame (rad/s)
 * @param orientation Estimated orientation the blimp in the NED (inertial) frame, expressed as Euler's angles (rad)
 * @param external_force Estimated external force applied on the the blimp in the body frame (N)
 * @param external_torque Estimated external torque applied on the the blimp in the body frame (N.m)
 * @param accelerometer_bias Estimated accelerometer bias in the body frame (m/s^2)
 * @param outlier_rejection_mode Outlier rejection mode. 0: model-based, 1: signal-based
 * @param state_valid Estimated validity of the state. 1: valid, 0: invalid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *position,const float *velocity,const float *angular_velocity,const float *orientation,const float *external_force,const float *external_torque,const float *accelerometer_bias,uint8_t outlier_rejection_mode,uint8_t state_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN];
	_mav_put_uint8_t(buf, 84, outlier_rejection_mode);
	_mav_put_uint8_t(buf, 85, state_valid);
	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN);
#else
	mavlink_skye_ekf_uwb_state_t packet;
	packet.outlier_rejection_mode = outlier_rejection_mode;
	packet.state_valid = state_valid;
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
}

/**
 * @brief Encode a skye_ekf_uwb_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param skye_ekf_uwb_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_skye_ekf_uwb_state_t* skye_ekf_uwb_state)
{
	return mavlink_msg_skye_ekf_uwb_state_pack(system_id, component_id, msg, skye_ekf_uwb_state->position, skye_ekf_uwb_state->velocity, skye_ekf_uwb_state->angular_velocity, skye_ekf_uwb_state->orientation, skye_ekf_uwb_state->external_force, skye_ekf_uwb_state->external_torque, skye_ekf_uwb_state->accelerometer_bias, skye_ekf_uwb_state->outlier_rejection_mode, skye_ekf_uwb_state->state_valid);
}

/**
 * @brief Encode a skye_ekf_uwb_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param skye_ekf_uwb_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_skye_ekf_uwb_state_t* skye_ekf_uwb_state)
{
	return mavlink_msg_skye_ekf_uwb_state_pack_chan(system_id, component_id, chan, msg, skye_ekf_uwb_state->position, skye_ekf_uwb_state->velocity, skye_ekf_uwb_state->angular_velocity, skye_ekf_uwb_state->orientation, skye_ekf_uwb_state->external_force, skye_ekf_uwb_state->external_torque, skye_ekf_uwb_state->accelerometer_bias, skye_ekf_uwb_state->outlier_rejection_mode, skye_ekf_uwb_state->state_valid);
}

/**
 * @brief Send a skye_ekf_uwb_state message
 * @param chan MAVLink channel to send the message
 *
 * @param position Estimated position of the blimp center in the NED (intertial) frame (m)
 * @param velocity Estimated velocity of the blimp center in the NED (intertial) frame (m/s)
 * @param angular_velocity Estimated angular velocity of the blimp in the body frame (rad/s)
 * @param orientation Estimated orientation the blimp in the NED (inertial) frame, expressed as Euler's angles (rad)
 * @param external_force Estimated external force applied on the the blimp in the body frame (N)
 * @param external_torque Estimated external torque applied on the the blimp in the body frame (N.m)
 * @param accelerometer_bias Estimated accelerometer bias in the body frame (m/s^2)
 * @param outlier_rejection_mode Outlier rejection mode. 0: model-based, 1: signal-based
 * @param state_valid Estimated validity of the state. 1: valid, 0: invalid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_skye_ekf_uwb_state_send(mavlink_channel_t chan, const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias, uint8_t outlier_rejection_mode, uint8_t state_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN];
	_mav_put_uint8_t(buf, 84, outlier_rejection_mode);
	_mav_put_uint8_t(buf, 85, state_valid);
	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE, buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
#else
	mavlink_skye_ekf_uwb_state_t packet;
	packet.outlier_rejection_mode = outlier_rejection_mode;
	packet.state_valid = state_valid;
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet.angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet.orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet.external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet.external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet.accelerometer_bias, accelerometer_bias, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE, (const char *)&packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
#endif
}

/**
 * @brief Send a skye_ekf_uwb_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_skye_ekf_uwb_state_send_struct(mavlink_channel_t chan, const mavlink_skye_ekf_uwb_state_t* skye_ekf_uwb_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_skye_ekf_uwb_state_send(chan, skye_ekf_uwb_state->position, skye_ekf_uwb_state->velocity, skye_ekf_uwb_state->angular_velocity, skye_ekf_uwb_state->orientation, skye_ekf_uwb_state->external_force, skye_ekf_uwb_state->external_torque, skye_ekf_uwb_state->accelerometer_bias, skye_ekf_uwb_state->outlier_rejection_mode, skye_ekf_uwb_state->state_valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE, (const char *)skye_ekf_uwb_state, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_skye_ekf_uwb_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *position, const float *velocity, const float *angular_velocity, const float *orientation, const float *external_force, const float *external_torque, const float *accelerometer_bias, uint8_t outlier_rejection_mode, uint8_t state_valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 84, outlier_rejection_mode);
	_mav_put_uint8_t(buf, 85, state_valid);
	_mav_put_float_array(buf, 0, position, 3);
	_mav_put_float_array(buf, 12, velocity, 3);
	_mav_put_float_array(buf, 24, angular_velocity, 3);
	_mav_put_float_array(buf, 36, orientation, 3);
	_mav_put_float_array(buf, 48, external_force, 3);
	_mav_put_float_array(buf, 60, external_torque, 3);
	_mav_put_float_array(buf, 72, accelerometer_bias, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE, buf, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
#else
	mavlink_skye_ekf_uwb_state_t *packet = (mavlink_skye_ekf_uwb_state_t *)msgbuf;
	packet->outlier_rejection_mode = outlier_rejection_mode;
	packet->state_valid = state_valid;
	mav_array_memcpy(packet->position, position, sizeof(float)*3);
	mav_array_memcpy(packet->velocity, velocity, sizeof(float)*3);
	mav_array_memcpy(packet->angular_velocity, angular_velocity, sizeof(float)*3);
	mav_array_memcpy(packet->orientation, orientation, sizeof(float)*3);
	mav_array_memcpy(packet->external_force, external_force, sizeof(float)*3);
	mav_array_memcpy(packet->external_torque, external_torque, sizeof(float)*3);
	mav_array_memcpy(packet->accelerometer_bias, accelerometer_bias, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE, (const char *)packet, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_MIN_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE SKYE_EKF_UWB_STATE UNPACKING


/**
 * @brief Get field position from skye_ekf_uwb_state message
 *
 * @return Estimated position of the blimp center in the NED (intertial) frame (m)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_position(const mavlink_message_t* msg, float *position)
{
	return _MAV_RETURN_float_array(msg, position, 3,  0);
}

/**
 * @brief Get field velocity from skye_ekf_uwb_state message
 *
 * @return Estimated velocity of the blimp center in the NED (intertial) frame (m/s)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_velocity(const mavlink_message_t* msg, float *velocity)
{
	return _MAV_RETURN_float_array(msg, velocity, 3,  12);
}

/**
 * @brief Get field angular_velocity from skye_ekf_uwb_state message
 *
 * @return Estimated angular velocity of the blimp in the body frame (rad/s)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_angular_velocity(const mavlink_message_t* msg, float *angular_velocity)
{
	return _MAV_RETURN_float_array(msg, angular_velocity, 3,  24);
}

/**
 * @brief Get field orientation from skye_ekf_uwb_state message
 *
 * @return Estimated orientation the blimp in the NED (inertial) frame, expressed as Euler's angles (rad)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_orientation(const mavlink_message_t* msg, float *orientation)
{
	return _MAV_RETURN_float_array(msg, orientation, 3,  36);
}

/**
 * @brief Get field external_force from skye_ekf_uwb_state message
 *
 * @return Estimated external force applied on the the blimp in the body frame (N)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_external_force(const mavlink_message_t* msg, float *external_force)
{
	return _MAV_RETURN_float_array(msg, external_force, 3,  48);
}

/**
 * @brief Get field external_torque from skye_ekf_uwb_state message
 *
 * @return Estimated external torque applied on the the blimp in the body frame (N.m)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_external_torque(const mavlink_message_t* msg, float *external_torque)
{
	return _MAV_RETURN_float_array(msg, external_torque, 3,  60);
}

/**
 * @brief Get field accelerometer_bias from skye_ekf_uwb_state message
 *
 * @return Estimated accelerometer bias in the body frame (m/s^2)
 */
static inline uint16_t mavlink_msg_skye_ekf_uwb_state_get_accelerometer_bias(const mavlink_message_t* msg, float *accelerometer_bias)
{
	return _MAV_RETURN_float_array(msg, accelerometer_bias, 3,  72);
}

/**
 * @brief Get field outlier_rejection_mode from skye_ekf_uwb_state message
 *
 * @return Outlier rejection mode. 0: model-based, 1: signal-based
 */
static inline uint8_t mavlink_msg_skye_ekf_uwb_state_get_outlier_rejection_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  84);
}

/**
 * @brief Get field state_valid from skye_ekf_uwb_state message
 *
 * @return Estimated validity of the state. 1: valid, 0: invalid
 */
static inline uint8_t mavlink_msg_skye_ekf_uwb_state_get_state_valid(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  85);
}

/**
 * @brief Decode a skye_ekf_uwb_state message into a struct
 *
 * @param msg The message to decode
 * @param skye_ekf_uwb_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_skye_ekf_uwb_state_decode(const mavlink_message_t* msg, mavlink_skye_ekf_uwb_state_t* skye_ekf_uwb_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_skye_ekf_uwb_state_get_position(msg, skye_ekf_uwb_state->position);
	mavlink_msg_skye_ekf_uwb_state_get_velocity(msg, skye_ekf_uwb_state->velocity);
	mavlink_msg_skye_ekf_uwb_state_get_angular_velocity(msg, skye_ekf_uwb_state->angular_velocity);
	mavlink_msg_skye_ekf_uwb_state_get_orientation(msg, skye_ekf_uwb_state->orientation);
	mavlink_msg_skye_ekf_uwb_state_get_external_force(msg, skye_ekf_uwb_state->external_force);
	mavlink_msg_skye_ekf_uwb_state_get_external_torque(msg, skye_ekf_uwb_state->external_torque);
	mavlink_msg_skye_ekf_uwb_state_get_accelerometer_bias(msg, skye_ekf_uwb_state->accelerometer_bias);
	skye_ekf_uwb_state->outlier_rejection_mode = mavlink_msg_skye_ekf_uwb_state_get_outlier_rejection_mode(msg);
	skye_ekf_uwb_state->state_valid = mavlink_msg_skye_ekf_uwb_state_get_state_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN? msg->len : MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN;
        memset(skye_ekf_uwb_state, 0, MAVLINK_MSG_ID_SKYE_EKF_UWB_STATE_LEN);
	memcpy(skye_ekf_uwb_state, _MAV_PAYLOAD(msg), len);
#endif
}
