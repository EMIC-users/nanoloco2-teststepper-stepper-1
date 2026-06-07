#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_Led1.h"
#include "inc/led_Led2.h"
#include "inc/timer_api1.h"
#include "inc/StepperDriver_Motor.h"
#include "inc/EMICBus.h"

void onReset()
{
    StepperDriver_Motor_setMicrostep(4);
    StepperDriver_Motor_setSpeed(200);
    LEDs_Led1_blink(100, 200, 3);
    setTime1(2000, 'A');
}


void etOut1()
{
    StepperDriver_Motor_move(2, 400);
}


void StepperDriver_Motor_onLimitSwitch()
{
    StepperDriver_Motor_sleep(1);
}



