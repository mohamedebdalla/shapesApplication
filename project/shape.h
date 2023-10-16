/*
*	File Name: shape.h 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
protected:
    Point origin;
    char* shapeName;

public:
	
	virtual double area() const = 0;
    virtual double perimeter() const = 0;
	virtual void display() const = 0;
    // Constructor that initializes data members including shapeName
    Shape(const Point& origin, const char* name);

    // Destructor to deallocate dynamically allocated memory
    ~Shape();

    // Getter for origin
    const Point& getOrigin() const;

    // Getter for the name of the shape
    const char* getName() const;

    // Display function to print shape's name and origin
   // void display() const;

    // Two distance functions
    double distance(const Shape& other) const;
    static double distance(const Shape& the_shape, const Shape& other);

    // Move function to change the position of the shape
    void move(double dx, double dy);
};

#endif
