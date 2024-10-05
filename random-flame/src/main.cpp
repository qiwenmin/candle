#include <Arduino.h>

uint8_t leds[] = {9, 10, 11};

void setup() {
    for (uint8_t i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
        pinMode(leds[i], OUTPUT);
    }
}

void loop() {
    for (uint8_t i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
        analogWrite(leds[i], random(120) + 135);
    }
    delay(random(100));
}
