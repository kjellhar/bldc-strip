

#include "ch.h"
#include "hal.h"



int main(void) {

  //Start System
  halInit();
  chSysInit();

  //startSysCtrl();


  while (TRUE) {
    chThdSleepMilliseconds(200);
    // Use this with the strip
    //palTogglePad(GPIOB, GPIOB_LEDG);

    // Use this with the Discovery board
    palTogglePad(GPIOC, GPIOC_LED4);
  }
}
