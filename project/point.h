/*
*	File Name: point.h
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#ifndef POINT_H
#define POINT_H

class Point {
private:
    static int idCounter; // Static variable to generate unique IDs for each point
    int id;               // Unique ID for each point
    double x;             // X-coordinate
    double y;             // Y-coordinate

public:
    // Constructor that initializes x and y coordinates and assigns a unique ID
    Point(double x, double y);

    // Display the x and y coordinates of the point
    void display() const;

    // Getter for X-coordinate
    double getx() const;

    // Setter for X-coordinate
    void setx(double x);

    // Getter for Y-coordinate
    double gety() const;

    // Setter for Y-coordinate
    void sety(double y);

    // Function to get the number of objects of class Point
    static int counter();

    // Function to calculate the distance between two points
    double distance(const Point& other) const;

    // Static function to calculate the distance between two points (alternative version)
    static double distance(const Point& point1, const Point& point2);
	
	int getId() const;
};

#endif
