
#include <stdio.h>
#include "esp_types.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "Arduino.h"

// To enable CPP support
extern "C" {
void app_main(void);
}

void setup(void){
	Serial.begin(921600);
}

void loop(void){
	Serial.println("Test");
	delay(1000);
}

// Main function or entry point
void app_main() {
	initArduino();

	setup(); //Arduino setup function

	while(true){
		//Arduino loop function
		loop();
	}
}