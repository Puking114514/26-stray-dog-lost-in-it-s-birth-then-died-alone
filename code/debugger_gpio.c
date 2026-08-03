/*
 * debugger_gpio.c
 *
 *  Created on: 2025��7��20��
 *      Author: 34843
 */
#include "debugger_gpio.h"

#include "zf_driver_gpio.h"

#include "zf_driver_delay.h"

#include "zf_driver_pwm.h"

#include "audio_command.h"
// ��ʼ��������
void buzzer_init(void)
{
    pwm_init(PWM_BUZZER, 1000, 0);
    printf("buzzer is ok!\r\n");
}

// ���÷��������
void beep_test(uint16 time)//�룬4-> 4.000004s
{
uint16 duty = 0;
while(time >= 0)
    {
    for (duty = 0; duty<2000; duty++)
        {
        pwm_set_duty(PWM_BUZZER, duty*5);
        system_delay_ms(1);
        }
    for (duty = 2000; duty>0; duty--)
        {
        pwm_set_duty(PWM_BUZZER, duty*5);
        system_delay_ms(1);
        }
    time -=4;
    }
}

void switch_init(void)
{
    gpio_init(GPIO_SWITCH_01,GPI,GPIO_LOW,GPI_PULL_UP);
    gpio_init(GPIO_SWITCH_02,GPI,GPIO_LOW,GPI_PULL_UP);
    gpio_init(GPIO_SWITCH_03,GPI,GPIO_LOW,GPI_PULL_UP);
    gpio_init(GPIO_SWITCH_04,GPI,GPIO_LOW,GPI_PULL_UP);
    printf("switch is ok!\r\n");
}

void beep_audio_task(int mode)
{
    switch(mode)
    {
        case HONK_FOR_1_SECOND:
            pwm_set_duty(PWM_BUZZER, 5000);
            system_delay_ms(1000);
            pwm_set_duty(PWM_BUZZER, 0);

        break ;
        case HONK_FOR_2_SECONDS:
            // 鸣笛2秒
            pwm_set_duty(PWM_BUZZER, 5000);
            system_delay_ms(2000);
            pwm_set_duty(PWM_BUZZER, 0);
            break;

        case HONK_FOR_3_SECONDS:
            // 鸣笛3秒钟
            pwm_set_duty(PWM_BUZZER, 5000);
            system_delay_ms(3000);
            pwm_set_duty(PWM_BUZZER, 0);
            break;

        case TWO_HORN_BLASTS:
            // 鸣笛两声
        {
            for(uint8 i = 0; i<2;i++)
            {
                pwm_set_duty(PWM_BUZZER, 5000);
                system_delay_ms(1000);
                pwm_set_duty(PWM_BUZZER, 0);
                system_delay_ms(1000);
            }
        }
            break;

        case THREE_HORN_BLASTS:
            // 鸣笛三声
        {
            for(uint8 i = 0; i<3;i++)
            {
                pwm_set_duty(PWM_BUZZER, 5000);
                system_delay_ms(1000);
                pwm_set_duty(PWM_BUZZER, 0);
                system_delay_ms(1000);
            }
        }
            break;

        case FOUR_HORN_BLASTS:
            // 鸣笛四声
        {
            for(uint8 i = 0; i<4;i++)
            {
                pwm_set_duty(PWM_BUZZER, 5000);
                system_delay_ms(1000);
                pwm_set_duty(PWM_BUZZER, 0);
                system_delay_ms(1000);
            }
        }
            break;

        case LONG_SHORT_HORN_BLASTS:
            // 长短鸣笛
            pwm_set_duty(PWM_BUZZER, 5000);
            system_delay_ms(1000);

            pwm_set_duty(PWM_BUZZER, 0);
            system_delay_ms(1000);

            pwm_set_duty(PWM_BUZZER, 5000);
            system_delay_ms(3000);
            pwm_set_duty(PWM_BUZZER, 0);
            break;

        case RAPID_HORN_BLASTS:
            // 急促鸣笛
        {
            for(uint8 i = 0; i<6;i++)
            {
                pwm_set_duty(PWM_BUZZER, 5000);
                system_delay_ms(500);
                pwm_set_duty(PWM_BUZZER, 0);
                system_delay_ms(500);
            }
        }
            break;

        case ALARM_SIREN_HORN:
            // 警报鸣笛
        {
            for(uint8 i = 0; i<6;i++)
            {
                pwm_init(PWM_BUZZER, 500, 5000);
                system_delay_ms(1000);
                pwm_init(PWM_BUZZER, 1000, 5000);
                system_delay_ms(1000);

            }
            pwm_init(PWM_BUZZER, 1000, 0);
        }

            break;
    }





}






















