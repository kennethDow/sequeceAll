#include <Clock.h>
#include <Voice.h>
#include <SignalTypes.h>
//#include <WirelessLanService.h>
#include <Arduino.h>
class dummyObserver : public IObserver {
public:
  dummyObserver() {};
  void update(SignalTypes sender, int _msg);

};



void dummyObserver::update(SignalTypes _sender, int _msg){
  Serial.println("Received Update:");
  Serial.println(_msg);
  Serial.println("From:");
  Serial.println(_sender);

}

Clock sClock;

SignalTypes trigger = TRIGGER;
Voice *kick = new Voice(trigger, 16);

//Correction found here:
//https://stackoverflow.com/questions/2988273/c-pointer-to-objects


//WirelessLanService wirelessLanService;

void setup() {
Serial.begin(115200);
sClock.setBeatsPerMinute(25);


}


void loop(/* arguments */) {
//wirelessLanService.handleInputClient();
Serial.println("From:");
delay(100);
}
