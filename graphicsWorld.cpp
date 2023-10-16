/*
*	File Name: graphicsWorld.cpp 
*	Assignment: Lab 2 Exercise B
*	Lab Section: B02
*	Completed by: Mohamed Ebdalla, Raisa Rafi
*	Submission Date: Oct 02, 2023 
*/
#include "graphicsWorld.h"
#include <iostream>

void GraphicsWorld::run() {
    // Test the Point class
    #if 1
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9);
	std::cout << "\n***** Testing ID *****\n" << std::endl;
	std::cout << "Object m is supposed to have an id of 1001" << std::endl;
	std::cout << "Object n is supposed to have an id of 1002" << std::endl;
	std::cout << "Object m's id is: " << m.getId() << std::endl;
	std::cout << "Object n's id is: " << n.getId() << std::endl;
	std::cout << "\n***** Testing Object Counter *****\n" << std::endl;
	std::cout << "The expected number of object's is 2" << std::endl;
	std::cout << "The actual number of object's is: " << m.counter() << std::endl;
	std::cout << "\n***** Testing Distance *****\n" << std::endl;
    std::cout << "Expected to display the distance between m and n is: 3" << std::endl;
    std::cout << "The distance between m and n is: " << m.distance(n) << std::endl;
    std::cout << "Expected second version of the distance function also print: 3" << std::endl;
    std::cout << "The distance between m and n is again: " << Point::distance(m, n) << std::endl;
	std::cout << "\n***** Testing Display *****\n" << std::endl;
	m.display();
    #endif

    // Test the Square class
    #if 1
    std::cout << "\n\nTesting Functions in class Square:" << std::endl;
    Square s(5, 7, "SQUARE - S", 12);
    s.display();
    #endif

    // Test the Rectangle class
    #if 1
    std::cout << "\nTesting Functions in class Rectangle:" << std::endl;
    Rectangle a(5, 7, "RECTANGLE A", 12, 15);
    a.display();
    Rectangle b(16, 7, "RECTANGLE B", 8, 9);
    b.display();
    double d = a.distance(b);
    std::cout << "Distance between rectangles a, and b is: " << d << std::endl;
    Rectangle rec1 = a;
    rec1.display();
    std::cout << "\nTesting assignment operator in class Rectangle:" << std::endl;
    Rectangle rec2(3, 4, "RECTANGLE rec2", 11, 7);
    rec2.display();
    rec2 = a;
    a.setSideB(200);
    a.setSideA(100);
    std::cout << "\nExpected to display the following values for object rec2:" << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\nX-coordinate: 5\nY-coordinate: 7\n"
              << "Side a: 12\nSide b: 15\nArea: 180\nPerimeter: 54\n";
    std::cout << "\nIf it doesn't, there is a problem with your assignment operator." << std::endl;
    rec2.display();
    std::cout << "\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);
    rec3.display();
    a.setSideB(300);
    a.setSideA(400);
    std::cout << "\nExpected to display the following values for object rec2:" << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\nX-coordinate: 5\nY-coordinate: 7\n"
              << "Side a: 100\nSide b: 200\nArea: 20000\nPerimeter: 600\n";
    std::cout << "\nIf it doesn't, there is a problem with your assignment operator." << std::endl;
    rec3.display();
    #endif

    // Test using an array of pointers and polymorphism
    #if 1
    std::cout << "\nTesting array of pointers and polymorphism:" << std::endl;
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
    #endif
}

int main() {
    GraphicsWorld world;
    world.run();
    return 0;
}