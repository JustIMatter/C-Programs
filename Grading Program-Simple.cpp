// Grading Program
// Simplistic number to letter grade comparison.

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

	int grade;
	cout << "What is your grade? (1-100)" << endl;

	cin >>grade;

	if((grade >= 90) && (grade <= 100)){
		cout << "Your grade is an A!" << endl;

	}else if((grade >= 80) && (grade <= 89)){
		cout << "Your grade is a B!" << endl;

	}else if((grade >= 70) && (grade <= 79)){
		cout << "Your grade is a C." << endl;

	}else if((grade >= 60) && (grade <= 69)){
		cout << "Your grade is a D...." << endl;

	}else if((grade >= 0) && (grade <= 59)){
		cout << "Your grade is an F..... Really?" << endl;

	}else{
		cout << "U wot m8?!?!" << endl;

	}

}
