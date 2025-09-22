#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    int wins = 0;
    int loss = 0;
    int correctAnswers = 0;
    int wrongAnswers = 0;
    int count = 0;
    int icount = 0;
    int d_count = 0;
    int d_icount = 0;
    int total_w = wins + count + correctAnswers + d_count;
    int total_l = loss + icount + wrongAnswers + d_icount;
    char choice;
    cout << "Here is your performance summary: " << endl;
    cout << "----------------------------------" << endl;
    cout << setw(16) << "Addition: " << wins << " correct : " << loss << " incorrect" << endl;// Addition section needs incorrect count 
    cout << setw(16) << "Subtraction: " << count << " correct : " << icount << " incorrect" << endl;
    cout << setw(16) << "Multiplication: " << correctAnswers << " correct : " << wrongAnswers << " incorrect" << endl;
    cout << setw(16) << "Division: " << d_count << " correct : " << d_icount << " incorrect" << endl; //Variable name conflicts with subtraction section in initial individual programs
    cout << setw(16) << "Total: " << total_w << " correct : " << total_l << " incorrect" << endl << endl;  
    return 0;
}
