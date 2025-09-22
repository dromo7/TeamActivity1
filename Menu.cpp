#include "Subtraction.cpp"
#include "Addition_module.cpp"
#include "HW.cpp"

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Welcome to the Math Quiz!" << endl;
    cout << "Please select the type of problems you want to practice:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            mainAddition_module();
            break;
        case 2:
            mainSubtraction();
            break;
        case 3:
            mainHW();
            break;
        case 4:
            mainDivision();
            break;
        default:
            cout << "Invalid choice. Please restart the program and select a valid option." << endl;
            break;
    }
    return 0;
}
