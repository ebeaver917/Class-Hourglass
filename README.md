Hi! This is a simple hourglass class that I completed as the first Project in my Object-Oriented Programming class. The class allows for an hourglass
to be created and manipulated. When an hourglass object is created, the user can choose a size for each side of the hourglass, with the max size of 39 
units and the minimum size of 1 unit, as well as the border and fill characters, all of which are taken in as parameters of the Hourglass constructor. 
The border and fill characters allowed are in ASCII range 33-126, and if the user chooses for the hourglass to have characters outside that range, the 
default border character is '#' (ASCII 35) and the default fill character is '*' (ASCII 42). If the user chooses to have the size be greater than 39, 
the size is set to 39, and if they choose for it to be less than 1, it is set to 1. 

The user can, of course, choose to print the hourglass to the screen using the Draw function, and also grow and shrink the hourglass by one unit with 
their respective functions. Finally, the user can print a summary of the hourglass, which prints the hourglass’s side size, the perimeter of the hourglass,
and the area of the hourglass. The Summary function also prints the hourglass to the console. Finally, I have included the makefile I used for UNIX compilation.
