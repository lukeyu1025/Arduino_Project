# Arduino Control Project

This project allows you to control an Arduino board remotely using a web interface.

## Features

- Turn on/off an LED connected to the Arduino board using a web button.
- Provides real-time feedback on the LED status.
- Easy-to-use interface for controlling the LED.

## Requirements

- Arduino board (compatible with the Arduino IDE).
- Python 3.x installed on your computer.
- Required Python packages: Django, pyserial.

## Installation

1. Clone this repository to your local machine.
git clone https://github.com/lukeyu1025/Arduino_Project.git

2. Connect the Arduino board to your computer and upload the Arduino code (`arduino_code.ino`) located in the `arduino` directory.

3. Install the required Python packages using pip.
pip install django pyserial

## Usage

1. Open a terminal and navigate to the project directory
   
   ```
   cd arduino-control
   ```

3. Start the Django development server.

   ```
   python manage.py runserver
   ```

3. By default, the web interface will be accessible at `http://localhost:8000`.

4. To access the web interface on other devices in the local network, follow these steps:

   - Determine the IP address of the computer running the Django server. You can find the IP address by running the following command in the terminal:

     ```
     ipconfig (Windows)
     ifconfig (Mac/Linux)
     ```

   - Update the `ALLOWED_HOSTS` setting in `settings.py` to include the IP address. Open the `settings.py` file and locate the `ALLOWED_HOSTS` variable. Add the IP address to the list, separated by commas.

   - Start the Django development server again:

     ```
     python manage.py runserver
     ```

   - Now, you can access the web interface from other devices in the local network using the IP address of the computer running the server. For example, if the IP address is `192.168.0.100`, you can access the web interface at `http://192.168.0.100:8000`.

## Configuration

- If your Arduino board is connected to a different port, update the `SERIAL_PORT` variable in `views.py` to match the correct port.


