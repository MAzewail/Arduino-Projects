# Arduino-Projects



# Project description:

* This project about presenting a distance sent from an ultrasonic sensor on two digits seven segments’ cells in meters and centimeters and controlled by an Arduino uno.

- The project consists of two different seven segments, the first one is used to present the number of meters sent from ultrasonic sensor and the second seven segment is used to present the centimeters.

# Problem definition:

* As known every seven segment need at least a 7 different pins from the digital I/O pins but as also known the Arduino uno have only 14 digital I/O pins, so if there are two seven segments the whole digital pins are going to occupy by the seven segments and this means that there is not any available pins for any further sensors like ultrasonic, because the ultrasonic sensor needs at least two different digital pins, one for the trig and another one for echo pin.

# Proposed solution: 

* The challenge here in such project is the limited number of pins in Arduino Uno and there are many different solutions for such problems but here the solution is very simple also helping to minimize the code and the number of used pins as well.

* As shown in the following diagram the frist seven segment has connected with just only 6 pins instead of seven and this trick had been made because the maximum distance can be measured by the ultrsonic sensor is 3 meters, So the numbers may appear on the first seven segments are 1,2,3 meters only, but according to the next representations


* These are two solutions for this porject:-


![First-number](https://github.com/MAzewail/Arduino-Projects/blob/main/Ultrsonic%20with%207%20segments%202%20digits/First-number.PNG)

![Second-number](https://github.com/MAzewail/Arduino-Projects/blob/main/Ultrsonic%20with%207%20segments%202%20digits/Second-number.PNG)

![Third-number](https://github.com/MAzewail/Arduino-Projects/blob/main/Ultrsonic%20with%207%20segments%202%20digits/Third-number.PNG)

![System_Working](https://github.com/MAzewail/Arduino-Projects/blob/main/Ultrsonic%20with%207%20segments%202%20digits/System_Working.PNG)


![Progect_Image](https://github.com/MAzewail/Arduino-Projects/blob/main/Ultrsonic%20with%207%20segments%202%20digits/Project_diagram.PNG)



