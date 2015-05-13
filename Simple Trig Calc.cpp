// Example program

// Necessary for system function
#include <cstdlib>

// Necessary for function such as cout and cin, ect.
#include <iostream>

// For strings
#include <string>

// Allows use of complex math functions
#include <cmath>

using namespace std;
int main(){
 
 // Variabels
 double opp, adj, hyp, sinsol, cossol, tansol;
 char sin, cos, tan;
 
 cout << "What are you trying to find? (sin, cos, tan)" << endl;
 cin >>sin >>cos >>tan;
 
 // If sin then compute opp/hyp, if cos then compute adj/hyp, and if tan then compute opp/adj.
 if(sin){
     cout << "Input values opp and hyp." << endl;
     cin >>opp >>hyp;
     sinsol = opp/hyp;
     cout << "Answer: " << sinsol << endl;
 }else if(cos){
     cout << "Input values adj and hyp." << endl;
     cin >>adj >>hyp;
     cossol = adj/hyp;
     cout << "Answer: " << cossol << endl;
 }else if(tan) {
     cout << "Input values opp and adj." << endl;
     cin >>opp >>adj;
     tansol = opp/adj;
     cout << "Answer: " << tansol << endl;
 }
 
 // Bad way to pause functions. Os depency and slow.
 system("pause");
 return 0;
}
