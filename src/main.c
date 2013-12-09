

#include "ch.h"
#include "hal.h"



int main(void) {

  //Start System
  halInit();
  chSysInit();

  //startSysCtrl();


  while (TRUE) {
    chThdSleepMilliseconds(1000);
    palTogglePort(GPIOB, GPIOB_LEDG);
  }
}
