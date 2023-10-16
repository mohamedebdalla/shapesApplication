/*
*	File Name: point.cpp 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#include "point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Point::idCounter = 1000; // Initialize the ID counter

// Constructor that initializes x and y coordinates and assigns a unique ID
Point::Point(double x, double y) : x(x), y(y) {
    idCounter++;
    id = idCounter;
}

// Display the x and y coordinates of the point
void Point::display() const {
    cout << "X-coordinate: " << fixed << setprecision(2) << x << endl;
    cout << "Y-coordinate: " << fixed << setprecision(2) << y << endl;
}

// Getter for X-coordinate
double Point::getx() const {
    return x;
}

// Setter for X-coordinate
void Point::setx(double x) {
    this->x = x;
}

// Getter for Y-coordinate
double Point::gety() const {
    return y;
}

// Setter for Y-coordinate
void Point::sety(double y) {
    this->y = y;
}

// Function to get the number of objects of class Point
int Point::counter() {
    return idCounter - 1000;
}

// Function to calculate the distance between two points
double Point::distance(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// Static function to calculate the distance between two points (alternative version)
double Point::distance(const Point& point1, const Point& point2) {
    double dx = point1.x - point2.x;
    double dy = point1.y - point2.y;
    return sqrt(dx * dx + dy * dy);
}

int Point::getId() const {
    return id;
}