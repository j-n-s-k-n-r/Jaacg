#include <DHT.h>
#include <dht11.h>

//Benennen der Sensoren

//#####DHT11#####
dht11 DHT11A;
//Pinbelegung DHT11
#define DHT11APIN 2

//#####DHT22#####
#define DHTTYPE DHT22
//Pinbelegung
#define DHT22APIN 3
#define DHT22BPIN 4
//Objekterzeugung
DHT DHT22A(DHT22APIN, DHTTYPE);
DHT DHT22B(DHT22BPIN, DHTTYPE);


void setup(){

  Serial.begin(9600); // Baudrate auf 9600 Baud festgelegt
  Serial.println("Start Jaacg");
  Serial.println("Phase 1");
  delay(6000);  
}

void loop()
{

    Serial.println("Sensor DHT11 A");
    Serial.println("Temperatur (°C):");
    Serial.println((float)DHT11A.temperature, 2);
    Serial.println("Luftfeuchtigkeit (%):");
    Serial.println((float)DHT11A.humidity, 2);

    Serial.println("Sensor DHT22 A");
    Serial.println("Temperatur (°C):");
    Serial.println(DHT22A.readTemperature());
    Serial.println("Luftfeuchtigkeit (%):");
    Serial.println(DHT22A.readHumidity());

    Serial.println("Sensor DHT22 B");
    Serial.println("Temperatur (°C):");
    Serial.println(DHT22B.readTemperature());
    Serial.println("Luftfeuchtigkeit (%):");
    Serial.println(DHT22B.readHumidity());

    //Alle Sensoren abgefragt +6000 delay
    Serial.println("Alle Sensoren abgefragt!");
    delay(6000);

}

























