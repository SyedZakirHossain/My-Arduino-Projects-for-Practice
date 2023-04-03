import serial
import time
arduinoData = serial.Serial('com3',9600)

def led_on():
    arduinoData.write(b'1')
def led_off():
    arduinoData.write(b'0')
time.sleep(5)
"""t=0
while(t<200000):
    if(t% 10==0):
        print(t)
    t+=1"""
led_on()
print("done")