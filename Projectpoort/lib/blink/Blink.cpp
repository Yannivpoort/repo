#include "Blink.h"
#include <Arduino.h>

Blink::Blink(int pinNum) {
    _pin = pinNum;
    pinMode(_pin, OUTPUT);

}

void Blink::now() {
    digitalWrite(_pin, HIGH);
    delay(_timeBetweenOnOffMillis);

    digitalWrite(_pin, LOW);
    delay(_timeBetweenOnOffMillis);
}