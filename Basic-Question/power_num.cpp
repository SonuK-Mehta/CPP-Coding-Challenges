/* C++ program to the Power of a number -

We need the following to calculate power of number -
Base : 5
Exponent : 3
Power = 5^3 = 125 
*/

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  double base, exponent, result=1;

  cout << "Enter a Base: ";
  cin >> base;

  cout << "Enter Exponent: ";
  cin >> exponent;

  for(int i=0; i<exponent; i++){
    result = result * base;
  }

  cout << "Power of "<< base << " is: "<< result;

cout << "\n\n";
return 0;
}