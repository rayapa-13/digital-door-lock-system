Digital Door Lock System

## Project Overview

This project is a password-protected digital door lock system developed using Arduino Uno, a 4x4 keypad, a 16x2 LCD display, and a servo motor. Users can enter a password through the keypad, and the system verifies the entered password before granting access.

When the correct password is entered, the servo motor rotates to simulate unlocking a door and the LCD displays an access granted message. If an incorrect password is entered, the system displays an access denied message.

## Components Used

* Arduino Uno
* 4x4 Matrix Keypad
* 16x2 LCD Display
* 10k Potentiometer
* Servo Motor
* Jumper Wires

## Features

* Password-based authentication
* LCD display for user interaction
* Servo motor-controlled locking mechanism
* Access Granted and Access Denied notifications
* Automatic relocking after successful access

## Working

1. The system prompts the user to enter a password.
2. The keypad is used to enter a 4-digit password.
3. Arduino stores the entered password temporarily.
4. The entered password is compared with the stored password.
5. If the password is correct:

   * Access is granted.
   * The servo motor rotates to unlock the door.
   * After a short delay, the servo returns to the locked position.
6. If the password is incorrect:

   * Access is denied.
   * The door remains locked.

## Circuit Connections

### LCD Connections

* RS → Pin 12
* E → Pin 11
* D4 → Pin 5
* D5 → Pin 4
* D6 → Pin 3
* D7 → Pin 2

### Servo Motor

* Signal → Pin 10

### Keypad

* Rows → A0, A1, A2, A3
* Columns → A4, A5, 6, 7

## Skills Learned

* Arduino Programming
* Embedded Systems Basics
* Keypad Interfacing
* LCD Interfacing
* Servo Motor Control
* Password Verification Logic
* Hardware-Software Integration

## Future Improvements

* RFID-based door lock
* Buzzer alarm for incorrect attempts
* Password change functionality
* ESP32-based IoT door lock
* Mobile app integration

## Simulation

This project was designed and tested using Tinkercad Circuits.
