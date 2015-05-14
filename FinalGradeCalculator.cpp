/* Complex Grading Program
* Involves multiple grades and uses weighting of grades
* as well as total averages of weighting to calculate
finall grade. */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

	double minor, quiz, major;
	int minorG, quizG, majorG;

	minorG = 0;

	cout << "Final Grade Calculator" << endl;

	cout << "Input minor grade weight percent." << endl;
	cin >>minor;

	cout << "Input quiz grade weight percent." << endl;
	cin >>quiz;

	cout << "Input major grade weight percent." << endl;
	cin >>major;

	// Three grade categories
	minor = minor/100;
	quiz = quiz/100;
	major = major/100;


	for(int i = 1; i <=10; i++){
		cout << "Input a minor grade. (Max=10)" << endl;
		cin >>minorG;


		int *minorGA = new int[minorG];

		minorG+= minorGA[minorG];
		cout << "Currently: " << i << " Grade(s)." <<endl;
	}
	cout << "Minor Sum: " << minorG << endl;
	return 0;
}
