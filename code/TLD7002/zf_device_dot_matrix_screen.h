/*********************************************************************************************************************
* TC264 Opensourec Library ����TC264 ��Դ�⣩��һ�����ڹٷ� SDK �ӿڵĵ�������Դ��
* Copyright (c) 2022 SEEKFREE ��ɿƼ�
*
* ���ļ��� TC264 ��Դ���һ����
*
* TC264 ��Դ�� ��������
* �����Ը��������������ᷢ���� GPL��GNU General Public License���� GNUͨ�ù������֤��������
* �� GPL �ĵ�3�棨�� GPL3.0������ѡ��ģ��κκ����İ汾�����·�����/���޸���
*
* ����Դ��ķ�����ϣ�����ܷ������ã�����δ�������κεı�֤
* ����û�������������Ի��ʺ��ض���;�ı�֤
* ����ϸ����μ� GPL
*
* ��Ӧ�����յ�����Դ���ͬʱ�յ�һ�� GPL �ĸ���
* ���û�У������<https://www.gnu.org/licenses/>
*
* ����ע����
* ����Դ��ʹ�� GPL3.0 ��Դ���֤Э�� �����������Ϊ���İ汾
* �������Ӣ�İ��� libraries/doc �ļ����µ� GPL3_permission_statement.txt �ļ���
* ���֤������ libraries �ļ����� �����ļ����µ� LICENSE �ļ�
* ��ӭ��λʹ�ò����������� ���޸�����ʱ���뱣����ɿƼ��İ�Ȩ����������������
*
* �ļ�����          zf_device_dot_matrix_screen
* ��˾����          �ɶ���ɿƼ����޹�˾
* �汾��Ϣ          �鿴 libraries/doc �ļ����� version �ļ� �汾˵��
* ��������          ADS v1.9.12
* ����ƽ̨          TC264D
* ��������          https://seekfree.taobao.com/
*
* �޸ļ�¼
* ����              ����                ��ע
* 2024-01-22       Seekfree            first version
********************************************************************************************************************/
/********************************************************************************************************************
* ���߶��壺
*                  ------------------------------------
*                  TLD7002����ģ��      ��Ƭ���ܽ�
*                  SR0                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR0_PIN�궨��
*                  SR1                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR1_PIN�궨��
*                  SR2                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR2_PIN�궨��
*                  SR3                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR3_PIN�궨��
*                  SR4                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR4_PIN�궨��
*                  SR5                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR5_PIN�궨��
*                  SR6                 �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SR6_PIN�궨��
*                  SYNC                �鿴zf_device_dot_matrix_screen.h �� DOT_MATRIX_SCREEN_SYNC_PIN�궨��
*                  GND                 ��Դ��
*                  ------------------------------------
********************************************************************************************************************/

#ifndef _zf_device_dot_matrix_screen_h_
#define _zf_device_dot_matrix_screen_h_


#include "zf_common_typedef.h"


#define DOT_MATRIX_SCREEN_SYNC_PIN      (ERU_CH2_REQ14_P02_1)   // ʹ��P20_9����ͬ���ź�

#define DOT_MATRIX_SCREEN_SR0_PIN       (P00_0)
#define DOT_MATRIX_SCREEN_SR1_PIN       (P00_1)
#define DOT_MATRIX_SCREEN_SR2_PIN       (P00_2)
#define DOT_MATRIX_SCREEN_SR3_PIN       (P00_3)                 // Ħ������Խ����Ŷ����޸�ΪP33_8
#define DOT_MATRIX_SCREEN_SR4_PIN       (P00_4)
#define DOT_MATRIX_SCREEN_SR5_PIN       (P00_5)
#define DOT_MATRIX_SCREEN_SR6_PIN       (P00_6)

#define DOT_MATRIX_SCREEN_ROW_NUM       (7)

void dot_matrix_screen_scan             (void);
void dot_matrix_screen_show_string      (const char *str);
void dot_matrix_screen_set_brightness   (uint16 brightness);
void dot_matrix_screen_init             (void);
void dot_matrix_screen_show_light       (uint8 mode);

extern uint16 count_10ms;
extern uint8 count_10ms_pit_state;
extern uint8       light_mode ;
extern uint8 screen_show_light_state;

#endif

