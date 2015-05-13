// First C++ practice - Objective is to create a quadratic formula calculator.
// (-b+-sqroot(b^2-4ac))/(2a)

// Necessary for system functions
#include <cstdlib>

// Tells compiler use of iostream library, which contains cout, cin, ect.
#include <iostream>

// Necessary for mathmatecical functions such as calculating square roots and setting powers/exponents. (sqrt(#) & pow(#,#power))
#include <cmath>

using namespace std;

int main(){
    
    // Variables, doubles necessary for sqare root function and accuracy.
    double real,imag,x1,x2,a,b,c,d;

	cout << "Input values of a, b, and c." << endl;
	cin >>a >>b >>c;
    
    // Formula under square root of quadradics formula. (Use of #*# number rather than #^# for simplicity.)
    d = b*b - 4*a*c;
    
    // If d less than or queal to 0 then output imaginary zero, otherwise output calculated zero.
    if(d <= 0){
        real = -b/(2*a);
        imag = sqrt(-d)/(2*a);
        cout << real << " +/- " << imag << "i\n";
        
    }else{
        
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        
        cout << x1 << ", " << x2 << '\n';
        
    }
    
    // Begginner way of pausing command line window for users to read information. Actual bad use of code
    // due to OS dependency and known to be slow.
    system("pause");
    
    return 0;
}