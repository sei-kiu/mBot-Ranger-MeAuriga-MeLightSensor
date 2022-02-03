#include <Arduino.h>
#include <MeAuriga.h>

MeLightSensor lightsensor_2(11);
MeLightSensor lightsensor_1(12);

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:

  Serial.print(" Light_Sensor_2: ");
  Serial.print(lightsensor_2.read());
  Serial.print(" Light_Sensor_1: ");
  Serial.println(lightsensor_1.read());
}