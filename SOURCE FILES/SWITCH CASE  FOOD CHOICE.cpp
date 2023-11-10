/*Writing a C++ program 
using Switch…Case to determine food choice in a restaraunt.*/
#include <iostream>

using namespace std;

int main() {
    int comboChoice;
    double totalBill = 0.0;

    cout << "Restaurant Menu:" <<endl;
    cout << "1. Combo 1: Burger + Fries + SODA Drink ($15.99)" <<endl;
    cout << "2. Combo 2: Pizza + Salad + JUICE Drink ($12.99)" <<endl;
    cout << "3. Combo 3: Sandwich + Soup + WATER Drink ($8.99)" <<endl;

    // Prompt the user to choose a food combo
    cout << "Enter your choice (1-3): ";
    cin >> comboChoice;

    // Determining  the selected food items and their costs using a switch case
    switch (comboChoice) {
        case 1:
            cout << "Selected Combo: Burger + Fries + SODA Drink" <<endl;
            totalBill += 10.99;
            break;
        case 2:
            cout << "Selected Combo: Pizza + Salad +  JUICE Drink" <<endl;
            totalBill += 12.99;
            break;
        case 3:
            cout << "Selected Combo: Sandwich + Soup + WATER Drink" <<endl;
            totalBill += 8.99;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-3)." <<endl;
            return 1;
    }

    // Display the total bill
    cout << "Total Bill: $ "<<totalBill<<endl;

    return 0;
}
