#include <Keypad.h>
#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

const byte ROWS = 3; //four rows
const byte COLS = 3; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};
byte rowPins[ROWS] = {2,3,4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {7,6,5}; //connect to the column pinouts of the keypad
bool num=false;
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
const int num0=0;
void setup(){
  keyboard.begin();
   pinMode(LED_BUILTIN, OUTPUT);
  pinMode(num0,INPUT_PULLUP);// Start communication
  delay(1000);
  for(int i=0;i<10;i++){

    if (digitalRead(num0)==0){
      num=true;
    }
    else{
      num=false;
      break;
    }
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);

  }
  delay(2000);
}

void loop(){
  char customKey = customKeypad.getKey();

  if (customKey){
  //   Serial.println(customKey);

    if (num==false){
      switch(customKey)
      {
case '1': digitalWrite(LED_BUILTIN, HIGH);   digitalWrite(LED_BUILTIN, LOW); break; 
case '2': digitalWrite(LED_BUILTIN, HIGH); keyboard.tapSpecialKey(KEYBOARDPOWER);digitalWrite(LED_BUILTIN, LOW); break; 
case '3': digitalWrite(LED_BUILTIN, HIGH);keyboard.tapSpecialKey(VOLUMEUP);    digitalWrite(LED_BUILTIN, LOW); break; 
case '4': digitalWrite(LED_BUILTIN, HIGH); keyboard.tapKey('d');keyboard.tapKey('x');keyboard.tapKey('c');keyboard.tapKey('f');keyboard.tapKey('g');keyboard.tapKey('f');keyboard.tapKey('f');keyboard.tapKey('x');keyboard.tapKey('d');keyboard.tapKey('d');keyboard.tapKey('d');keyboard.tapKey('f');keyboard.tapKey('g');keyboard.tapKey('g');keyboard.tapKey('v');keyboard.tapKey('v');  digitalWrite(LED_BUILTIN, LOW); break; 
case '5': digitalWrite(LED_BUILTIN, HIGH);   digitalWrite(LED_BUILTIN, LOW); break; 
case '6': digitalWrite(LED_BUILTIN, HIGH);    digitalWrite(LED_BUILTIN, LOW); break; 
case '7': digitalWrite(LED_BUILTIN, HIGH);    digitalWrite(LED_BUILTIN, LOW); break; 
case '8': digitalWrite(LED_BUILTIN, HIGH); keyboard.tapKey('s');keyboard.tapKey('a');keyboard.tapKey('s');keyboard.tapKey('d');keyboard.tapKey('x');  digitalWrite(LED_BUILTIN, LOW); break; 
case '9': digitalWrite(LED_BUILTIN, HIGH);    digitalWrite(LED_BUILTIN, LOW); break; 
      }
    }
    else{
      keyboard.tapSpecialKey(NUMLOCK);
      switch(customKey)
      {
        case '1':keyboard.tapSpecialKey(KEYPAD1);break;
        case '2':keyboard.tapSpecialKey(KEYPAD2);break;
        case '3':keyboard.tapSpecialKey(KEYPAD3);break;
        case '4':keyboard.tapSpecialKey(KEYPAD4);break;
        case '5':keyboard.tapSpecialKey(KEYPAD5);break;
        case '6':keyboard.tapSpecialKey(KEYPAD6);break;
        case '7':keyboard.tapSpecialKey(KEYPAD7);break;
        case '8':keyboard.tapSpecialKey(KEYPAD8);break;
        case '9':keyboard.tapSpecialKey(KEYPAD9);break;
      }
      keyboard.tapSpecialKey(NUMLOCK);
    }

      pinMode(num0,OUTPUT);
      delay(300);
      digitalWrite(num0,HIGH);

        pinMode(num0,INPUT_PULLUP);
 }
if(digitalRead(num0)==0){

    for(;;){
      if(digitalRead(num0)==1){
        if (num==false){
digitalWrite(LED_BUILTIN, HIGH);  digitalWrite(LED_BUILTIN, LOW); 
        }
        else{
          keyboard.tapSpecialKey(NUMLOCK); keyboard.tapSpecialKey(KEYPAD0);keyboard.tapSpecialKey(NUMLOCK);
        }
        //what to do
        break;
      }
   }
   delay(300);

  }
}
