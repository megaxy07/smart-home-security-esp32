
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define PIR_PIN 27
#define REED_PIN 26

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(
  SCREEN_WIDTH, SCREEN_HEIGHT,
  &Wire, OLED_RESET
);

// Change to HIGH if your reed module
// gives the opposite output.


void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(REED_PIN, INPUT_PULLUP);

  Wire.begin(21, 22);

  if (!display.begin(
    SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(10, 20);
  display.println("HOME SECURITY");
  display.println("Initializing...");
  display.display();

  delay(2000);
}

void loop() {

  int motion = digitalRead(PIR_PIN);
  int reed = digitalRead(REED_PIN);

  bool doorOpen = (reed == LOW);

  String status;

  if (doorOpen && motion == HIGH) {
    status = "INTRUSION ALERT";
  }
  else if (doorOpen) {
    status = "DOOR OPEN";
  }
  else if (motion == HIGH) {
    status = "MOTION DETECTED";
  }
  else {
    status = "SYSTEM SECURED";
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("SMART HOME SECURITY");
  display.drawLine(0, 12, 127, 12, SSD1306_WHITE);

  display.setCursor(0, 20);
  display.print("Door: ");
  display.println(doorOpen ? "OPEN" : "CLOSED");

  display.print("Motion: ");
  display.println(motion == HIGH ? "YES" : "NO");

  display.drawLine(0, 40, 127, 40, SSD1306_WHITE);

  display.setCursor(0, 48);
  display.println(status);

  display.display();

  Serial.print("Door: ");
  Serial.print(doorOpen ? "OPEN" : "CLOSED");
  Serial.print(" | Motion: ");
  Serial.print(motion);
  Serial.print(" | Status: ");
  Serial.println(status);

  delay(200);
}
