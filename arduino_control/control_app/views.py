from django.shortcuts import render
import serial

# Establish serial communication with Arduino
ser = serial.Serial('COM6', 9600)  # Replace 'COM6' with the appropriate port name

def home(request):
    if request.method == 'POST':
        command = request.POST.get('command')

        # Send command to Arduino
        ser.write(command.encode())

        # Wait for Arduino response
        response = ser.readline().decode().rstrip()
        print(response)

    return render(request, 'control_app/home.html')
