# Note: Before executing the script, make sure arduino IDE is closed
# Serial communication => requires COM port to be available and both programs cannot be run simultaneously
# Upload code to Uno and close program

import serial       # allows access to serial ports 
import pyautogui    # allows keyboard/mouse inputs

signal_character = b'A' # 'A' is the signal from arduino side
                        #  the 'b' indicates that the string should 
                        # be treated as a bytes literal in Python. 
                        # When you send data over a serial connection, 
                        # it's important to handle the data types 
                        # correctly on both the sending and receiving ends.

comport = "COM7"        # CHANGE THIS 
ser = serial.Serial(comport, 9600);  

while True:
    if ser.read() == signal_character:
        pyautogui.hotkey('alt', 'tab')