#include "mini_piano.h"

Piano::Piano(int speaker_pin)
{
    SPEAKER = speaker_pin;
    Serial.begin(9600);
}

Piano::~Piano(){};