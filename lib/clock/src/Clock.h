#ifndef Clock_H
#define Clock_H

#include <Arduino.h>

#include <Module.h>
#include <SignalTypes.h>
#include <macros.h>
#include "OscMessageAdapter.h"


//class Clock : public ISubject{
class Clock : public Module {

public:

    //Setter functions
    void setBeatsPerMinute();
    static void setBeatsPerMinute(void * context, OSCMessage & message);
    bool timer();
    void doNotify();
    void update(OSCMessageInterface & message) override{};
private:
    //Clock setting in BPM
    uint16_t _beats = 120;

    //deltaT in Microseconds = 6e7/(time * steps) uint16_t was too small to hold large value
    unsigned long _deltaTime{};

    //Timer Variable in microseconds
    unsigned long _pastState = 0;
    unsigned long stateAfterNotify = 0;

};

#endif
