 // You could use a spare Hardware Serial on boards that have it (like Mega)
 #include <SoftwareSerial.h>
 SoftwareSerial DebugSerial(2, 3); // RX, TX

 #define BLYNK_PRINT DebugSerial
 #include <BlynkSimpleStream.h>

 // You should get Auth Token in the Blynk App.
 // Go to the Project Settings (nut icon).
 char auth[] = "CLiauuOEEayLFBVrf4XXn3anaprU40qB";

 void setup()
 {
   // Debug console
   DebugSerial.begin(9600);

   // Blynk will work through Serial
   Serial.begin(9600);
   Blynk.begin(auth, Serial);
 }

 void loop()
 {
   Blynk.run();
 }
