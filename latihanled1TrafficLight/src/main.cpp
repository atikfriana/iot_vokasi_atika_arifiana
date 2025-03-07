#include <Arduino.h>  // Pustaka untuk ESP32

// Deklarasi pin LED
int lampuMerah = 33;
int lampuKuning = 27;
int lampuHijau = 26;

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Traffic Light Simulation");

    // Atur pin sebagai OUTPUT
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Lampu merah menyala (kendaraan berhenti)
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Lampu Merah ON - Kendaraan Berhenti");
    delay(5000);

    // Lampu hijau menyala (kendaraan jalan)
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Lampu Hijau ON - Kendaraan Jalan");
    delay(5000);

    // Lampu kuning menyala (peringatan)
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Lampu Kuning ON - Peringatan");
    delay(2000);
}
