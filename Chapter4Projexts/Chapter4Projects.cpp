#include <iostream>

//Geometry calculator
int main() {

    //variables
    int menuOption;
    double area;
    const double pi = 3.14159;

    //loop for menu options
    do {
        std::cout << "\nGeometry Calculator\n"
            << "\t1. Calculate the Area of a Circle\n"
            << "\t2. Calculate the Area of a Rectangle\n"
            << "\t3. Calculate the Area of a Triangle\n"
            << "\t4. Quit\n"
            << "Enter your choice (1-4): ";
        std::cin >> menuOption;
        //Error message for invalid option
        if (menuOption < 1 || menuOption > 4) {
            std::cout << "Invalid option. Please enter a number between 1 and 4.\n";
        }
        //Keep asking if input is invalid
    } while (menuOption < 1 || menuOption > 4); 

    //switch for menu options
    switch (menuOption)
    {
        case 1: {
            //area = pi(r)^2 Calculate for area of a circle
            double radius;

            std::cout << "Input radius:\n";
            std::cin >> radius;

            if (radius < 0) {
                std::cout << "Radius cannot be negative." << std::endl;
            }
            else {
                area = pi * radius * radius;

                std::cout << "The area of the circle is " << area << std::endl;
            }
            break;
        }
        case 2: {
            //area = length * width Calculate for area of a rectangle
            double length, width;

            std::cout << "Input length of rectangle\n";
            std::cin >> length;
            std::cout << "Input width of rectangle\n";
            std::cin >> width;

            if (length < 0 || width < 0) {
                std::cout << "Value cannot be negative." << std::endl;
            }
            else {
                area = length * width;
                std::cout << "The area of the rectangle is " << area << std::endl;
            }
            break;
        }
        case 3: {
            //area = (base * height) * .5 Calculate for area of a triangle
            double base, height;

            std::cout << "Input base of a triangle\n";
            std::cin >> base;
            std::cout << "Input height of a triangle\n";
            std::cin >> height;

            if (base < 0 || height < 0) {
                std::cout << "Value cannot be negative." << std::endl;
            }
            else {
                area = base * height * .5;
                std::cout << "The area of a triangle is " << area << std::endl;
            }
            break;
        }
        case 4: {
            //quit
            std::cout << "Quitting Program.";
            break;
        }
    }
    return 0;
}