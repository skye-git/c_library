/** @file
 *	@brief MAVLink comm protocol testsuite generated from skye.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef SKYE_TESTSUITE_H
#define SKYE_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_skye(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_skye(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_actuation_status_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ACTUATION_STATUS_ID >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_actuation_status_id_t packet_in = {
		5,72
    };
	mavlink_actuation_status_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.id = packet_in.id;
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ACTUATION_STATUS_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_id_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_actuation_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_id_pack(system_id, component_id, &msg , packet1.id , packet1.status );
	mavlink_msg_actuation_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.status );
	mavlink_msg_actuation_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_actuation_status_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_id_send(MAVLINK_COMM_1 , packet1.id , packet1.status );
	mavlink_msg_actuation_status_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_position_ctrl_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_position_ctrl_output_t packet_in = {
		17.0,45.0,73.0
    };
	mavlink_position_ctrl_output_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.F_x = packet_in.F_x;
        packet1.F_y = packet_in.F_y;
        packet1.F_z = packet_in.F_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_POSITION_CTRL_OUTPUT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_ctrl_output_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_position_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_ctrl_output_pack(system_id, component_id, &msg , packet1.F_x , packet1.F_y , packet1.F_z );
	mavlink_msg_position_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_ctrl_output_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.F_x , packet1.F_y , packet1.F_z );
	mavlink_msg_position_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_position_ctrl_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_ctrl_output_send(MAVLINK_COMM_1 , packet1.F_x , packet1.F_y , packet1.F_z );
	mavlink_msg_position_ctrl_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_attitude_ctrl_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_attitude_ctrl_output_t packet_in = {
		17.0,45.0,73.0
    };
	mavlink_attitude_ctrl_output_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.M_x = packet_in.M_x;
        packet1.M_y = packet_in.M_y;
        packet1.M_z = packet_in.M_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ATTITUDE_CTRL_OUTPUT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_ctrl_output_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_attitude_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_ctrl_output_pack(system_id, component_id, &msg , packet1.M_x , packet1.M_y , packet1.M_z );
	mavlink_msg_attitude_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_ctrl_output_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.M_x , packet1.M_y , packet1.M_z );
	mavlink_msg_attitude_ctrl_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_attitude_ctrl_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_ctrl_output_send(MAVLINK_COMM_1 , packet1.M_x , packet1.M_y , packet1.M_z );
	mavlink_msg_attitude_ctrl_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_allocation_output_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_allocation_output_id_t packet_in = {
		17.0,45.0,29
    };
	mavlink_allocation_output_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.angle = packet_in.angle;
        packet1.thrust = packet_in.thrust;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ALLOCATION_OUTPUT_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_id_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_allocation_output_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_id_pack(system_id, component_id, &msg , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_allocation_output_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_id_send(MAVLINK_COMM_1 , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_allocation_sensor_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_allocation_sensor_id_t packet_in = {
		93372036854775807ULL,73.0,101.0,53
    };
	mavlink_allocation_sensor_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.thrust = packet_in.thrust;
        packet1.angle = packet_in.angle;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ALLOCATION_SENSOR_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_sensor_id_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_allocation_sensor_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_sensor_id_pack(system_id, component_id, &msg , packet1.timestamp , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_allocation_sensor_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_sensor_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_allocation_sensor_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_allocation_sensor_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_sensor_id_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_allocation_sensor_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_battery_status_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BATTERY_STATUS_ID >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_battery_status_id_t packet_in = {
		963497464,963497672,{ 17651, 17652, 17653, 17654, 17655, 17656 },18275,199,10,77
    };
	mavlink_battery_status_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.current_consumed = packet_in.current_consumed;
        packet1.energy_consumed = packet_in.energy_consumed;
        packet1.current_battery = packet_in.current_battery;
        packet1.id = packet_in.id;
        packet1.battery_remaining = packet_in.battery_remaining;
        packet1.battery_status = packet_in.battery_status;
        
        mav_array_memcpy(packet1.voltages, packet_in.voltages, sizeof(uint16_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BATTERY_STATUS_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_status_id_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_battery_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_status_id_pack(system_id, component_id, &msg , packet1.id , packet1.voltages , packet1.current_battery , packet1.current_consumed , packet1.energy_consumed , packet1.battery_remaining , packet1.battery_status );
	mavlink_msg_battery_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_status_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.voltages , packet1.current_battery , packet1.current_consumed , packet1.energy_consumed , packet1.battery_remaining , packet1.battery_status );
	mavlink_msg_battery_status_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_battery_status_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_status_id_send(MAVLINK_COMM_1 , packet1.id , packet1.voltages , packet1.current_battery , packet1.current_consumed , packet1.energy_consumed , packet1.battery_remaining , packet1.battery_status );
	mavlink_msg_battery_status_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_led_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LED_CONTROL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_led_control_t packet_in = {
		17.0,17,84,151,218,29
    };
	mavlink_led_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.frequency = packet_in.frequency;
        packet1.led_id = packet_in.led_id;
        packet1.red = packet_in.red;
        packet1.green = packet_in.green;
        packet1.blue = packet_in.blue;
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LED_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LED_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_pack(system_id, component_id, &msg , packet1.led_id , packet1.red , packet1.green , packet1.blue , packet1.mode , packet1.frequency );
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.led_id , packet1.red , packet1.green , packet1.blue , packet1.mode , packet1.frequency );
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_led_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_send(MAVLINK_COMM_1 , packet1.led_id , packet1.red , packet1.green , packet1.blue , packet1.mode , packet1.frequency );
	mavlink_msg_led_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_setpoint_6dof(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SETPOINT_6DOF >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_setpoint_6dof_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,157.0,77
    };
	mavlink_setpoint_6dof_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.trans_x = packet_in.trans_x;
        packet1.trans_y = packet_in.trans_y;
        packet1.trans_z = packet_in.trans_z;
        packet1.rot_x = packet_in.rot_x;
        packet1.rot_y = packet_in.rot_y;
        packet1.rot_z = packet_in.rot_z;
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SETPOINT_6DOF_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_6dof_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_setpoint_6dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_6dof_pack(system_id, component_id, &msg , packet1.target_system , packet1.trans_x , packet1.trans_y , packet1.trans_z , packet1.rot_x , packet1.rot_y , packet1.rot_z );
	mavlink_msg_setpoint_6dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_6dof_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.trans_x , packet1.trans_y , packet1.trans_z , packet1.rot_x , packet1.rot_y , packet1.rot_z );
	mavlink_msg_setpoint_6dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_setpoint_6dof_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_6dof_send(MAVLINK_COMM_1 , packet1.target_system , packet1.trans_x , packet1.trans_y , packet1.trans_z , packet1.rot_x , packet1.rot_y , packet1.rot_z );
	mavlink_msg_setpoint_6dof_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_setpoint_2dof_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SETPOINT_2DOF_ID >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_setpoint_2dof_id_t packet_in = {
		17.0,45.0,29
    };
	mavlink_setpoint_2dof_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.angle = packet_in.angle;
        packet1.thrust = packet_in.thrust;
        packet1.id = packet_in.id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SETPOINT_2DOF_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SETPOINT_2DOF_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_2dof_id_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_setpoint_2dof_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_2dof_id_pack(system_id, component_id, &msg , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_setpoint_2dof_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_2dof_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_setpoint_2dof_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_setpoint_2dof_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_2dof_id_send(MAVLINK_COMM_1 , packet1.id , packet1.angle , packet1.thrust );
	mavlink_msg_setpoint_2dof_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_attitude_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ATTITUDE_HIL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_attitude_hil_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,{ 241.0, 242.0, 243.0, 244.0 }
    };
	mavlink_attitude_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.yaw = packet_in.yaw;
        packet1.rollspeed = packet_in.rollspeed;
        packet1.pitchspeed = packet_in.pitchspeed;
        packet1.yawspeed = packet_in.yawspeed;
        
        mav_array_memcpy(packet1.q, packet_in.q, sizeof(float)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ATTITUDE_HIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ATTITUDE_HIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_hil_pack(system_id, component_id, &msg , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_attitude_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_hil_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_attitude_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_position_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_POSITION_HIL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_position_hil_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0
    };
	mavlink_position_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_POSITION_HIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_hil_pack(system_id, component_id, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_position_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_position_hil_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_position_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_debug_vec3(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DEBUG_VEC3 >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_debug_vec3_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0
    };
	mavlink_debug_vec3_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DEBUG_VEC3_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DEBUG_VEC3_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_debug_vec3_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_debug_vec3_pack(system_id, component_id, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_debug_vec3_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_debug_vec3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_debug_vec3_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_debug_vec3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_accelerometers_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ACCELEROMETERS_HIL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_accelerometers_hil_t packet_in = {
		17.0,45.0,73.0
    };
	mavlink_accelerometers_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ACCELEROMETERS_HIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accelerometers_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_accelerometers_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accelerometers_hil_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z );
	mavlink_msg_accelerometers_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accelerometers_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z );
	mavlink_msg_accelerometers_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_accelerometers_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accelerometers_hil_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z );
	mavlink_msg_accelerometers_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gyroscopes_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GYROSCOPES_HIL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_gyroscopes_hil_t packet_in = {
		17.0,45.0,73.0
    };
	mavlink_gyroscopes_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GYROSCOPES_HIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GYROSCOPES_HIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gyroscopes_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_gyroscopes_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gyroscopes_hil_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z );
	mavlink_msg_gyroscopes_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gyroscopes_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z );
	mavlink_msg_gyroscopes_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_gyroscopes_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gyroscopes_hil_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z );
	mavlink_msg_gyroscopes_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_uwb_sensor_raw_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_uwb_sensor_raw_hil_t packet_in = {
		17.0,17,84
    };
	mavlink_uwb_sensor_raw_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dist_raw = packet_in.dist_raw;
        packet1.tag_id = packet_in.tag_id;
        packet1.anchor_id = packet_in.anchor_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_UWB_SENSOR_RAW_HIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_sensor_raw_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_uwb_sensor_raw_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_sensor_raw_hil_pack(system_id, component_id, &msg , packet1.tag_id , packet1.anchor_id , packet1.dist_raw );
	mavlink_msg_uwb_sensor_raw_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_sensor_raw_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.tag_id , packet1.anchor_id , packet1.dist_raw );
	mavlink_msg_uwb_sensor_raw_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_uwb_sensor_raw_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_sensor_raw_hil_send(MAVLINK_COMM_1 , packet1.tag_id , packet1.anchor_id , packet1.dist_raw );
	mavlink_msg_uwb_sensor_raw_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_actuation_status_id(system_id, component_id, last_msg);
	mavlink_test_position_ctrl_output(system_id, component_id, last_msg);
	mavlink_test_attitude_ctrl_output(system_id, component_id, last_msg);
	mavlink_test_allocation_output_id(system_id, component_id, last_msg);
	mavlink_test_allocation_sensor_id(system_id, component_id, last_msg);
	mavlink_test_battery_status_id(system_id, component_id, last_msg);
	mavlink_test_led_control(system_id, component_id, last_msg);
	mavlink_test_setpoint_6dof(system_id, component_id, last_msg);
	mavlink_test_setpoint_2dof_id(system_id, component_id, last_msg);
	mavlink_test_attitude_hil(system_id, component_id, last_msg);
	mavlink_test_position_hil(system_id, component_id, last_msg);
	mavlink_test_debug_vec3(system_id, component_id, last_msg);
	mavlink_test_accelerometers_hil(system_id, component_id, last_msg);
	mavlink_test_gyroscopes_hil(system_id, component_id, last_msg);
	mavlink_test_uwb_sensor_raw_hil(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SKYE_TESTSUITE_H
