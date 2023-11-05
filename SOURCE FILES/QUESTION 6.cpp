/*Creating  a program that simulates a traffic light.
The program will display the color of
the traffic light (red, yellow, or green) based on a timer. 
Using a switch...case statement
to control the behavior of the traffic light as it operates.*/

#include<iostream>
#include <chrono>
/*provides a precision-neutral way of handling date and time that is independent of the underlying frameworks
 used by different systems.
 The remarkable thing about <chrono> is that it gives a precision-neutral concept by
isolating duration and timepoint from particular clocks .*/

#include<thread> 
/*Class to represent individual threads of execution.
A thread of execution is a sequence of instructions that can be executed 
concurrently with other such sequences in multithreading environments, while sharing a same address space.
*/

using namespace std;

int main() {
    while (true) {
        /*a type of loop that will first evaluate a condition. If the condition is true,
        the program will run the code inside of the while loop*/
        // Display the traffic light using a switch-case statement
        for (int i = 0; i < 3; ++i) { 
            /*When you know exactly how many times you want to loop 
            through a block of code, use the for loop is needed.*/
            switch (i) {
                case 0:
                    cout << "RED" << std::endl;
                    this_thread::sleep_for(chrono::seconds(5));
                    break;
                case 1:
                    cout << "YELLOW" << std::endl;
                    this_thread::sleep_for(chrono::seconds(2));
                    break;
                case 2:
                    cout<< "GREEN" << std::endl;
                    this_thread::sleep_for(chrono::seconds(5));
                    break;
            }
        }
    }

    return 0;
}
