# Sinking-ship-OpenGL
This project “Ship simulation” aims at drawing virtual sailing ship with moving 
waves and lightning. This project has day mode, afternoon mode, night mode and midnight 
mode. The ship restarts when mouse function for restart is called. This project works mainly 
mouse function which is used to change the color of the background and also restart the ship. 
This project is developed using C programming and this project is also supported by C++ 
programming as well. This can be implemented using Windows and Ubuntu platform. 
“Ship simulation” project is designed by graphics software system called OpenGL 
which is widely accepted for developing graphic application. Using the functions of OpenGL 
users can create geometrical objects and can use translation, rotation, scaling with respect to 
the co-ordinate system. 

In this project I have created a simple light using “OpenGL” functional API by the  help of built in the functions present in the header file. To provide functionality to the project  I have written sub functions. These functions provide us the efficient way to design the  project.

User Defined Functions 
void update() : This function is used to display lightning and update speed of ship. 
void display() : This function is used display the screen and call display1(). 
void display1() : This function is used display the ship. 
void restart() : This function is used to take the ship back to initial position. 
void draw_circle() : This function is used to draw circle whenever it is required.
void water() : This function is used to draw water. 
void ship() : This function is used to draw ship and Indian flag. 
void myinit() : This function initializes OpenGL’s rendering modes. 
void createMenu() : This function is used to create menu.
