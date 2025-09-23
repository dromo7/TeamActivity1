#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    cout << "Welcome to the Math Quiz!" << endl;
    cout << "Please select the type of problems you want to practice:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Statistics" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    while (choice != "-999/a") {
        switch (choice) {
            case 1: {
                int num1 = rand() % 100;
                int num2 = rand() % 100;
                correctAnswer = num1 + num2;
        
                cout << "What is " << num1 << " + " << num2 << "?: ";
                cin >> userInput;
        
                if (userInput == "-999/a") {
                    cout << "Goodbye!" << endl;
                    cout << "You got " << wins << " correct answer(s)!" << endl;
                    break;
                 }
                else if (userInput == correctAnswer) {
                    cout << "That's correct!" << endl;
                    wins++;
                }
                else {
                    cout << "That's incorrect! The correct answer was " << correctAnswer << endl;
                    loss++;
                }
                    cout << endl;
                break;}

            case 2: {
                num1 = rand() % 100 + 1;
                num2 = rand() % 100 + 1;
                result = num1 - num2;
                cout << "What is " << num1 << " - " << num2 << "? ";
                cin >> answer;
            if (answer == to_string(result)) {
                cout << "Correct!" << endl;
                count++;
            } 
            else {
                cout << "Incorrect. The correct answer is " << result << "." << endl;
                icount++;
            }
        cout << "Do you want to try another problem? ('y' for Yes and '-999/a' for No): ";
        cin >> response;
        break;}
    
            }
        }

        }

    return 0;

