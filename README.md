## color_detection

The following project is about detecting color and making controller perform certain action based on color detected or movement of the object of a particular color.

We here use arduino UNO controller and matlab which is used for image processing.

Arduino UNO is connected to  laptop using usb port and communicates serially with Matlab Software. Matlab uses laptops Integrated camera to detect the object of a particular color.

Arduino UNO also has an electric motor interfaced with it through a motor driver. 

Matlab detects the movement of the colored object using laptops camera and sends command serially to arduino. Based on the command received the UNO controller turns the electric motor in particular direction.

There are two seperate logics or codes one to be implemented in matlab and the other governs the UNO controller.

Codes have been provided. You however need to change the COM port in the Matlab code. Since the communication port may be different for your system. Also using matlab as image processing tool, to detect an object of particular color, you need to seperate the R, G and B components and specify the minimum and maximum values in vartable I in the code.

Such color detection can also be used to perform action in your own laptop such as moving mouse cursor by moving the object in front of camera ie cursor moves right if the object moves right and likewise left for object moving left.
