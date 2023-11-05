/*Writing a C++ program 
using Switch…Case to determine the maximum number given
two numbers from a user.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Introducing variables for the two numbers
    double num1, num2;

    // Capture two numbers from the user
    cout << "Enter the first number: "<<endl;
    cin >> num1;

    cout << "Enter the second number: "<<endl;
    cin >> num2;

//Introducing switch case variable
    char choice;

    // Determine the maximum number using switch-case
    switch (num1 > num2) {
        case true:
            choice = '1';
            break;
        case false:
            choice = '2';
            break;
    }

    switch (choice) {
        case '1':
            cout << "The maximum number is: " << num1 <<endl;
            break;
        case '2':
            cout << "The maximum number is: "<< num2 <<endl;
            break;
        default:
            cout << "Both numbers are equal." <<endl;
    }

    return 0;
}