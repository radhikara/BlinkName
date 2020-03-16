int mainLED = D7;
int delayDot = 250
int delayDash = 1000

void setup() {
    pinMode(mainLED, OUTPUT);
}

void loop() {
    
    // MAKING PHOTON BLINKING 'RAKYAN' IN MORSE CODE
    
    // Letter R -> .-.
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY BETWEEN LETTERS
    delay(500);
    
    // Letter A -> .-
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY BETWEEN LETTERS
    delay(500);
    
    // Letter K -> -.-
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY BETWEEN LETTERS
    delay(500);
    
    // Letter Y -> -.--
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY BETWEEN LETTERS
    delay(500);
    
    // Letter A -> .-
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY BETWEEN LETTERS
    delay(500);
    
    // Letter N -> -.
    // DASH
    digitalWrite(mainLED, HIGH);
    delay(1000);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DOT
    digitalWrite(mainLED, HIGH);
    delay(250);
    digitalWrite(mainLED, LOW);
    delay(500);
    
    // DELAY ENDING
    delay(1000);
}
