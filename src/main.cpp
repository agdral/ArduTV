#include "func_keys.h"
#include "keys_samsung.h"
#include "keys_sony.h"
#include "remote.h"
#include "variables.h"
#include <Arduino.h>
#include <IRremote.hpp>

SEND_FUNCTION(SAMSUNG, SS)
SEND_FUNCTION(SONY, SN)

void printInfo(int marca, int codigo);

void setup() { Serial.begin(9600); }

void loop() {
  while (Serial.available() == 0)
    ;
  String datos = Serial.readString();
  int marca, codigo;
  sscanf(datos.c_str(), "%d,%d", &marca, &codigo);
  printInfo(marca, codigo);
  if (marca == SAMSUNG_D) {
    IrSender.setSendPin(3);
    send_SAMSUNG(codigo);
  } else if (marca == SONY_D) {
    IrSender.setSendPin(5);
    send_SONY(codigo);
  };
}

void printInfo(int marca, int codigo) {
  Serial.print("Marca: ");
  Serial.println(getNameVariable(marca));

  Serial.print("codigo: ");
  Serial.println(getNameVariable(codigo));
}
