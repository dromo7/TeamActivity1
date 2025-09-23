#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main () {
    int choice;
    int addCorrect = 0;
    int addIncorrect = 0;
    int subCorrect = 0;
    int subIncorrect = 0;
    int multCorrect = 0;
    int multIncorrect = 0;
    int divCorrect = 0;
    int divIncorrect = 0;
    int num1;
    int num2;
    int answer;
    string user_cont;
    srand(time(0));
while (true) {
    cout << "Welcome to the math quiz!" << endl;
    cout << "Please select the type of problems you want to practice:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Statistics" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    switch(choice){
        case 1:{
            do{
            num1 = rand() % 100;
            num2 = rand() % 100;
            cout << "What is " << num1 << " + " << num2 << "?" << endl;
            cin >> answer;

            if (answer == num1 + num2 ) {
                cout << "Correct" << endl;
                addCorrect++;
            }
            else {
                cout << "Incorrect";
                addIncorrect++;
            }
            cout << "Do you want to try another problem? ('y' for Yes and '-999/a for no): ";
            cin >> user_cont;
            } while (user_cont != "-999/a");
            }
            break;
        case 2: cout << "in progress";
                break;
        case 3: cout << "in progress";
                break;
        case 4: cout << "in progress";
                break;
        case 5: cout << "in progress";
                break;
        case 6: cout << "in progress";
                break;
        default: cout << "in progress";
    }
}
}