#include "stm32f1xx_hal.h"
#include "icons_config.h"

const unsigned int facebook_icon_40x40[] = {
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,

};
