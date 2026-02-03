
const int buzzer1 = 8;
const int buzzer2 = 9;


int melody[] = {
  262, 294, 330, 349, 392, 440, 494, 523
};


int noteDuration = 400;

void setup() {
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    
    if (i % 2 == 0) {
      tone(buzzer1, melody[i], noteDuration);
    } else {
      tone(buzzer2, melody[i], noteDuration);
    }

    delay(noteDuration * 1.3); 
  }

  delay(1000); 
}
