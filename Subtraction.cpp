#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int num1;
int num2;
int result;
string response = "y";
//string answer = "";
//int count = 0;

int main() {
    int count = 0;
    int icount = 0;
    string answer = "";
    srand(time(0));
    while (response != "-999/a") {
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
    }
    cout << "You got " << count << " correct" << " and " << icount << " incorrect." << endl;
    return 0;
}