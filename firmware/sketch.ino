#include <ESP32Servo.h>

// Definicion de pines
const int pinPIR = 2;
const int pinServo = 13;
const int pinLED = 5;

// Objeto del servomotor
Servo dispensador;

// Angulos del servo
int anguloDispensa = 140;
int anguloCerrado = 40;

// Estado del comedero
bool dispensado = false;

void setup() {
  Serial.begin(115200);

  pinMode(pinPIR, INPUT);
  pinMode(pinLED, OUTPUT);

  dispensador.attach(pinServo);
  dispensador.write(anguloCerrado);

  digitalWrite(pinLED, LOW);

  Serial.println("Comedero Inteligente: Modo EN ESPERA...");
}

void loop() {
  int hayGato = digitalRead(pinPIR);

  if (hayGato == HIGH) {
    if (dispensado == false) {

      Serial.println("Gato detectado! Dispensando alimento...");

      dispensador.write(anguloDispensa);
      digitalWrite(pinLED, HIGH);

      delay(1500);

      dispensador.write(anguloCerrado);
      digitalWrite(pinLED, LOW);

      dispensado = true;

      Serial.println("Dispensacion completada. Servo cerrado.");

      delay(10000);
    }
  } else {
    if (dispensado == true) {
      dispensado = false;

      Serial.println("Sistema reiniciado. Listo para la proxima comida.");
    }

    delay(500);
  }
}
