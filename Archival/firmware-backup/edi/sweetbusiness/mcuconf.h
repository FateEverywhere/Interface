#pragma once

#include_next <mcuconf.h>

#undef RP_PWM_USE_PWM5
#define RP_PWM_USE_PWM5 TRUE

//#undef RP_I2C_USE_I2C0
//#define RP_I2C_USE_I2C0