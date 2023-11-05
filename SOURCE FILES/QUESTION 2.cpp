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
    string remark;
    if (score>=70) {                                  /* If else - if conditions for the grading */
        grade = 'A', remark = "Excellent WORK";
    } else if (score>=60 && score<=69) {
        grade = 'B', remark = "Nice";
    } else if (score>=50 && score<=59) {
        grade = 'C', remark = "Try Better";
    } else if (score>=40 && score<=49){
        grade = 'D', remark = "Try HARDER";
    } else if (score<40 ){
        grade = 'F', remark = "Wake up";
    } else {
        cout << "Invalid Score entered "<<endl;
    }
// Output the student's information and grade
cout << "\n**********Student Information********:"<<endl;
cout << " Studnets's FullName: " << fullName<<endl;
cout << "Course taken: " << course<<endl;
cout << "Score: " << score<<endl;
cout << "Grade: " << grade<<endl;
cout << "Remark :"<< remark<<endl;

return 0;

}
// APP TESTED and debugged