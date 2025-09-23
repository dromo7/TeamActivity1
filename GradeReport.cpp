#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>

struct StudentRecord {
	std::string fullName;
	double averageScore;
	char letterGrade;
	std::string passFail;
};

static double computeAverageScore(const std::vector<int>& scores) {
	if (scores.empty()) {
		return 0.0;
	}
	long long sumOfScores = 0;
	for (int score : scores) {
		sumOfScores += static_cast<long long>(score);
	}
	double average = static_cast<double>(sumOfScores) / static_cast<double>(scores.size());
	return average;
}

static char deriveLetterGradeFromAverage(double averageScore) {
	int bucket = static_cast<int>(averageScore) / 10; // 0-10
	switch (bucket) {
		case 10:
		case 9:
			return 'A';
		case 8:
			return 'B';
		case 7:
			return 'C';
		case 6:
			return 'D';
		default:
			return 'F';
	}
}

static void printTable(std::ostream& os, const std::vector<StudentRecord>& records) {
	const int nameWidth = 28;
	const int avgWidth = 10;
	const int gradeWidth = 8;
	const int passWidth = 8;

	os << std::left
	   << std::setw(nameWidth) << "Name"
	   << std::right
	   << std::setw(avgWidth) << "Average"
	   << std::setw(gradeWidth) << "Grade"
	   << std::setw(passWidth) << "Result"
	   << '\n';

	os << std::setfill('-')
	   << std::left << std::setw(nameWidth) << ""
	   << std::right << std::setw(avgWidth) << ""
	   << std::setw(gradeWidth) << ""
	   << std::setw(passWidth) << ""
	   << std::setfill(' ') << '\n';

	os.setf(std::ios::fixed);
	os << std::setprecision(2);
	for (const StudentRecord& rec : records) {
		os << std::left << std::setw(nameWidth) << rec.fullName
		   << std::right << std::setw(avgWidth) << rec.averageScore
		   << std::setw(gradeWidth) << rec.letterGrade
		   << std::setw(passWidth) << rec.passFail
		   << '\n';
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string inputFilePath;
	std::cout << "Enter input file path: ";
	std::getline(std::cin, inputFilePath);

	std::ifstream inputFile(inputFilePath);
	if (!inputFile.is_open()) {
		std::cerr << "Failed to open file: " << inputFilePath << '\n';
		return 1;
	}

	std::vector<StudentRecord> allRecords;
	std::string nameLine;
	std::string scoresLine;

	// Expected format per student:
	// Line 1: Full Name (read using getline)
	// Line 2: Space-separated integer scores ending with -1 sentinel
	while (true) {
		if (!std::getline(inputFile, nameLine)) {
			break; // EOF
		}
		if (nameLine.size() == 0) {
			continue; // Skip empty name lines
		}
		if (!std::getline(inputFile, scoresLine)) {
			// No scores line available for this name; stop
			break;
		}

		std::istringstream scoreStream(scoresLine);
		std::vector<int> scores;
		int scoreValue;
		while (scoreStream >> scoreValue) {
			if (scoreValue == -1) {
				break; // Sentinel reached for this student
			}
			scores.push_back(scoreValue);
		}

		double averageScore = computeAverageScore(scores);
		char letterGrade = deriveLetterGradeFromAverage(averageScore);
		std::string passFail = (averageScore >= 60.0) ? "PASS" : "FAIL"; // ?: operator

		StudentRecord record{ nameLine, averageScore, letterGrade, passFail };
		allRecords.push_back(record);
	}

	// Print to console
	printTable(std::cout, allRecords);

	// Ask user whether to save to a file using cin.get
	std::cout << "Save the table to a file? (y/n): ";
	char userChoice = '\0';
	userChoice = static_cast<char>(std::cin.get());
	// Consume any leftover characters in the line, including the trailing newline
	if (std::cin.peek() != '\n' && std::cin.good()) {
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} else if (std::cin.peek() == '\n') {
		std::cin.get();
	}

	if (userChoice == 'y' || userChoice == 'Y') {
		std::string outputFilePath;
		std::cout << "Enter output file path: ";
		std::getline(std::cin, outputFilePath);
		std::ofstream outFile(outputFilePath);
		if (!outFile.is_open()) {
			std::cerr << "Failed to open output file: " << outputFilePath << '\n';
			return 1;
		}
		printTable(outFile, allRecords);
		std::cout << "Saved table to: " << outputFilePath << '\n';
	}

	return 0;
}


