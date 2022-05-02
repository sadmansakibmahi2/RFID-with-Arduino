
# RFID with Arduino

This is a simple RFID project . This project can be used to make digital lock.


## License

[MIT License](https://github.com/git/git-scm.com/blob/main/MIT-LICENSE.txt)



## Software Used in this project

Please Install this softwares

[Arduino IDE](https://www.arduino.cc/en/software)

## library requirements

Please download the repository

[RFID-with-Arduino](https://github.com/sadmansakibmahi2/RFID-with-Arduino)

unzip the file then go to libraries.zip . then unzip it copy every thing. 

Then open

<img width="50%" img hight="50%" src="https://github.com/sadmansakibmahi2/RFID-with-Arduino/blob/main/IMAGES/Screenshot_3.png">

```bash
  \Arduino\libraries
```

paste every thing in this folder . if you are getting skip or replace error then click replace button

<img width="50%" img hight="50%" src="https://github.com/sadmansakibmahi2/RFID-with-Arduino/blob/main/IMAGES/Screenshot_1.png">

## Components and Connections

[1 Channel 5V](https://techshopbd.com/detail/2605/1_Channel_5V_Relay_Module_(China)_techshop_bangladesh)

[MFRC-522 RFID Module](https://techshopbd.com/detail/2218/MFRC-522_RFID_Module_techshop_bangladesh)

[ARDUINO](https://techshopbd.com/browse/search?term=Arduino%20uno)

[Buzzer](https://techshopbd.com/browse/search?term=Arduino%20uno)

[DC 12V Solenoid Electric Door Lock](https://techshopbd.com/detail/1878/DC_12V_Solenoid_Electric_Door_Lock_techshop_bangladesh)

[Power Adapter 12V](https://techshopbd.com/detail/1501/Power_Adapter_12V_techshop_bangladesh)

### RFID CONNECTIONS:

| RFID PIN | ARDUINO PIN |
| ------------- | ------------- |
|  3.3V | PIN 3.3V  |
| GND  | GND |
|  NC | NO CONNECTION  |
|  MISO | PIN 12  |
| MOSI  | PIN 11 |
| SCK  | PIN 13  |
|  SDA | PIN 5  |
|  RST | PIN 9 |


<img width="60%" img hight="60%" src="https://github.com/sadmansakibmahi2/RFID-with-Arduino/blob/main/IMAGES/rfid.jpg">


### RELAY  CONNECTIONS:

| RELAY | ARDUINO PIN |
| ------------- | ------------- |
| VCC   | 5V  |
| GND   | GND |
| IN(Signal) | DIGITAL PIN 2  |




<img width="40%" img hight="40%" src="https://github.com/sadmansakibmahi2/RFID-with-Arduino/blob/main/IMAGES/realy.jpg">

### BUZZER CONNECTIONS:

| BUZZER | ARDUINO PIN |
| ------------- | ------------- |
| VCC (+)  | DIGITAL PIN 8  |
| GND   | GND |

### POWER SUPPLY CONNECTION:

| Power_Adapter_12V | ARDUINO PIN |
| ------------- | ------------- |
| VCC (+)  | ARDUINO VCC  |
| GND   | GND |

<img width="40%" img hight="40%" src="https://github.com/sadmansakibmahi2/RFID-with-Arduino/blob/main/IMAGES/RELAY%20CONNECTION.jpg">

### DC 12V Solenoid Electric Door Lock CONNECTIONS: 

| 12V Solenoid Electric Door Lock | RELAY AND POWER SUPPLY |
| ------------- | ------------- |
| RED WIRE  | RELAY COM  |
| BACK WIRE   | POWER SUPPLY (-) |

  CONNECT RELAY (NO PIN)  TO  POWER SUPPLY (+) /VCC
