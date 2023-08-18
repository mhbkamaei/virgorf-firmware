import serial

ser = serial.Serial('COM9', 1000000)
#ser = serial.Serial('/dev/ttyUSB0', 1000000)
while(1):
    ser.write(b's')
    data = ser.readline(9)
    print(data)
