#define BUZZER_PIN 18
 
// Notes of the "Jingle Bells" song
int melody[] = {
  262, 262, 262, // Jingle bell, jingle bell, jingle all the way
  262, 262, 262, // Jingle bell, jingle bell, jingle all the way
  262, 330, 220, 247, 262, // Oh what fun it is to ride in a one horse open sleigh
  294, 294, 294, 294, 294, 262, 262, 262, // Hey, jingle bell, jingle bell, jingle all the way
  294, 262, 262, 330, 294, 330, 349, 349, 349, 349, 349, 330, 330, 330, // Oh what fun it is to ride in a one horse open sleigh
  294, 262, 262, 330, 294, 262, 262 // Oh what fun it is to ride in a one horse open sleigh
};
 
// Note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  8, 8, 4, // Jingle bell, jingle bell, jingle all the way
  8, 8, 4, // Jingle bell, jingle bell, jingle all the way
  8, 8, 8, 8, 4, // Oh what fun it is to ride in a one horse open sleigh
  8, 8, 8, 8, 8, 8, 8, 4, // Hey, jingle bell, jingle bell, jingle all the way
  8, 8, 8, 8, 8, 8, 8, 4, // Oh what fun it is to ride in a one horse open sleigh
  8, 8, 8, 8, 8, 8, 4 // Oh what fun it is to ride in a one horse open sleigh
};
 
void setup() {
  // Set the buzzer pin as an output
  pinMode(BUZZER_PIN, OUTPUT);
}
 
void loop() {
  // Iterate over the notes of the melody
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {
 
    // Calculate the note duration
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
 
    // To distinguish the notes, set a minimum time between them
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
 
    // Stop the tone playing
    noTone(BUZZER_PIN);
  }
  // Wait for a while before repeating the song
  delay(2000); // 2 seconds delay
}