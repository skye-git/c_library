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


static void mavlink_test_actuator_limits(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_actuator_limits_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0 },{ 241.0, 242.0, 243.0, 244.0, 245.0, 246.0 },{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0 },{ 577.0, 578.0, 579.0, 580.0, 581.0, 582.0 },{ 745.0, 746.0, 747.0, 748.0, 749.0, 750.0 },{ 133, 134, 135, 136, 137, 138 }
    };
	mavlink_actuator_limits_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        
        	mav_array_memcpy(packet1.th_min, packet_in.th_min, sizeof(float)*6);
        	mav_array_memcpy(packet1.th_start, packet_in.th_start, sizeof(float)*6);
        	mav_array_memcpy(packet1.th_max, packet_in.th_max, sizeof(float)*6);
        	mav_array_memcpy(packet1.ang_min, packet_in.ang_min, sizeof(float)*6);
        	mav_array_memcpy(packet1.ang_max, packet_in.ang_max, sizeof(float)*6);
        	mav_array_memcpy(packet1.valid, packet_in.valid, sizeof(uint8_t)*6);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuator_limits_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_actuator_limits_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuator_limits_pack(system_id, component_id, &msg , packet1.timestamp , packet1.valid , packet1.th_min , packet1.th_start , packet1.th_max , packet1.ang_min , packet1.ang_max );
	mavlink_msg_actuator_limits_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuator_limits_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.valid , packet1.th_min , packet1.th_start , packet1.th_max , packet1.ang_min , packet1.ang_max );
	mavlink_msg_actuator_limits_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_actuator_limits_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuator_limits_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.valid , packet1.th_min , packet1.th_start , packet1.th_max , packet1.ang_min , packet1.ang_max );
	mavlink_msg_actuator_limits_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_actuation_configuration(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_actuation_configuration_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0 },{ 129.0, 130.0, 131.0, 132.0 },{ 241.0, 242.0, 243.0, 244.0 },{ 353.0, 354.0, 355.0, 356.0 },{ 465.0, 466.0, 467.0, 468.0 },{ 577.0, 578.0, 579.0, 580.0 }
    };
	mavlink_actuation_configuration_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.quat_au1, packet_in.quat_au1, sizeof(float)*4);
        	mav_array_memcpy(packet1.quat_au2, packet_in.quat_au2, sizeof(float)*4);
        	mav_array_memcpy(packet1.quat_au3, packet_in.quat_au3, sizeof(float)*4);
        	mav_array_memcpy(packet1.quat_au4, packet_in.quat_au4, sizeof(float)*4);
        	mav_array_memcpy(packet1.quat_au5, packet_in.quat_au5, sizeof(float)*4);
        	mav_array_memcpy(packet1.quat_au6, packet_in.quat_au6, sizeof(float)*4);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_configuration_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_actuation_configuration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_configuration_pack(system_id, component_id, &msg , packet1.quat_au1 , packet1.quat_au2 , packet1.quat_au3 , packet1.quat_au4 , packet1.quat_au5 , packet1.quat_au6 );
	mavlink_msg_actuation_configuration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_configuration_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.quat_au1 , packet1.quat_au2 , packet1.quat_au3 , packet1.quat_au4 , packet1.quat_au5 , packet1.quat_au6 );
	mavlink_msg_actuation_configuration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_actuation_configuration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_configuration_send(MAVLINK_COMM_1 , packet1.quat_au1 , packet1.quat_au2 , packet1.quat_au3 , packet1.quat_au4 , packet1.quat_au5 , packet1.quat_au6 );
	mavlink_msg_actuation_configuration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_actuation_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_actuation_status_t packet_in = {
		5,72
    };
	mavlink_actuation_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.au_id = packet_in.au_id;
        	packet1.status = packet_in.status;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_actuation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_pack(system_id, component_id, &msg , packet1.au_id , packet1.status );
	mavlink_msg_actuation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.au_id , packet1.status );
	mavlink_msg_actuation_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_actuation_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_status_send(MAVLINK_COMM_1 , packet1.au_id , packet1.status );
	mavlink_msg_actuation_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_position_ctrl_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
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

static void mavlink_test_allocation_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_allocation_output_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0 },{ 185.0, 186.0, 187.0, 188.0, 189.0, 190.0 }
    };
	mavlink_allocation_output_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*6);
        	mav_array_memcpy(packet1.thrust, packet_in.thrust, sizeof(float)*6);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_allocation_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_pack(system_id, component_id, &msg , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_allocation_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_allocation_output_send(MAVLINK_COMM_1 , packet1.angle , packet1.thrust );
	mavlink_msg_allocation_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_actuation_feedback(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_actuation_feedback_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0 },{ 241.0, 242.0, 243.0, 244.0, 245.0, 246.0 }
    };
	mavlink_actuation_feedback_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        
        	mav_array_memcpy(packet1.thrust, packet_in.thrust, sizeof(float)*6);
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*6);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_feedback_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_actuation_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_feedback_pack(system_id, component_id, &msg , packet1.timestamp , packet1.thrust , packet1.angle );
	mavlink_msg_actuation_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.thrust , packet1.angle );
	mavlink_msg_actuation_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_actuation_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_actuation_feedback_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.thrust , packet1.angle );
	mavlink_msg_actuation_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye_feedback_combined(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_skye_feedback_combined_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0 },{ 157.0, 158.0, 159.0 },{ 241.0, 242.0, 243.0 },{ 325.0, 326.0, 327.0 },{ 409.0, 410.0, 411.0, 412.0 },{ 521.0, 522.0, 523.0, 524.0, 525.0, 526.0 },{ 689.0, 690.0, 691.0, 692.0, 693.0, 694.0 }
    };
	mavlink_skye_feedback_combined_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        
        	mav_array_memcpy(packet1.omega_raw, packet_in.omega_raw, sizeof(float)*3);
        	mav_array_memcpy(packet1.accel_raw, packet_in.accel_raw, sizeof(float)*3);
        	mav_array_memcpy(packet1.alpha_ekf, packet_in.alpha_ekf, sizeof(float)*3);
        	mav_array_memcpy(packet1.omega_ekf, packet_in.omega_ekf, sizeof(float)*3);
        	mav_array_memcpy(packet1.quat_ekf, packet_in.quat_ekf, sizeof(float)*4);
        	mav_array_memcpy(packet1.thrust, packet_in.thrust, sizeof(float)*6);
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*6);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_feedback_combined_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_skye_feedback_combined_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_feedback_combined_pack(system_id, component_id, &msg , packet1.timestamp , packet1.omega_raw , packet1.accel_raw , packet1.alpha_ekf , packet1.omega_ekf , packet1.quat_ekf , packet1.thrust , packet1.angle );
	mavlink_msg_skye_feedback_combined_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_feedback_combined_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.omega_raw , packet1.accel_raw , packet1.alpha_ekf , packet1.omega_ekf , packet1.quat_ekf , packet1.thrust , packet1.angle );
	mavlink_msg_skye_feedback_combined_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_skye_feedback_combined_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_feedback_combined_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.omega_raw , packet1.accel_raw , packet1.alpha_ekf , packet1.omega_ekf , packet1.quat_ekf , packet1.thrust , packet1.angle );
	mavlink_msg_skye_feedback_combined_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_range_sensor_raw(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_range_sensor_raw_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0 },77
    };
	mavlink_range_sensor_raw_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.sender_idx = packet_in.sender_idx;
        
        	mav_array_memcpy(packet1.dist_raw, packet_in.dist_raw, sizeof(float)*6);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_range_sensor_raw_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_range_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_range_sensor_raw_pack(system_id, component_id, &msg , packet1.sender_idx , packet1.dist_raw );
	mavlink_msg_range_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_range_sensor_raw_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sender_idx , packet1.dist_raw );
	mavlink_msg_range_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_range_sensor_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_range_sensor_raw_send(MAVLINK_COMM_1 , packet1.sender_idx , packet1.dist_raw );
	mavlink_msg_range_sensor_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_led_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
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

static void mavlink_test_setpoint_12dof(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_setpoint_12dof_t packet_in = {
		{ 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0 },149
    };
	mavlink_setpoint_12dof_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.target_system = packet_in.target_system;
        
        	mav_array_memcpy(packet1.values, packet_in.values, sizeof(float)*12);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_12dof_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_setpoint_12dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_12dof_pack(system_id, component_id, &msg , packet1.target_system , packet1.values );
	mavlink_msg_setpoint_12dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_12dof_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.values );
	mavlink_msg_setpoint_12dof_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_setpoint_12dof_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_setpoint_12dof_send(MAVLINK_COMM_1 , packet1.target_system , packet1.values );
	mavlink_msg_setpoint_12dof_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye_attitude_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_skye_attitude_hil_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,{ 241.0, 242.0, 243.0, 244.0 }
    };
	mavlink_skye_attitude_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        	packet1.yaw = packet_in.yaw;
        	packet1.rollspeed = packet_in.rollspeed;
        	packet1.pitchspeed = packet_in.pitchspeed;
        	packet1.yawspeed = packet_in.yawspeed;
        
        	mav_array_memcpy(packet1.q, packet_in.q, sizeof(float)*4);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_attitude_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_skye_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_attitude_hil_pack(system_id, component_id, &msg , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_skye_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_attitude_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_skye_attitude_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_skye_attitude_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_attitude_hil_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.q );
	mavlink_msg_skye_attitude_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye_position_hil(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_skye_position_hil_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0
    };
	mavlink_skye_position_hil_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        	packet1.x = packet_in.x;
        	packet1.y = packet_in.y;
        	packet1.z = packet_in.z;
        	packet1.vx = packet_in.vx;
        	packet1.vy = packet_in.vy;
        	packet1.vz = packet_in.vz;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_position_hil_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_skye_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_position_hil_pack(system_id, component_id, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_skye_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_position_hil_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_skye_position_hil_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_skye_position_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_position_hil_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
	mavlink_msg_skye_position_hil_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye_debug_vec3(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_skye_debug_vec3_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0
    };
	mavlink_skye_debug_vec3_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        	packet1.x = packet_in.x;
        	packet1.y = packet_in.y;
        	packet1.z = packet_in.z;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_debug_vec3_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_skye_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_debug_vec3_pack(system_id, component_id, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_skye_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_debug_vec3_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_skye_debug_vec3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_skye_debug_vec3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_debug_vec3_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.x , packet1.y , packet1.z );
	mavlink_msg_skye_debug_vec3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye_setpoint_au(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_skye_setpoint_au_t packet_in = {
		17.0,45.0,29
    };
	mavlink_skye_setpoint_au_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.thrust = packet_in.thrust;
        	packet1.angle = packet_in.angle;
        	packet1.id = packet_in.id;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_setpoint_au_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_skye_setpoint_au_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_setpoint_au_pack(system_id, component_id, &msg , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_skye_setpoint_au_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_setpoint_au_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_skye_setpoint_au_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_skye_setpoint_au_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_skye_setpoint_au_send(MAVLINK_COMM_1 , packet1.id , packet1.thrust , packet1.angle );
	mavlink_msg_skye_setpoint_au_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_skye(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_actuator_limits(system_id, component_id, last_msg);
	mavlink_test_actuation_configuration(system_id, component_id, last_msg);
	mavlink_test_actuation_status(system_id, component_id, last_msg);
	mavlink_test_position_ctrl_output(system_id, component_id, last_msg);
	mavlink_test_attitude_ctrl_output(system_id, component_id, last_msg);
	mavlink_test_allocation_output(system_id, component_id, last_msg);
	mavlink_test_actuation_feedback(system_id, component_id, last_msg);
	mavlink_test_skye_feedback_combined(system_id, component_id, last_msg);
	mavlink_test_range_sensor_raw(system_id, component_id, last_msg);
	mavlink_test_led_control(system_id, component_id, last_msg);
	mavlink_test_setpoint_6dof(system_id, component_id, last_msg);
	mavlink_test_setpoint_12dof(system_id, component_id, last_msg);
	mavlink_test_skye_attitude_hil(system_id, component_id, last_msg);
	mavlink_test_skye_position_hil(system_id, component_id, last_msg);
	mavlink_test_skye_debug_vec3(system_id, component_id, last_msg);
	mavlink_test_skye_setpoint_au(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SKYE_TESTSUITE_H
