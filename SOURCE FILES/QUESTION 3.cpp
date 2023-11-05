/*Creating a simple 
Grading System using C++ but this time using switch case*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    /*Declaring and intializing the Variables used */
string fullName, course;
int score;

// Capturing Student Information
cout << "Enter the full name of the student: "; //FullName of the student 
getline(cin, fullName);

cout << "Enter the course: "; //Course the student is taking 
getline(cin, course);

cout << "Enter the student's score: "; // Score of the Student
cin >> score;

// Determine the grade based on the score using Switch-case
// introducing variable grade to use in the switch case.

char grade;
switch(score/10){
    case 8:
       grade = 'A';
       break; //directs Compiler to stop execution and jump to the next case
    case 7:
       grade = 'A';
       break;
    case 6:
       grade = 'B';
       break;
    case 5:
       grade = 'C';
       break;
    case 4:
       grade = 'D';
       break;
    case 3:
       grade = 'F';
       break;
    default:
    cout << "Invalid Score entered"<<endl;

}
// Output the student's information and grade
cout << "\n**********Student Information********:"<<endl;
cout << " Studnets's FullName: " << fullName<<endl;
cout << "Course taken: " << course<<endl;
cout << "Score: " << score<<endl;
cout << "Grade: " << grade<<endl;

return 0;

}