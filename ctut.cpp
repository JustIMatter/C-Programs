// This is a comment

/*
* Multi-line comment
*/

// Tells compiler iostream library, which contains the function cout
#include <iostream>

// Allows use of vectors
#include <vector>

// Allows use of strings
#include <string>

// Allows the use of files
#include <fstream>

// Allows functions in std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

// --------- Functions -----------
// The functta types
// The attribute data types must match the value passed in
// This data is passed by value
// You can define default values to attributes as long as they come last
// This is known as a function prototype
int main(){
  
    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;
    if((age >= 1) && (age < 16)){
        
        cout << "You can't drive" << endl;
        
    } else if(! isNotIntoxicated){

        cout<< "You can't drive" << endl;
     
    } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
        
        cout << "You can't drive" << endl;
       
    } else {
        
        cout << "You can drive" << endl;
        
    }
  
    return 0;
  
}