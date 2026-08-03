/*
 * audio_command.h
 *
 *  Created on: 2026年7月28日
 *      Author: 24929
 */

#ifndef CODE_AUDIO_COMMAND_H_
#define CODE_AUDIO_COMMAND_H_

#include "zf_common_headfile.h"
#include "zf_device_dot_matrix_screen.h"
#include "zf_device_tld7002.h"

typedef enum
{
    HONK_FOR_1_SECOND,

    HONK_FOR_2_SECONDS,

    HONK_FOR_3_SECONDS,

    TWO_HORN_BLASTS,

    THREE_HORN_BLASTS,

    FOUR_HORN_BLASTS,

    LONG_SHORT_HORN_BLASTS,

    RAPID_HORN_BLASTS,

    ALARM_SIREN_HORN,

    PASS_THROUGH_THE_LEFT_SIDE_OF_DOORWAY_1,

    PASS_THROUGH_DOORWAY_1,

    PASS_THROUGH_DOORWAY_2,

    PASS_THROUGH_DOORWAY_3,

    PASS_THROUGH_THE_RIGHT_SIDE_OF_DOORWAY_3,

    RETURN_ON_THE_RIGHT_SIDE_OF_DOORWAY_1,

    RETURN_THROUGH_DOORWAY_1,

    RETURN_THROUGH_DOORWAY_2,

    RETURN_THROUGH_DOORWAY_3,

    RETURN_ON_THE_LEFT_SIDE_OF_DOORWAY_3,

    MOVE_FORWARD_10_METERS,

    MOVE_BACKWARD_10_METERS,

    SLALOM_FORWARD_10_METERS,

    SLALOM_BACKWARD_10_METERS,

    TURN_COUNTERCLOCKWISE_ONE_FULL_CIRCLE,

    TURN_CLOCKWISE_ONE_FULL_CIRCLE,

    TURN_LEFT,

    TURN_RIGHT,

    TURN_ON_LEFT_TURN_SIGNAL,

    TURN_ON_RIGHT_TURN_SIGNAL,

    TURN_ON_HIGH_BEAM,

    TURN_ON_LOW_BEAM,

    TURN_ON_FOG_LAMP,

    TURN_ON_HAZARD_WARNING_LIGHTS,

    TURN_ON_INTERIOR_LIGHT,

    TURN_ON_WIPER,

    NOT_FOUND

}audio_command_enum;



typedef struct {
    const char* str;
    audio_command_enum value;
} CommandMap;

audio_command_enum string_to_command(const char* input);
void command_into_action(audio_command_enum command);

extern audio_command_enum g_audio_command_enum;
extern uint8_t g_trigger;

#endif /* CODE_AUDIO_COMMAND_H_ */
