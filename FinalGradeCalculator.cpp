/* Complex Grading Program
* Involves multiple grades and uses weighting of grades
* as well as total averages of weighting to calculate
final grade. */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

	double minorW, quizW, majorW, minorG, quizG, majorG, minorGSum, quizGSum, majorGSum, totalGSum;
	int minorGrades, quizGrades, majorGrades;

	minorG = 0;
	quizG = 0;
	majorG = 0;
	minorGSum = 0;
	quizGSum = 0;
	majorGSum = 0;

	cout << "Final Grade Calculator" << endl;

	cout << "Input minor grade weight percent." << endl;
	cin >>minorW;

	cout << "Input quiz grade weight percent." << endl;
	cin >>quizW;

	cout << "Input major grade weight percent." << endl;
	cin >>majorW;

	cout << "Enter number of minor grades." << endl;
	cin >>minorGrades;

	cout << "Enter number of quiz grades." << endl;
	cin >>quizGrades;

	cout << "Enter number of major grades." << endl;
	cin >>majorGrades;

	// Three grade categories
	minorW = minorW / 100;
	quizW = quizW / 100;
	majorW = majorW / 100;


	for(int i = 1; i <= minorGrades; i++){
		cout << "Input a minor grade." << endl;
		cin >>minorG;

		minorGSum += minorG;
		cout << "Currently: " << i << "/" << minorGrades << " minor grade(s)." <<endl;
	}
	minorG = minorGSum * minorW;

	for(int i = 1; i <= quizGrades; i++){
		cout << "Input a quiz grade." << endl;
		cin >>quizG;

		quizGSum += quizG;
		cout << "Currently: " << i << "/" << quizGrades << " quiz grade(s)." <<endl;
	}
	quizG = quizGSum * quizW;

	for(int i = 1; i <= majorGrades; i++){
		cout << "Input a major grade." << endl;
		cin >>majorG;

		majorGSum += majorG;
		cout << "Currently: " << i << "/" << majorGrades << " major grade(s)." <<endl;
	}
	majorG = majorGSum * majorW;

	minorG = minorG / minorGrades;
	quizG = quizG / quizGrades;
	majorG = majorG / majorGrades;
	totalGSum = minorG + quizG + majorG;

	cout << "Minor Grade: " << minorG << endl;
	cout << "Quize Grade: " << quizG << endl;
	cout << "Major Grade: " << majorG << endl;
	cout << "Total Grade: " << totalGSum << endl;

	return 0;
}
