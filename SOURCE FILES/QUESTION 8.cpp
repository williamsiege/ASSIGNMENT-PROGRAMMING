/*Developing a program for a shopping cart that calculates the total cost after applying
different discounts based on the purchase amount. Using  if, else if, and else statements to
determine which discount to apply.*/

#include <iostream>

using namespace std;

int main() {
    // declaring variables to use double standard.
    double purchaseAmount;
    double totalCost;

    // Prompt the user to enter the purchase amount
    cout << "Enter the purchase amount: KSH ";
    cin >> purchaseAmount;

    // Apply discounts based on the purchase amount
    if (purchaseAmount >= 2500.0) {
        totalCost = purchaseAmount * 0.5;  // 50% discount for purchases of ksH 2500 or more
    } else if (purchaseAmount >= 1000.0 && purchaseAmount<= 2499.9) {
        totalCost = purchaseAmount * 0.75; // 25% discount for purchases between KSH1000 and KSH2499
    } else {
        totalCost = purchaseAmount;       // No discount for purchases less than KSH 999.
    }

    // Display the total cost after applying the discount
    cout << "Total cost after applying discount: kSH" << totalCost <<endl;

    return 0;
}
