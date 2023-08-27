# Auto-Alt-Tab
Alt tabs to a new window when motion is detected within 20cm

Usage instructions:
1. Make sure you have `python` and the relevant packages installed.
* You will need the `serial` library to allow access to serial ports: `pip install pyserial`
* You will need the `pyautogui` library to allow keyboard/mouse inputs: `pip install pyautogui`
2. Upload the code to the arduino first, and then close the arduino IDE: serial communication requires the COM port to be available and both programs cannot be run simultaneously.
3. In the python script, change the variable `comport` to be your device's port number. 
4. Execute the python script by running: `py script.py`

# Demo Video
https://github.com/Joseph-T-Nguyen/Auto-Alt-Tab/assets/129492079/d650bf42-2612-47bf-8d5f-3106b1257355

