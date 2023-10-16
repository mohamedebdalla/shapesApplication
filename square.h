/*
*	File Name: square.h 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
protected:
    double side_a;

public:
    // Constructor that initializes data members with user-supplied values
    Square(int x, int y, const char* shapeName, double side_a);
	

    // Override the display function to include square-specific information
    void display() const;

    // Calculate and return the area of the square
    double area() const;

    // Calculate and return the perimeter of the square
    double perimeter() const;

    // Getter for side_a
    double getSideA() const;

    // Setter for side_a
    void setSideA(double side_a);
};

#endif
