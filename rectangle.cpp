/*
*	File Name: rectangle.cpp 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#include "rectangle.h"
#include <iostream>
#include <iomanip>
#include "square.h"

using namespace std;

// Constructor that initializes data members with user-supplied values
Rectangle::Rectangle(double x, double y, const char* shapeName, double side_a, double side_b)
    : Square(x, y, shapeName, side_a), side_b(side_b) {}

Rectangle::Rectangle(const Rectangle& other)
    : Square(other), side_b(other.side_b) {
    // No need to copy shapeName or origin, as they are already copied by the base class constructor
}

// Assignment operator
Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this == &other) {
        return *this; // Handle self-assignment
    }

    // Copy the base class members using the base class assignment operator
    Square::operator=(other);

    // Copy the specific member
    side_b = other.side_b;

    return *this;
}

// Calculate and return the area of the rectangle
double Rectangle::area() const {
    return side_a * side_b;
}

// Calculate and return the perimeter of the rectangle
double Rectangle::perimeter() const {
    return 2 * (side_a + side_b);
}

// Getter for side_b
double Rectangle::getSideB() const {
    return side_b;
}

// Setter for side_b
void Rectangle::setSideB(double side_b) {
    this->side_b = side_b;
}


void Rectangle::display() const {
	cout << "\n***** Rectangle Object Description *****\n" << endl;
    cout << "Shape Name: " <<fixed << setprecision(2) << shapeName << endl;
    cout << "X-coordinate: "<<fixed << setprecision(2)  << origin.getx() << endl;
    cout << "Y-coordinate: " <<fixed << setprecision(2) << origin.gety() << endl;
	cout << "Side a: "<<fixed << setprecision(2) << side_a << endl;
	cout << "Side b: " <<fixed << setprecision(2) << side_b << endl;
    cout << "Area: " << fixed << setprecision(2) << area() <<endl;
    cout << "Perimeter: " <<fixed << setprecision(2) << perimeter() <<endl;
}
