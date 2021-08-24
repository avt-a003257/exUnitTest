#ifndef _LED_DRIVER_H_
#define _LED_DRIVER_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void LedDriver_Create(uint16_t *address);
void LedDriver_Destroy(void);
void LedDriver_TurnOn(uint16_t ledNumber);
void LedDriver_TurnOff(uint16_t ledNumber);

#ifdef __cplusplus
}
#endif

#endif /* _LED_DRIVER_H_ */

