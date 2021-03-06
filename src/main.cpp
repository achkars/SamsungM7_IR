#include <Arduino.h>

#include "ir.h"
#include "serial.h"
#include "wifi.h"
#include "discovery.h"
#include "speaker.h"
#include "http_xml.h"
#include "display.h"

void setup() {

  USE_SERIAL.begin(115200);
  // USE_SERIAL.setDebugOutput(true);

  USE_SERIAL.println();
  USE_SERIAL.println();
  USE_SERIAL.println();

  setupDisplay();
  setupWifi();
  setupDiscovery();
  setupIR();
  setupSpeaker();
}

void loop() {
  loopIR();
  loopWifi();
  loopDisplay();
  loopDiscovery();
  loopSpeaker();
}

void onDiscoveryFinished(String address) {
  setSpeakerAddress(address);
}

void onHttpWait() {
  peekIR();
}

void onVolumeUp() {
  increaseVolume();
}

void onVolumeDown() {
  decreaseVolume();
}

void onTvRad() {
  setAux();
}

void onMute() {
  toggleMute();
}