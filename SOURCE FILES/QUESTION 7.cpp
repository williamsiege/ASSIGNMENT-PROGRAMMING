 // A PROGRAM  FOR LIBRARY LATE FEES.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // DECLARING VARIABLES FOR DAYS LATE , BOOK TYPE
    int daysLate;
    string bookType;

    // Prompt the user to enter the number of days late and the type of book
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (regular, children's, or reference): ";
    cin >> bookType;

    // Calculate the fine amount based on the type of book and days late
    double fineAmount = 000.0;

    if (bookType == "regular") {
        // Stating book types regular, children's or reference.
        if (daysLate <= 7) {
            fineAmount = 5.0 * daysLate;
        } else {
            fineAmount = 3.50 + (daysLate - 7) * 9.50;
        }
    } else if (bookType == "children's") {
        if (daysLate <= 7) {
            fineAmount = 2.5 * daysLate;
        } else {
            fineAmount = 1.75 + (daysLate - 7) * 7.5;
        }
    } else if (bookType == "reference") {
        fineAmount = 8.00 * daysLate;
    } else {
        cout << "Invalid book type. Please enter 'regular', 'children's', or 'reference'." <<endl;
        return 1;// FOR RETURNING ERROR CODE.
    }

    // Display the calculated fine amount
    cout << "The fine for returning a " << bookType << " book " << daysLate << " days late is: KSH" << fineAmount <<endl;

    return 0;
}
// code tested and debugged.