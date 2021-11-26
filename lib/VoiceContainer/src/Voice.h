#ifndef VOICE_H
#define VOICE_H

#include "IVoice.h"
#include <Arduino.h>
#include "SignalTypes.h"
#include "VoicePatternData.h"
#include <cstdlib>     /* srand, rand */

class Voice : public Module, public IVoice {
public:
    Voice(SignalTypes type, uint8_t length);


    void update(SignalTypes subjectLine, int msg) override;

    SignalTypes getType();

    void setStep(uint8_t value, uint8_t position) override;

    void muteStep(uint8_t position) override;

    void deleteStep(uint8_t position) override;

    uint8_t getCurrentStepNumber() const;

    int getCurrentStepValue();

    void incrementStep();

    void setSize(uint8_t newLength) override;

    void setQuarterNoteDivisions(uint8_t subDivisions) override;

    uint8_t getQuarterNoteDivisions();

    void setMotion(char direction); //forward, backward, tbd: random

    uint8_t getMotion() const;


    //TODO: Implement save to nvs
    //   void save();
    //TODO: Implement destructor
//    ~Voice();
private:
    //Always initialize values with some default or else you WILL run into undefined behavior.
    VoicePatternData _steps;
    uint8_t _sequenceLength;
    uint8_t _currentStep = 1;
    uint8_t _clockPulsesPerStep = 12;
    uint16_t _pulseCounter = 0;
    int8_t _motion = 1;

};


#endif
