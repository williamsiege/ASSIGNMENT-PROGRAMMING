/*Designing a program for a cinema that calculates the ticket price based on the age of the
customer and the type of movie (e.g., regular or 3D). Using if, else if, and else statements
to determine the ticket price per customer.*/

#include <iostream>
#include <string>

using namespace std;

//Declaring variables for the cinema.
int main() {
    int age;
    string movieType,movieName;
    double  ticketPrice;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt the user to choose the movie type (regular or 3D)
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movieType;

    // Prompting the user to enter the name of the movie.
    cout << "Enter the name of the Movie : ";
    cin >> movieName;

    // Calculate the ticket price based on age and movie type
    if (age < 15) {
        if (movieType == "regular") {
            ticketPrice = 250.0;  // Kids (under 13) pay ksh250 for regular movies
        } else if (movieType == "3D") {
            ticketPrice = 450.0;  // Kids (under 13) pay ksh450 for 3D movies
        } else {
            cout << "Invalid movie type. Please enter 'regular' or '3D'." << std::endl;
            return 1;
        }
    } else {
        if (movieType == "regular") {
            ticketPrice = 550.0; // Adults (13 and older) pay ksh550 for regular movies
        } else if (movieType == "3D") {
            ticketPrice = 750.0; // Adults (13 and older) pay ksh750 for 3D movies
        } else {
            cout << "Invalid movie type. Please enter 'regular' or '3D'." << std::endl;
            return 1;
        }
    }

    // Display the ticket price and Name of movie chosen.
    cout << "The Name of Movie chosen :"<<movieName<<endl;
    cout << "The ticket price is: ksh" << ticketPrice <<endl;

    return 0;
}
// CODE TESTED AND DEBUGGED.