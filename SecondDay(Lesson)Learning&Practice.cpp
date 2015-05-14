// Today's lesson/learning consisted of arrays, for loops, while loops, do while loops, 
// random number generation, strings, and user input.

// This is a comment

/*
* Multi-line comment
*/

// Used for some system functions and for stuff such as rand.
#include <cstdlib>

// Tells compiler iostream library, which contains the function cout.
#include <iostream>

// Allows use of vectors.
#include <vector>

// Allows use of strings.
#include <string>

// Allows the use of files.
#include <fstream>

// Allows functions in std namespace to be used without their prefix.
// std::cout becomes cout
using namespace std;

// --------- Functions -----------
// The functta types
// The attribute data types must match the value passed in
// This data is passed by value
// You can define default values to attributes as long as they come last
// This is known as a function prototype
int main(){
    
    // Basic array-- size/amount of data that can be held indicated within square brackets which is currenty 5 here.
    int myFavNumbs[5];
    
    // Array containing 5 integers.
    int badNums[5] = {4, 13, 14, 24, 34};
    
    // Out put first number of array badNums which is (4).
    cout << "Bad Number 1: " << badNums[0] << endl;
    
    // Two arrays containing characters of my names.
    char myName[5][7] = {{'N', 'i', 'c'},
                        {'R', 'a', 'c', 'k', 'l', 'e', 'y'}};
                        
    // Select the 2nd letter within the second array of myName which is (a).
    cout << "2nd letter in 2nd array " << myName[1][1] << endl;
    
    // Changed the value of 3rd letter(because count starts at 0) to (e) from (c)
    myName[0][2] = 'e';
    
    // Output changed value.
    cout << "New Value " << myName[0][2] << endl;
    
    // Basic for loop, syntax follows -- i starts at 1, and continues to loop
    // as long as i less than or equal to 10, and incrememts by a value, in this case (1).
    for(int i = 1; i <= 10; i++){
        
        // Out put value of i every loop -- which will output numbers 1-10.
        cout << i << endl;
        
    }
    
    // Nested for loops.
    // Grabs all data from first array of myName.
    for (int j = 0; j < 5; j++){
        
        // Grabs all data from second array of myName.
        for(int k = 0; k < 7; k++){
            
            // Display values of array myName j and k.
            cout << myName[j][k];
            
        }
        // The endl is used here because the cout command is being used to
        // output data from both for loops which are grabbing the data from
        // array myName.
        cout << endl;
        
    }
    
    // Produce a random integer between 0-100. -- The + 1 ensurse the 0-100 otherwise would be 0-99.
    int randNum = (rand() % 100) + 1;
    
    // While loop will loop as long as randNum isn't equal to 100.
    while(randNum != 100){
        
            // Output random generated numbers.
            cout << randNum << ", ";
                
                // Used to print a random number on each loop and used as an escape for once randNumber is equal to 100.
                randNum = (rand() % 100) + 1;
    }
    // Ends the output for randomly generated numbers.
    cout << endl;
  
    return 0;
  
}