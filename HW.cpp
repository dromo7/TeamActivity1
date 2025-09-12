#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Global counters for tracking performance
int correctAnswers = 0;
int wrongAnswers = 0;
int totalQuestions = 0;

// Function prototypes
void multiplicationPractice();
void displayStatistics();

int main() {
    // Seed the random number generator
    srand(time(0));
    
    cout << "=== Math Practice App ===" << endl;
    cout << "Welcome to your math practice session!" << endl;
    cout << "Enter -999 to stop and see your results" << endl << endl;
    
    multiplicationPractice();
    displayStatistics();
    
    cout << "Thank you for using Math Practice App!" << endl;
    
    return 0;
}


void multiplicationPractice() {
    cout << "Enter -999 to stop and see your results" << endl;
    cout << "Let's start practicing!" << endl << endl;
    
    int userAnswer;
    bool practicing = true;
    
    while (practicing) {
        // Generate random numbers between 1-12 for multiplication
        int num1 = rand() % 12 + 1;
        int num2 = rand() % 12 + 1;
        int correctAnswer = num1 * num2;
        
        cout << "What is " << num1 << " * " << num2 << "? ";
        cin >> userAnswer;
        
        // Check for sentinel value
        if (userAnswer == -999) {
            cout << "Practice session ended. Here are your results:" << endl;
            practicing = false;
            continue;
        }
        
        // Increment total questions counter
        totalQuestions++;
        
        // Check if answer is correct
        if (userAnswer == correctAnswer) {
            cout << "Correct! Well done!" << endl;
            correctAnswers++;
        } else {
            cout << "Incorrect. The answer is " << correctAnswer << "." << endl;
            wrongAnswers++;
        }
        
        cout << endl;
    }
}

void displayStatistics() {
    cout << "\nResults:" << endl;
    
    if (totalQuestions == 0) {
        cout << "No questions answered." << endl;
        return;
    }
    
    // Calculate percentage
    double percentage = (double)correctAnswers / totalQuestions * 100;
    
    cout << "Total questions: " << totalQuestions << endl;
    cout << "Correct: " << correctAnswers << endl;
    cout << "Wrong: " << wrongAnswers << endl;
    cout << "Accuracy: " << fixed << setprecision(1) << percentage << "%" << endl;
    
    cout << endl;
}


