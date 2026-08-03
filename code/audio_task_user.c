/*
 * audio_task_user.c
 *
 *  Created on: 2026年8月1日
 *      Author: 24929
 */

#include "audio_task_user.h"


void audio_task_init()
{
    buzzer_init();
    dot_matrix_screen_init();
    dot_matrix_screen_set_brightness(5000);
    audio_init();
}
