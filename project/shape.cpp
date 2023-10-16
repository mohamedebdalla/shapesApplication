/*
*	File Name: shape.cpp 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/

#include "shape.h"
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

// Constructor implementation
Shape::Shape(const Point& origin, const char* name) : origin(origin) {
    this->shapeName = new char[strlen(name) + 1];
    strcpy(this->shapeName, name);
}

// Destructor implementation
Shape::~Shape() {
    delete[] shapeName;
}

// Getter for origin
const Point& Shape::getOrigin() const {
    return origin;
}

// Getter for the name of the shape
const char* Shape::getName() const {
    return shapeName;
}

// Calculate the distance between the origins of two shapes
double Shape::distance(const Shape& other) const {
    double x1 = origin.getx();
    double y1 = origin.gety();
    double x2 = other.origin.getx();
    double y2 = other.origin.gety();

    // Use the distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

// Static function to calculate the distance between the origins of two shapes
double Shape::distance(const Shape& the_shape, const Shape& other) {
    return the_shape.distance(other);
}

// Move function implementation
void Shape::move(double dx, double dy) {
    origin.setx(dx+origin.getx());
	origin.sety(dy+origin.gety());
}
