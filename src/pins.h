#pragma once

#include <stdint.h>

const uint8_t kIrRecvPin = 5; // D1
const uint8_t kMax7219LoadPin = 16; // D0
const uint8_t kWifiLedPin = LED_BUILTIN;
const uint8_t kIrLoopPin = 4; // D2

// SPI uses pin 12 (D6), 13 (D7), 14 (D5), maybe 15 (D8) for CS

/*
Level shifter mapping:
   LV/HV  
D0   4   MAX7219:12
D5   3   MAX7219:13
D7   2   MAX7219:1
D1   1   TSOP1738:3
*/