// JLed candle simulation
// Copyright 2017 by Jan Delgado. All rights reserved.
// https://github.com/jandelgado/jled
#include <jled.h>

auto led = JLed(5).Candle().Forever();

void setup() {
}

void loop() {
  led.Update();
}
