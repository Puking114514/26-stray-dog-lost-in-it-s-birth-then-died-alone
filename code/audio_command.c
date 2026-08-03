/*
 * audio_command.c
 *
 *  Created on: 2026年7月28日
 *      Author: 24929
 */

#include "audio_command.h"

#include "debugger_gpio.h"


#define COMMAND_COUNT (sizeof(command_map) / sizeof(command_map[0]))

audio_command_enum g_audio_command_enum = NOT_FOUND;
uint8_t g_trigger = 0;

const CommandMap command_map[] = {
    {"鸣笛一秒钟", HONK_FOR_1_SECOND},
    {"鸣笛两秒钟", HONK_FOR_2_SECONDS},
    {"鸣笛三秒钟", HONK_FOR_3_SECONDS},
    {"鸣笛两声", TWO_HORN_BLASTS},
    {"鸣笛三声", THREE_HORN_BLASTS},
    {"鸣笛四声", FOUR_HORN_BLASTS},
    {"长短鸣笛", LONG_SHORT_HORN_BLASTS},
    {"急促鸣笛", RAPID_HORN_BLASTS},
    {"警报鸣笛", ALARM_SIREN_HORN},
    {"通过门洞一左侧", PASS_THROUGH_THE_LEFT_SIDE_OF_DOORWAY_1},
    {"通过门洞一", PASS_THROUGH_DOORWAY_1},
    {"通过门02", PASS_THROUGH_DOORWAY_2},
    {"通过门洞山", PASS_THROUGH_DOORWAY_3},
    {"通过门洞山右侧", PASS_THROUGH_THE_RIGHT_SIDE_OF_DOORWAY_3},
    {"门洞一右侧返回", RETURN_ON_THE_RIGHT_SIDE_OF_DOORWAY_1},
    {"门洞一返回", RETURN_THROUGH_DOORWAY_1},
    {"门02返回", RETURN_THROUGH_DOORWAY_2},
    {"门03返回", RETURN_THROUGH_DOORWAY_3},//门洞三返回
    {"门03左侧返回", RETURN_ON_THE_LEFT_SIDE_OF_DOORWAY_3},
    {"前行10米", MOVE_FORWARD_10_METERS},
    {"后退10米", MOVE_BACKWARD_10_METERS},
    {"蛇形前进10米", SLALOM_FORWARD_10_METERS},
    {"蛇形后退10米", SLALOM_BACKWARD_10_METERS},
    {"逆时针转一圈", TURN_COUNTERCLOCKWISE_ONE_FULL_CIRCLE},
    {"顺时针转一圈", TURN_CLOCKWISE_ONE_FULL_CIRCLE},
    {"左转", TURN_LEFT},
    {"右转", TURN_RIGHT},
    {"打开左转向灯", TURN_ON_LEFT_TURN_SIGNAL},
    {"打开右转向灯", TURN_ON_RIGHT_TURN_SIGNAL},
    {"打开远光灯", TURN_ON_HIGH_BEAM},
    {"打开近光灯", TURN_ON_LOW_BEAM},
    {"打开雾灯", TURN_ON_FOG_LAMP},
    {"打开双闪灯", TURN_ON_HAZARD_WARNING_LIGHTS},
    {"打开车内照明灯", TURN_ON_INTERIOR_LIGHT},
    {"打开雨刷器", TURN_ON_WIPER},

    // 别名
    {"长短名", LONG_SHORT_HORN_BLASTS},
    {"通过门洞二", PASS_THROUGH_DOORWAY_2},
    {"通过门洞三", PASS_THROUGH_DOORWAY_3},
    {"通过门03", PASS_THROUGH_DOORWAY_3},
    {"通过门洞三右侧", PASS_THROUGH_THE_RIGHT_SIDE_OF_DOORWAY_3},
    {"通过门03右侧", PASS_THROUGH_THE_RIGHT_SIDE_OF_DOORWAY_3},
    {"门洞二返回", RETURN_THROUGH_DOORWAY_2},
    {"门洞三返回", RETURN_THROUGH_DOORWAY_3},
    {"门洞山返回", RETURN_THROUGH_DOORWAY_3},
    {"门洞三左侧返回", RETURN_ON_THE_LEFT_SIDE_OF_DOORWAY_3},
    {"门洞山左侧返回", RETURN_ON_THE_LEFT_SIDE_OF_DOORWAY_3}
};
audio_command_enum string_to_command(const char* input) {
    for (size_t i = 0; i < COMMAND_COUNT; i++) {

                if (strcmp(input, command_map[i].str) == 0)
                {
                    return command_map[i].value;
                }

        }

    return NOT_FOUND;
}

void command_into_action(audio_command_enum command)
{
    switch(command)
    {
        case HONK_FOR_1_SECOND:
            // 鸣笛1秒钟
            beep_audio_task(HONK_FOR_1_SECOND);
            break;

        case HONK_FOR_2_SECONDS:
            // 鸣笛2秒钟
            beep_audio_task(HONK_FOR_2_SECONDS);
            break;

        case HONK_FOR_3_SECONDS:
            // 鸣笛3秒钟
            beep_audio_task(HONK_FOR_3_SECONDS);
            break;

        case TWO_HORN_BLASTS:
            // 鸣笛两声
            beep_audio_task(TWO_HORN_BLASTS);
            break;

        case THREE_HORN_BLASTS:
            // 鸣笛三声
            beep_audio_task(THREE_HORN_BLASTS);
            break;

        case FOUR_HORN_BLASTS:
            // 鸣笛四声
            beep_audio_task(FOUR_HORN_BLASTS);
            break;

        case LONG_SHORT_HORN_BLASTS:
            // 长短鸣笛
            beep_audio_task(LONG_SHORT_HORN_BLASTS);
            break;

        case RAPID_HORN_BLASTS:
            // 急促鸣笛
            beep_audio_task(RAPID_HORN_BLASTS);
            break;

        case ALARM_SIREN_HORN:
            // 警报鸣笛
            beep_audio_task(ALARM_SIREN_HORN);
            break;

        case PASS_THROUGH_THE_LEFT_SIDE_OF_DOORWAY_1:
            // 通过门洞1左侧
            break;

        case PASS_THROUGH_DOORWAY_1:
            // 通过门洞1
            break;

        case PASS_THROUGH_DOORWAY_2:
            // 通过门洞2
            break;

        case PASS_THROUGH_DOORWAY_3:
            // 通过门洞3
            break;

        case PASS_THROUGH_THE_RIGHT_SIDE_OF_DOORWAY_3:
            // 通过门洞3右侧
            break;

        case RETURN_ON_THE_RIGHT_SIDE_OF_DOORWAY_1:
            // 门洞1右侧返回
            break;

        case RETURN_THROUGH_DOORWAY_1:
            // 门洞1返回
            break;

        case RETURN_THROUGH_DOORWAY_2:
            // 门洞2返回
            break;

        case RETURN_THROUGH_DOORWAY_3:
            // 门洞3返回
            break;

        case RETURN_ON_THE_LEFT_SIDE_OF_DOORWAY_3:
            // 门洞3左侧返回
            break;

        case MOVE_FORWARD_10_METERS:
            // 前行10米
            break;

        case MOVE_BACKWARD_10_METERS:
            // 后退10米
            break;

        case SLALOM_FORWARD_10_METERS:
            // 蛇形前进10米  蛇形： 行进路线轨迹左右摆动超过2米。
            break;

        case SLALOM_BACKWARD_10_METERS:
            // 蛇形后退10米
            break;

        case TURN_COUNTERCLOCKWISE_ONE_FULL_CIRCLE:
            // 逆时针转一圈  转动半径可以在3米到10米
            break;

        case TURN_CLOCKWISE_ONE_FULL_CIRCLE:
            // 顺时针转一圈
            break;

        case TURN_LEFT:
            // 左转   行进超过2米之后，完成左转或者右转， 而且只要方向转正之后即可停止。
            break;

        case TURN_RIGHT:
            // 右转
            break;

        case TURN_ON_LEFT_TURN_SIGNAL:

            // 打开左转向灯
            screen_show_light_state = 1;
            light_mode = 2;
            break;

        case TURN_ON_RIGHT_TURN_SIGNAL:
            // 打开右转向灯
            screen_show_light_state = 1;
            light_mode = 3;
            break;

        case TURN_ON_HIGH_BEAM:
            // 打开远光灯
            screen_show_light_state = 1;
            light_mode = 5;
            break;

        case TURN_ON_LOW_BEAM:
            // 打开近光灯
            screen_show_light_state = 1;
            light_mode = 4;
            break;

        case TURN_ON_FOG_LAMP:
            // 打开雾灯
            screen_show_light_state = 1;
            light_mode = 6;
            break;

        case TURN_ON_HAZARD_WARNING_LIGHTS:
            // 打开双闪灯
            screen_show_light_state = 1;
            light_mode = 1;
            break;

        case TURN_ON_INTERIOR_LIGHT:
            // 打开车内照明灯
            screen_show_light_state = 1;
            light_mode = 8;
            break;

        case TURN_ON_WIPER:
            // 打开雨刷器
            screen_show_light_state = 1;
            light_mode = 7;
            break;
        default:
            // NOT FOUND 27
            break;
    }
}





































