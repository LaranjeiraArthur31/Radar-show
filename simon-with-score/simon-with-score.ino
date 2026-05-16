const int buzzerPin = 8;

const int buttonPins[4] = {2, 3, 4, 5}; // 4 botões
const int notes[4] = {
  262, // dó
  294, // ré
  330, // mi
  349  // fá
};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  bool playing = false;

  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      tone(buzzerPin, notes[i]);
      playing = true;
      break;
    }
  }

  if (!playing) {
    noTone(buzzerPin);
  }
}