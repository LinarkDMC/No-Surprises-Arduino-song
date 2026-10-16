/* No Surprises 
   Connect a piezo buzzer or speaker to pin 8.

                           Ed O'Brien, Colin Greenwod, Thomas Yorke, Philip Selway, Jonathan Greenwood - 1997
*/


// Define notes and frequencies

#define NOTE_C5   523
#define NOTE_Db5  554
#define NOTE_F5   698
#define NOTE_A5   880
#define NOTE_Bb5  932
#define NOTE_G5  784

// The buzzer's pin

int buzzer = 8;

// Melody: No Surprises (Notes and durations)

int melody[]  {
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_Bb5, NOTE_Db5, NOTE_F5, NOTE_G5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_Bb5, NOTE_Db5, NOTE_F5, NOTE_G5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_A5, NOTE_C5, NOTE_F5, NOTE_C5,
    NOTE_Bb5, NOTE_Db5, NOTE_F5, NOTE_G5
};

int durations[] = {
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2, 
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2, 
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2,
    2, 2, 2, 2
};

void setup() {
  int notes = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < notes; i++) {
    int noteDuration = 650 / durations[i];   
    tone(buzzer, melody[i], noteDuration);

    delay(noteDuration * 1.3);               
    noTone(buzzer);
  }
}

void loop() {
    // There's nothing to repeat
}
