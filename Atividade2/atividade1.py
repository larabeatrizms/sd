import serial #Serial imported for Serial communication
import time #Required to use delay functions
 
ArduinoSerial = serial.Serial('/dev/ttyACM0',9600) #Create Serial port object called arduinoSerialData
while True: #Do this forever
    ArduinoSerial.reset_input_buffer()
    var = ArduinoSerial.readline()
    print (var) #print the intput for confirmation
    
    if (int(var) < 255) : #if the value is 1
        ArduinoSerial.write('0') #send 1
        time.sleep(1)
        
    
    if (int(var) >= 255 and int(var) < 512): #if the value is 0
        ArduinoSerial.write('1') #send 0
        time.sleep(1)
    
    if (int(var) >= 512 and int(var) < 750): #if the value is 0
        ArduinoSerial.write('2') #send 0
        time.sleep(1)

    
    if (int(var) >= 750 and int(var) < 1024): #if the value is 0
        ArduinoSerial.write('3') #send 0
        time.sleep(1)