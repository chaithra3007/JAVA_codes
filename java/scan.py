import cv2
from pyzbar.pyzbar import decode 
import time


cap=cv2.imread("123.png")
for code in decode(cap):
    print(code.data.decode('utf-8'))
    time.sleep(15)
