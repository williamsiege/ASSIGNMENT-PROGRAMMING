/*Creating a simple 
Grading System using C++*/
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

// Determine the grade based on the score
// introducing variable grade 
    char grade;
    if (score>=70) {                                  /* If else - if conditions for the grading */
        grade = 'A';
    } else if (score>=60 && score<=69) {
        grade = 'B';
    } else if (score>=50 && score<=59) {
        grade = 'C';
    } else if (score>=40 && score<=49){
        grade = 'D';
    } else if (score<40 ){
        grade = 'F';
    } else {
        cout << "Invalid Score entered "<<endl;
    }
// Output the student's information and grade
cout << "\n**********Student Information********:"<<endl;
cout << " Studnets's FullName: " << fullName<<endl;
cout << "Course taken: " << course<<endl;
cout << "Score: " << score<<endl;
cout << "Grade: " << grade<<endl;

return 0;

}
// APP TESTED and debugged