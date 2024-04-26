#include <Arduino.h>

// put function declarations here:
/*int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}*/

#include <QTRSensors.h>

//#include <stdint.h>

// This example is designed for use with eight RC QTR sensors. These
// reflectance sensors should be connected to digital pins 3 to 10. The
// sensors' emitter control pin (CTRL or LEDON) can optionally be connected to
// digital pin 2, or you can leave it disconnected and remove the call to
// setEmitterPin().
//
// The setup phase of this example calibrates the sensors for ten seconds and
// turns on the Arduino's LED (usually on pin 13) while calibration is going
// on. During this phase, you should expose each reflectance sensor to the
// lightest and darkest readings they will encounter. For example, if you are
// making a line follower, you should slide the sensors across the line during
// the calibration phase so that each sensor can get a reading of how dark the
// line is and how light the ground is.  Improper calibration will result in
// poor readings.
//
// The main loop of the example reads the calibrated sensor values and uses
// them to estimate the position of a line. You can test this by taping a piece
// of 3/4" black electrical tape to a piece of white paper and sliding the
// sensor across it. It prints the sensor values to the serial monitor as
// numbers from 0 (maximum reflectance) to 1000 (minimum reflectance) followed
// by the estimated location of the line as a number from 0 to 5000. 1000 means
// the line is directly under sensor 1, 2000 means directly under sensor 2,
// etc. 0 means the line is directly under sensor 0 or was last seen by sensor
// 0 before being lost. 5000 means the line is directly under sensor 5 or was
// last seen by sensor 5 before being lost.

QTRSensors qtr;
/*
//QTRSensorsRC qtrrc((unsigned char[]) {0, 9, 15, 17}, 4);
const uint8_t SensorCount = 8;
uint16_t sensorValues[SensorCount];

void setup()
{

  //pins de l'Arduino 

  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);


  // configure the sensors
  qtr.setTypeRC();
  qtr.setSensorPins((const uint8_t[]){3, 4, 5, 6, 7, 8, 9, 10}, SensorCount);
  qtr.setEmitterPin(2);

  delay(500);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH); // turn on Arduino's LED to indicate we are in calibration mode

  // 2.5 ms RC read timeout (default) * 10 reads per calibrate() call
  // = ~25 ms per calibrate() call.
  // Call calibrate() 400 times to make calibration take about 10 seconds.
  for (uint16_t i = 0; i < 400; i++)
  {
    qtr.calibrate();
  }
  digitalWrite(LED_BUILTIN, LOW); // turn off Arduino's LED to indicate we are through with calibration

  // print the calibration minimum values measured when emitters were on
  Serial.begin(9600);
  for (uint8_t i = 0; i < SensorCount; i++)
  {
    Serial.print(qtr.calibrationOn.minimum[i]);
    Serial.print(' ');
  }
  Serial.println();

  // print the calibration maximum values measured when emitters were on
  for (uint8_t i = 0; i < SensorCount; i++)
  {
    Serial.print(qtr.calibrationOn.maximum[i]);
    Serial.print(' ');
  }
  Serial.println();
  Serial.println();
  delay(1000);
}

void loop()
{
  // read calibrated sensor values and obtain a measure of the line position
  // from 0 to 5000 (for a white line, use readLineWhite() instead)
  uint16_t position = qtr.readLineBlack(sensorValues);

  // print the sensor values as numbers from 0 to 1000, where 0 means maximum
  // reflectance and 1000 means minimum reflectance, followed by the line
  // position
  for (uint8_t i = 0; i < SensorCount; i++)
  {
    Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  Serial.println(position);

  delay(250);
}*/

// This example is designed for use with eight RC QTR sensors. These
// reflectance sensors should be connected to digital pins 3 to 10. The
// sensors' emitter control pin (CTRL or LEDON) can optionally be connected to
// digital pin 2, or you can leave it disconnected and remove the call to
// setEmitterPin().
//
// The main loop of the example reads the raw sensor values (uncalibrated). You
// can test this by taping a piece of 3/4" black electrical tape to a piece of
// white paper and sliding the sensor across it. It prints the sensor values to
// the serial monitor as numbers from 0 (maximum reflectance) to 2500 (minimum
// reflectance; this is the default RC timeout, which can be changed with
// setTimeout()).

/*QTRSensors qtr;
*/
const uint8_t SensorCount = 8;
uint16_t sensorValues[SensorCount];

void setup()
{

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // configure the sensors
  qtr.setTypeRC();
  qtr.setSensorPins((const uint8_t[]){3, 4, 5, 6, 7, 8, 9, 10}, SensorCount);
  qtr.setEmitterPin(2);

  digitalWrite(2,HIGH);

  Serial.begin(9600);
}


void loop()
{
  // read raw sensor values
  qtr.read(sensorValues);

  // print the sensor values as numbers from 0 to 2500, where 0 means maximum
  // reflectance and 2500 means minimum reflectance
  for (uint8_t i = 0; i < SensorCount; i++)
  {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
   digitalWrite(3, HIGH); // sets the digital pin 13 on
              // waits for a second
   digitalWrite(4, HIGH); // sets the digital pin 13 on
              // waits for a second
   digitalWrite(5, HIGH); // sets the digital pin 13 on
            // waits for a second
   digitalWrite(6, HIGH); // sets the digital pin 13 on
             // waits for a second
   digitalWrite(7, HIGH); // sets the digital pin 13 on
             // waits for a second
   digitalWrite(8, HIGH); // sets the digital pin 13 on
             // waits for a second
   digitalWrite(9, HIGH); // sets the digital pin 13 on
            // waits for a second
   digitalWrite(10, HIGH); // sets the digital pin 13 on
            // waits for a second*/
     pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
    Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  Serial.println();

  delay(250);
}
