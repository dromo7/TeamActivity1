#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int correctAnswer;
    int userInput;
    int wins = 0;
    
    cout << "Welcome to the Math Quiz!" << endl;
    cout << "Enter -9999 to quit and see your score." << endl;
    cout << "----------------------------------------" << endl;
    
    while (true) {
        int num1 = rand() % 100;
        int num2 = rand() % 100;
        correctAnswer = num1 + num2;
        
        cout << "What is " << num1 << " + " << num2 << "?: ";
        cin >> userInput;
        
        if (userInput == -9999) {
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
        }
        cout << endl;
    }
    
    return 0;
}