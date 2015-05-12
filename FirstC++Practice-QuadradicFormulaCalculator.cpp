// First C++ practice - Objective is to create a quadratic formula calculator.
// (-b+-sqroot(b^2-4ac))/(2a)

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double real,imag,x1,x2,a,b,c,d;

	cout << "Input values of a, b, and c." << endl;
	cin >>a >>b >>c;
    
    d = b*b - 4*a*c;
    
    
    if(d <= 0){
        real = -b/(2*a);
        imag = sqrt(-d)/(2*a);
        cout << real << " +/- " << imag << "i\n";
        
    }else{
        
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        
        cout << x1 << ", " << x2 << '\n';
        
    }
    
    system("pause");
    return 0;
}