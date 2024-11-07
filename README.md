# Temperature Buzzer with Arduino

![Device Diagram](https://github.com/AkashRouth001/Temperature-Buzzer-with-Arduino/blob/4615fd3863ed87cb58a18cf3136b566568bf7da4/image/diagram%20pic.jpg)

### Overview 📈

The **Temperature Buzzer with Arduino** project is a simple yet effective way to monitor temperature levels and trigger an alarm when a specified threshold is crossed. This system uses an **LM35 temperature sensor** with an **Arduino microcontroller** to provide real-time temperature monitoring and alert capabilities, making it perfect for environments where temperature control is critical.

### How It Works ⚙️

- **Sensor**: The LM35 temperature sensor continuously reads the surrounding temperature.
- **Arduino Processing**: The Arduino receives the temperature data and compares it to a pre-defined threshold.
- **Alert Mechanism**: If the temperature surpasses the limit, the buzzer is triggered, alerting users instantly.

### Use Cases 🔍

This project is ideal for applications like:
- Greenhouses, where temperature control is crucial for plant growth
- Industrial setups with temperature-sensitive machinery
- Home and office spaces to prevent overheating of equipment

![Real Device](https://github.com/AkashRouth001/Temperature-Buzzer-with-Arduino/blob/4615fd3863ed87cb58a18cf3136b566568bf7da4/image/real%20image.jpg)

### Components 🛠️

- **Arduino Board** (e.g., Arduino Uno)
- **LM35 Temperature Sensor**
- **Buzzer**
- **Connecting Wires**
- **Breadboard**

### Setup and Wiring 🔌

1. **Connect the LM35 Sensor** to the Arduino's analog input.
2. **Buzzer Wiring**: Attach the positive and ground pins of the buzzer to the designated Arduino pins.
3. **Define Temperature Threshold**: Modify the threshold in the Arduino code as needed for your environment.

### Code 📜

To get started, upload the following code to your Arduino:

```cpp
// Arduino Temperature Buzzer Code

const int tempPin = A0; // LM35 temperature sensor is connected to analog pin A0
const int buzzerPin = 8; // Buzzer is connected to digital pin 8
const float thresholdTemp = 30.0; // Temperature threshold in Celsius

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(tempPin);
  float temperature = (sensorValue * 5.0 * 100.0) / 1024; // Convert to Celsius
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature > thresholdTemp) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Alert! Temperature threshold exceeded.");
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000); // Delay for 1 second before the next reading
}
```

### How to Use 🖥️

1. Set up the circuit as per the wiring instructions.
2. Upload the code to your Arduino.
3. Monitor the serial output for real-time temperature readings.
4. When the temperature exceeds the set threshold, the buzzer will sound.

### Future Improvements 🌟

- Add an **LCD screen** to display temperature readings directly on the device.
- Integrate with a **WiFi module** for remote temperature monitoring.
- Implement a **temperature logging feature** to track data over time.

### License 📝

This project is open-source and available under the MIT License. Feel free to modify and adapt it for personal or educational use.

---

With this README, your project should be easy to understand and enticing for anyone interested in temperature monitoring projects with Arduino! Let me know if you'd like to add or adjust any sections.
