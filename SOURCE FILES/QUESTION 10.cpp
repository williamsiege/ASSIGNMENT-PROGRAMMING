/*Creating  a simple ATM withdrawal program that verifies the user's account balance and
transaction limits before processing a withdrawal. Use if and else statements to handle
different scenarios, such as insufficient funds or exceeding daily*/
#include <iostream>

using namespace std;

int main() {
    double accountBalance = 100000.0; // Initial account balance
    double dailyWithdrawalLimit = 10000.0; // Maximum daily withdrawal limit
    double withdrawalAmount;

    // Prompting the user to enter the withdrawal amount
    cout << "Enter the withdrawal amount: ksh";
    cin >> withdrawalAmount;

    if (withdrawalAmount <= 0) {
    cout << "Invalid withdrawal amount. Please enter a positive amount." <<endl;
    } else if (withdrawalAmount > dailyWithdrawalLimit) {
    cout << "Withdrawal amount exceeds the daily limit of Ksh" << dailyWithdrawalLimit << ". Please enter a smaller amount."<<endl;
    } else if (withdrawalAmount > accountBalance) {
    cout << "Insufficient funds. Your account balance is Ksh" << accountBalance << ". Please enter a smaller amount." <<endl;
    } else {
        // Processing  the withdrawal
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal of Ksh" << withdrawalAmount << " is successful. Remaining balance: KSh" << accountBalance <<endl;
    }

    return 0;
}
// code tested and debugged.