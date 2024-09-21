// Program Arduino untuk membuat LED berkedip setiap 1 detik

// Deklarasi pin yang digunakan untuk LED
int ledPin = 13;

void setup() {
  // Menyiapkan pin 13 sebagai output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Menyalakan LED
  digitalWrite(ledPin, HIGH);
  // Menunggu selama 1 detik (1000 milidetik)
  delay(1000);
  // Mematikan LED
  digitalWrite(ledPin, LOW);
  // Menunggu selama 1 detik (1000 milidetik)
  delay(1000);
}
