/*Creating  a simple C++ application to check 
if a customer is qualified for a loan using certain conditions GIVEN!!*/
#include <iostream>
#include <string>

using namespace std;
int main(){
// Declaring varaibles 

int age, goodCustomer;
string crbStatus;
double bankBalance;

// Capturing User Data 

cout << "Enter your age: ";// Age
cin >> age;

cout << "Enter your bank balance Ksh: ";//BankBalance
cin >> bankBalance;

cout << "Enter your CRB status (Good/Bad): ";//CRB status
cin >> crbStatus;

cout << "Enter the number of months you've been a customer: "; // Months of being a customer
cin >> goodCustomer;
cout <<"\n\n";

// checking the eligibilty for a loan And giving different outputs.

if(age>=22 && bankBalance>=50000 && crbStatus=="Good" && goodCustomer>6){
cout << "Congratulations! You qualify for a loan."<<endl;
cout << "*********Details Captured*******\n\n";
cout << "Your Age is "<<age<<endl;
cout << "Bank Balance is Ksh :"<<bankBalance<<endl;
cout << "CRB status is :"<<crbStatus<<endl;
cout << "Has been a Customer for :"<<goodCustomer<<" Months"<<endl;
}else
{
cout << "Sorry, you do not qualify for a loan based on the given conditions."<<endl;
cout << "*********Details Captured*******\n\n";
cout << "Your Age is "<<age<<endl;
cout << "Bank Balance is Ksh :"<<bankBalance<<endl;
cout << "CRB status is :"<<crbStatus<<endl;
cout << "Has been a Customer for :"<<goodCustomer<<" Months"<<endl;

}

return 0;

}
// App tested and debuggged
