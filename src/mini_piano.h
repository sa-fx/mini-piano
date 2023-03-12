#ifndef mini_piano_h
#define mini_piano_h

#include "Arduino.h"
#include <pitches.h>

// TODOLater: Implement class
class Piano
{
public:
    Piano(int speaker_pin);
    ~Piano();

private:
    const int SPEAKER;
}

#endif