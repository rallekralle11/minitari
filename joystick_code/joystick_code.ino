  #include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(16)){
    Keyboard.press(KEY_UP_ARROW);
  }
  else{
    Keyboard.release(KEY_UP_ARROW);
  }

  if(!digitalRead(1)){
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  
  if(!digitalRead(4)){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  else{
    Keyboard.release(KEY_DOWN_ARROW);
  }

  if(!digitalRead(23)){
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else{
    Keyboard.release(KEY_LEFT_ARROW);
  }

  if(!digitalRead(22)){
    Keyboard.press(KEY_RETURN);
  }
  else{
    Keyboard.release(KEY_RETURN);
  }
}
