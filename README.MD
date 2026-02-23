## Dice code for the idea machine

This C project can be used with platform.io & VSCode.

### What it does

We used ESP32 Mini boards and a MPU6050 Breakboard. 
When successfully connected, the board will measure acceleration via the MPU6050 board and send a value to the server. 
The value would be the side of the cube facing up (1,2,3,4,5 or 6), e.g. `3`, `2`.

### Setup
Downlad the github zip file, after that u have to adjust the values in `config_hidden_example.h` and rename it in `config_hidden.h` file:

Enter your network name and password as well as the corresponding IP addresses. Important: the broker IP is the IP of your MQTT broker!
In the reconnect() function, you can specify the topic for the MQTT. 

### GPIO
Connect the SDL and SDA from the microcontroller together with SDL and SDA from the MPU6050 sensor. SDA and SDL need to be connected with as a pull-up resistor to 3.3V.

### CAD
We build a small case where u can put the sensor. U will finde the .slt and .FCStd date in the CAD file.

### Usecase
Together with a Powerbank, u can sink both in any kind of dice. Check that you are viewing the correct side of the dice.
Now you have a universal cube. In the broker, you can then store any terms or numbers for the respective side.

### Code for the Raspberry Pi as a Broker
The Code for the Raspberry Pi, u can finde [here](https://github.com/technologiestiftung/idea-machine-raspi-wiesbaden)