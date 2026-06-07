```cpp
#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>

Servo lockServo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {A0, A1, A2, A3};
byte colPins[COLS] = {A4, A5, 6, 7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String password = "1334";
String input = "";

void setup() {
  lcd.begin(16, 2);

  lockServo.attach(10);
  lockServo.write(0);

  lcd.print("Door Lock");
  delay(2000);

  lcd.clear();
  lcd.print("Enter Pass:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    lcd.setCursor(input.length(), 1);
    lcd.print('*');
    input += key;
  }

  if (input.length() == 4) {

    if (input == password) {
      lcd.clear();
      lcd.print("Access Granted");

      lockServo.write(90);
      delay(3000);

      lockServo.write(0);

      lcd.clear();
      lcd.print("Locked");
      delay(2000);
    }
    else {
      lcd.clear();
      lcd.print("Wrong Pass");
      delay(2000);
    }

    input = "";
    lcd.clear();
    lcd.print("Enter Pass:");
  }
}
```
