/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"
#define songWordNum 62
#define songWordNum2 20
//int durationSec;
// notes in the melody:
int melody[] = {  //七彩的微風
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, 0,
  NOTE_G5, NOTE_A5, NOTE_B5, NOTE_B5, NOTE_B5, NOTE_A5, NOTE_C6,0,
  NOTE_A5,NOTE_B5,NOTE_C6,0,
  NOTE_A5,NOTE_C6,NOTE_B5,NOTE_C6,NOTE_B5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,0,

  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, 0,
  NOTE_G5, NOTE_A5, NOTE_B5, NOTE_B5, NOTE_B5, NOTE_A5, NOTE_C6,0,
  NOTE_A5,NOTE_B5,NOTE_C6,0,
  NOTE_A5,NOTE_C6,NOTE_B5,0,
  NOTE_B5,NOTE_B5,NOTE_A5,NOTE_B5,NOTE_B5,NOTE_C6,NOTE_C6
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {  //七彩的微風
  8, 8, 4, 8, 6, 4,
  4, 8,8,8,4,8,2,4,
  8,8,2,8,
  4,8,3,8,4,4,8,2,2,8,

  8, 8, 4, 8, 6, 4,
  4, 8,8,8,4,8,2,4,
  8,8,2,8 ,
  4,8,4,8 ,
  8,8,8,8,4,8,2
};

int melody2[]={  //YEE
  NOTE_C5,NOTE_D5,NOTE_C5,NOTE_E5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_D5,NOTE_G5,NOTE_G5,0,
  NOTE_D5,NOTE_E5,NOTE_D5,NOTE_F5,NOTE_F5,NOTE_G5,NOTE_A5,0,NOTE_C6
};
int noteDurations2[] = {  //YEE
  8,8,8,4,4,8,4,4,8,8,8,
  8,8,8,4,4,8,8,8,2
};

void setup() {
  //durationSec=1.80;
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < songWordNum; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.80;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(songWordNum);
  }
}

void loop() {
  // no need to repeat the melody.
}
