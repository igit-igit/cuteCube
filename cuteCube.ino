#include "diceFunctions.h"int buttonState =0;void setup() {  // Deklarieren des "animation"-Buttons auf Basis von buttonState  int aniButton = digitalRead(button);  // Deklarieren des timers der die Zeit in ms ermittelt nach dem ein Programm hochgeladen wurde   unsigned long time = millis();  // randomSeed damit der Zufallsgenerator nicht den gleichen Startwert hat  randomSeed(analogRead(0));  // legt die Pins als Ausgang bzw. Eingang mittels function fest   initial();   // Wenn der Sketch hochgeladen wurde soll die Animation solange ausgeführt werden bis die   // Abbruchbedingung eintritt (nach 5 Sekunden)  for (time = 0; time <= 5000; time ++ ) {  time = millis();  aniButton=digitalRead(button);  animation();  }}void loop() {    buttonState = digitalRead(button);      if (buttonState == HIGH) {        sndAnimation();        rollDice();        delay(1000);        reset();    }}