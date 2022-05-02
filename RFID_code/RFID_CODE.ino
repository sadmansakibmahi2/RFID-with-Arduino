#include <SPI.h>
#include <MFRC522.h>
 
#define SS_PIN 5
#define RST_PIN 9
#define LED_GREEN 6 //define green LED pin
#define LED_RED 7 //define red LED
#define LED_BLUE 10 //// LED PIN BLUE
#define RELAY 2 //connect the relay to number 3 pin
#define BUZZER 8 // connect the buzzer to 2 pin

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
void setup() 
{

  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();          // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  pinMode(RELAY, OUTPUT);
  pinMode(BUZZER, OUTPUT);
 pinMode(LED_BLUE, OUTPUT);
   pinMode(LED_GREEN, OUTPUT);

  noTone(BUZZER);
  digitalWrite(RELAY, LOW);
  Serial.println("Put your card to the reader for scanning ...");
  Serial.println();

}
void loop() 
{


 
  
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "your card id") // enter your own card number after copying it from serial monitor
  {
    Serial.println("Authorized access");
 
    Serial.println();
       
     digitalWrite(RELAY, HIGH);

 {   
 digitalWrite(LED_GREEN, HIGH);
 delay(1000);
 digitalWrite(LED_GREEN, LOW);
 }
  }

}
