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

3. Connect the Arduino board to your computer and upload the Arduino code (`arduino_code.ino`) located in the `arduino` directory.

4. Install the required Python packages using pip.


## Usage

1. Open a terminal and navigate to the project directory.


2. Start the Django development server.


3. Open a web browser and access the web interface at `http://localhost:8000`.

4. Use the buttons on the web page to control the LED connected to the Arduino board.

## Configuration

- If your Arduino board is connected to a different port, update the `SERIAL_PORT` variable in `views.py` to match the correct port.
