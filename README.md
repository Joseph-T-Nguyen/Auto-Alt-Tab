# Auto-Alt-Tab
Alt tabs to a new window when motion is detected within 20cm

Usage instructions:
1. Make sure you have `python` and the relevant packages installed.
* You will need the `serial` library to allow access to serial ports: `pip install pyserial`
* You will need the `pyautogui` library to allow keyboard/mouse inputs: `pip install pyautogui`
2. Upload the code to the arduino first, and then close the arduino IDE: serial communication requires the COM port to be available and both programs cannot be run simultaneously.
3. Execute the python script by running: `py script.py`

![](media/demo.mp4)