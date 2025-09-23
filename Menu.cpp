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
    bool no_quit = true;
    srand(time(0));
while (no_quit == true) {
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
            num1 = rand() % 100 + 1;
            num2 = rand() % 100 + 1;
            cout << "What is " << num1 << " + " << num2 << "?" << endl;
            cin >> answer;

            if (answer == num1 + num2 ) {
                cout << "Correct" << endl;
                addCorrect++;
            }
            else {
                cout << "Incorrect" << endl;
                addIncorrect++;
            }
            cout << "Do you want to try another problem? ('-999/a' for no, otherwise, enter any value): ";
            cin >> user_cont;
            } while (user_cont != "-999/a");
            }
            break;
        case 2: {
                    do{
            num1 = rand() % 100 + 1;
            num2 = rand() % 100 + 1;
            cout << "What is " << num1 << " - " << num2 << "?" << endl;
            cin >> answer;

            if (answer == num1 - num2 ) {
                cout << "Correct" << endl;
                subCorrect++;
            }
            else {
                cout << "Incorrect" << endl;
                subIncorrect++;
            }
            cout << "Do you want to try another problem? ('-999/a' for no, otherwise, enter any value): ";
            cin >> user_cont;
            } while (user_cont != "-999/a");}
                break;
        case 3: {
            do{
            num1 = rand() % 12 + 1;
            num2 = rand() % 12 + 1;
            cout << "What is " << num1 << " x " << num2 << "?" << endl;
            cin >> answer;

            if (answer == num1 * num2 ) {
                cout << "Correct" << endl;
                multCorrect++;
            }
            else {
                cout << "Incorrect" << endl;
                multIncorrect++;
            }
            cout << "Do you want to try another problem? ('-999/a' for no, otherwise, enter any value): ";
            cin >> user_cont;
            } while (user_cont != "-999/a");}
                break;
        case 4: {
            do{
            num1 = rand() % 100 + 2;
            num2 = rand() % 50 + 2;
            while (num1 % num2 > 0) {
                num1 = rand() % 100 + 2;
                num2 = rand() % 50 + 2;}
            cout << "What is " << num1 << " / " << num2 << "?" << endl;
            cin >> answer;

            if (answer == num1 / num2 ) {
                cout << "Correct" << endl;
                divCorrect++;
            }
            else {
                cout << "Incorrect"<< endl;
                divIncorrect++;
            }
            cout << "Do you want to try another problem? ('-999/a' for no, otherwise, enter any value): ";
            cin >> user_cont;
            } while (user_cont != "-999/a");}
                break;
        case 5: {
                cout << "Here is your performance summary: " << endl;
                cout << "----------------------------------" << endl;
                cout << setw(16) << "Addition: " << addCorrect << " correct : " << addIncorrect << " incorrect" << endl;
                cout << setw(16) << "Subtraction: " << subCorrect << " correct : " << subIncorrect << " incorrect" << endl;
                cout << setw(16) << "Multiplication: " << multCorrect << " correct : " << multIncorrect << " incorrect" << endl;
                cout << setw(16) << "Division: " << divCorrect << " correct : " << divIncorrect << " incorrect" << endl;
                cout << setw(16) << "Total: " << addCorrect + subCorrect + multCorrect + divCorrect << " correct : " << addIncorrect + subIncorrect + multIncorrect + divIncorrect << " incorrect" << endl << endl;
                cout << "----------------------------------" << endl;
                cout << "Enter any value to go back to menu."<< endl;
                cin >> user_cont;
                cout << endl;
                }  
                break;
        case 6: no_quit = false;
                break;
        default: cout << "Not valid choice. Please try again." << endl;
    }
}
}