/*
*	File Name: rectangle.h
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square {
private:
    double side_b;

public:
    // Constructor that initializes data members with user-supplied values
    Rectangle(double x, double y, const char* shapeName, double side_a, double side_b);
	Rectangle(const Rectangle& other); // Copy constructor
    Rectangle& operator=(const Rectangle& other); // Assignment operator

    // Calculate and return the area of the rectangle
    double area() const;

    // Calculate and return the perimeter of the rectangle
    double perimeter() const;

    // Getter for side_b
    double getSideB() const;

    // Setter for side_b
    void setSideB(double side_b);

    // Override the display function to include rectangle-specific information
    void display() const;
};

#endif
