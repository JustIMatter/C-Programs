// Example program
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){
 
 double opp, adj, hyp, sinsol, cossol, tansol;
 char sin, cos, tan;
 
 cout << "What are you trying to find? (sin, cos, tan)" << endl;
 cin >>sin >>cos >>tan;
 
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
 
 return 0;
}
