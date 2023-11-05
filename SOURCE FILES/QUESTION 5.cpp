// A calculation Program for areas of circle, rectangle, triangle.
#include <iostream>
#include <cmath>
 /*The C++ <cmath> header file declares the library that holds a set of functions to perform
 mathematical operations such as: sqrt() to calculate 
 the square root, log() to find natural logarithm of a number etc.*/

#include <string>

using namespace std;

int main() {
    int choice; // Variable for choosing between options
    const double PI = 3.14159265;// creating a constant variable for PI.

    
        // Displaying  the menu
    cout << "Menu:" <<endl;
    cout << "1. Calculate the area of a circle" <<endl;
    cout << "2. Calculate the area of a rectangle" <<endl;
    cout << "3. Calculate the area of a triangle" <<endl;
    cout << "4. Quit" <<endl;
    cout << "Enter your choice (1-4):  ";
    cin >> choice;

        switch (choice) {
            case 1: {
                // Calculating  the area of a circle
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                double area = PI *pow(radius, 2);
                cout << "Area of the circle is: " << area <<endl;
                break;
            }
            case 2: {
                // Calculating the area of a rectangle
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double area = length * width;
                cout << "Area of the rectangle is: " <<area <<endl;
                break;
            }
            case 3: {
                // Calculating the area of a triangle
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                double area = 0.5 * base * height;
                cout << "Area of the triangle is: " << area <<endl;
                break;
            }
            case 4:
                cout << "Goodbye! HAVE A GOOD DAY " <<endl; // NO CALCULATION NEEDED.
                break;
            default:
                cout << "Invalid choice. Please enter a valid option (1-4)." <<endl; //the choice between 1-4 was not given.
        }

    return 0;
}
// tested and debugged.