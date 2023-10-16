/*
*	File Name: square.cpp 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#include "square.h"
#include <iostream>
#include <iomanip>

using namespace std;
// Constructor that initializes data members with user-supplied values
Square::Square(int x, int y, const char* shapeName, double side_a)
    : Shape(Point(x, y), shapeName), side_a(side_a) {}

// Calculate and return the area of the square
double Square::area() const {
    return side_a * side_a;
}

// Calculate and return the perimeter of the square
double Square::perimeter() const {
    return 4 * side_a;
}

// Getter for side_a
double Square::getSideA() const {
    return side_a;
}

// Setter for side_a
void Square::setSideA(double side_a) {
    this->side_a = side_a;
}

// Override the display function to include square-specific information
void Square::display() const {
 //   Shape::display(); // Call the base class display method
	cout << "\n***** Square Object Description *****\n" << endl;
    cout << "Shape Name: " <<fixed << setprecision(2) << shapeName << endl;
    cout << "X-coordinate: " <<fixed << setprecision(2)  << origin.getx() << endl;
    cout << "Y-coordinate: " <<fixed << setprecision(2)  << origin.gety() << endl;
    cout << "Side a: " <<fixed << setprecision(2) << side_a << endl;
	cout << "Area: " << fixed << setprecision(2) << area() <<endl;
    cout << "Perimeter: " <<fixed << setprecision(2) << perimeter() << endl;
}
