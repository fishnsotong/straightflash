from Tkinter import *
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setup(12, GPIO.IN, pull_up_down=GPIO.PUD_UP) # for the button
GPIO.setup(18, GPIO.OUT) # for the servo motor
pwm = GPIO.PWM(18, 100)
pwm.start(5)

while True:
    input_state = GPIO.input(18)

    if input_state == False:
        print('Button Pressed')
        angle = 0
        pwm.ChangeDutyCycle(duty)
        duty = float(angle) / 10.0 + 2.5
        time.sleep(0.2)
    elif duty input state == True:
        angle = 180
        pwm.ChangeDutyCycle(duty)
        duty = float(angle) / 10.0 + 2.5
        time.sleep(0.2)

root = Tk()
root.wm_title('Vending Machine Control')
app = App(root)
root.geometry("200x50+0+0")
root.mainloop()

# switch program below
