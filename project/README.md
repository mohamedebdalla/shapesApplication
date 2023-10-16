# shapesApplication

Inheritance and Geometric Shapes Application

Project Overview

This C++ application explores the principles of inheritance and object-oriented design within the realm of geometric shapes. The project establishes a class hierarchy to model various shapes, including Points, Squares, and Rectangles, using inheritance to capture shared properties and behaviors. It serves as a comprehensive example of object-oriented programming concepts applied to practical problem-solving.

Key Objectives:

Implement inheritance and object-oriented design in C++.
Create a hierarchy of classes to represent geometric shapes.
Develop functions for performing common geometric computations.
Demonstrate knowledge of encapsulation, dynamic memory allocation, and function overloading.

Project Structure

Point:
A class representing a point in a Cartesian plane.
Manages x and y coordinates and auto-assigns unique ID numbers.
Provides member functions for displaying coordinates, object counting, and distance calculation.
Shape:
The base class for geometric shapes, with common attributes.
Contains an object of the Point class for the shape's origin.
Supports dynamic memory allocation for a shape name.
Implements functions for display, distance calculation, and repositioning.
Square:
Derived from the Shape class, specializing in square shapes.
Manages the side length and includes functions for area and perimeter calculations.
Rectangle:
Derived from the Square class, extending support to rectangular shapes.
Includes an additional side length (side_b) and supports area and perimeter calculations for rectangles.
GraphicsWorld:
A class serving as the entry point for the application.
Contains the run function for testing all classes and their functions.
Demonstrates the practical application of inheritance and geometric calculations.
Building and Running the Application
To build and run the application, follow these steps:

Clone this repository to your local machine.
Ensure you have a C++ compiler installed.
Navigate to the project directory.
Compile the source files using the appropriate C++ compiler commands.
Execute the compiled program.
Follow on-screen prompts to interact with the application and explore geometric shapes and calculations.
shell
Copy code
$ g++ -o main main.cpp point.cpp shape.cpp square.cpp rectangle.cpp
$ ./main
Author
Mohamed Ebdalla