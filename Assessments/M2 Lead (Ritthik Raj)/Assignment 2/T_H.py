import random
import time
print("-------Assignment 2-------")
while True:
    t=random.randint(70,100)
    print("Temperature (F) : ",t,chr(176),"F",sep='')
    h=random.randint(10,100)
    print("Temperature (C) : " ,(((t-32)*5)//9),chr(176),"C",sep='')
    print("Humidity : ",h,"%")
    time.sleep(5)
    print("--------------------------")