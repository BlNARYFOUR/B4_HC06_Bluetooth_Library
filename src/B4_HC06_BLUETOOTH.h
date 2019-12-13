
/*
 * Author:        BinaryFour
 * Description:   Basic Library for Arduino LCD screen;
 *
 */

#ifndef B4_BLUETOOTH_h
#define B4_BLUETOOTH_h

#include <Arduino.h>
#include <SoftwareSerial.h>



class B4Bluetooth {
  public:
    B4Bluetooth(unsigned short rx, unsigned short tx);  
    void doBluetooth();
	String getAvailableData();
	void begin(long speed);
	void respond(String str);
	void send(String str);
	
  private:
    SoftwareSerial _bluetooth;
};

#endif

