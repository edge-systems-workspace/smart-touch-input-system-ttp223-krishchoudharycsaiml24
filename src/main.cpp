#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Krish_choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */
// TODO 1:
// Define touch sensor digital pin (Use pin 2)
const int TOUCH_PIN = 2;

// TODO 2:
// Create variable to store touch state
int touchState = 0;
void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure touch pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("TTP223 Touch Detection System Initialized");
    Serial.println("Monitoring touch input...");
}
