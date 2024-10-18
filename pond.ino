void setup() { // Essa função serve para que o pino 13 seja configurado como saída
  pinMode(13, OUTPUT); // Define como saída o pino 13 do arduino
}

void loop() { // Função que permite que o código fique "rodando" continuamente, repetidamente
  digitalWrite(13,HIGH); // Liga o LED
  delay(500); // Comando de delay, para esperar 500ms
  digitalWrite(13,LOW); // Desliga o LED
  delay(500); // Comando de delay, para esperar 500ms
}