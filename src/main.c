

#include "ch.h"
#include "hal.h"
#include "blinky.h"



int main(void) {

  //Start System
  halInit();
  chSysInit();

  startBlinkyBlue();
  startBlinkyGreen();

  // Just idle on the main loop
  while (TRUE) {
    chThdSleepMilliseconds(1000);
  }
}
