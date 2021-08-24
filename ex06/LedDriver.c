#include "LedDriver.h"

static uint16_t *ledAddress;

void LedDriver_Create(uint16_t *address)
{
	ledAddress = address;
	*ledAddress = 0;
}

void LedDriver_Destroy(void)
{
}

void LedDriver_TurnOn(uint16_t ledNumber)
{
	*ledAddress = 1;
}

void LedDriver_TurnOff(uint16_t ledNumber)
{
	*ledAddress = 0;
}
