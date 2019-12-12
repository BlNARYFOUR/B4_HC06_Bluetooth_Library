
/*
 * Author:        BinaryFour
 * Description:   Basic Library for Arduino LCD screen;
 *
 */



#include "B4_HC06_BLUETOOTH.h"



B4Bluetooth::B4Bluetooth(unsigned short rx, unsigned short tx) : _bluetooth(rx, tx) {}

String B4Bluetooth::getAvailableData() {
  static String res = "";

  res = -1 < res.indexOf("\r\n") ? "" : res;
  
  while(_bluetooth.available() > 0) {
    char c = _bluetooth.read();
    res += c;
  }
  
  return -1 < res.indexOf("\r\n") ? res : "";
}

void B4Bluetooth::begin(long speed) {
	_bluetooth.begin(speed);
}

void B4Bluetooth::respond(String str) {
	_bluetooth.println(str);
}

