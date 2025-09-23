#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    int d_count = 0;
    int d_icount = 0;
    string user_input;
    int numerator;
    int denomenator;
    int user_answer;
    int final_answer;
    int correctAnswer;
    int userInput;
    int wins = 0;
    int loss = 0;
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
            case 3: {

            }
            case 4: {
                while (user_input != "-999/a"){
                srand(time(0));
                numerator = rand() % 100 + 2;
                denomenator = rand() % 50 + 2;
                    while (numerator % denomenator > 0) {
                        numerator = rand() % 100 + 2;
                        denomenator = rand() % 50 + 2;}
                        final_answer = numerator / denomenator;
                        std::cout << "What is " << numerator << " / " << denomenator << "? ";
                        cin >> user_answer;
                            if (user_answer == final_answer){
                                std::cout << "Correct" << endl;
                                d_count++;
                            }
                            else {
                                std::cout << "Incorrect. The answer is " << final_answer << "." << endl;
                                d_icount++;
                            }
                            cout << "Correct: " << d_count << endl;
                            cout << "Incorrect: " << d_icount << endl;
                            cout << "Do you want to try another problem? ('y' for Yes and '-999/a for no): ";
                            cin >> user_input;
                            }
                break;}
            case 5: {
                
        }

        }

    

