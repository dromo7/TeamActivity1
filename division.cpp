#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int d_count = 0;
    int d_icount = 0;
    string user_input;
    int numerator;
    int denomenator;
    int user_answer;
    int final_answer;
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

    return 0;
}