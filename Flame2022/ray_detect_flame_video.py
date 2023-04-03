import cv2
#import os
#import numpy as np
import serial
#import time

arduinoData = serial.Serial('com3', 9600)
def led_on():
    arduinoData.write(b'1')


def led_off():
    arduinoData.write(b'0')
    #time.sleep(2)

# Load the cascade
flame_cascade = cv2.CascadeClassifier('fcascade.xml')

# To capture video from webcam. 
cap = cv2.VideoCapture(0)
# To use a video file as input 
# cap = cv2.VideoCapture('filename.mp4')

while True:
    # Read the frame
    _, img = cap.read()
    # Convert to grayscale
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    # Detect the faces
    flame = flame_cascade.detectMultiScale(gray, 1.9, 5)
    # Draw the rectangle around each face
    for (x, y, w, h) in flame:
        cv2.rectangle(img, (x, y), (x + w, y + h), (200, 10, 0), 4)

        # Display
        cv2.imshow('img', img)
        led_on()
    # cv2.waitKey(0)
    # Stop if escape key is pressed
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break




cap.release()
cv2.destroyAllWindows()
