#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(25);
  gpio_set_dir(25, true);
  while(true){

    if(gpio_get(25)==1) {
      gpio_put(25,false);
      sleep_ms(250);
    }
    else {
      gpio_put(25, true);
      sleep_ms(250);
    }
  }
}
