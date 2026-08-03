/*
 * debugger_gpio.h
 *
 *  Created on: 2025��7��20��
 *      Author: 34843
 */

#ifndef CODE_DEBUGER_DEBUGGER_GPIO_H_
#define CODE_DEBUGER_DEBUGGER_GPIO_H_

#include "zf_common_typedef.h"

#include "debugger_kconfig.h"

// ��ȡ���밴��ֵ
#define SW1 (!gpio_get_level(GPIO_SWITCH_01))
#define SW2 (!gpio_get_level(GPIO_SWITCH_02))
#define SW3 (!gpio_get_level(GPIO_SWITCH_03))
#define SW4 (!gpio_get_level(GPIO_SWITCH_04))


void buzzer_init(void);

void switch_init(void);

void beep_test(uint16 time);

void beep_audio_task(int mode);

#endif /* CODE_DEBUGER_DEBUGGER_GPIO_H_ */
