// Check Whether a Number is Even or Odd in C++

#include<iostream>
using namespace std;

int main(){
cout <<"\n\n\n";

  int num;
  cout << "Check Whether a Number is Even or Odd in C++ -";
  cout << "\n\nEnter a Number: ";
  cin >> num;

  //checking whether the number is even or odd
  if(num % 2 == 0)
    cout << "Even Number";
  else 
    cout << "Odd Number";

cout <<"\n\n";   
return 0;
}


/* Using Ternary Operator--

  number % 2 == 0 ? cout << "Even":cout << "Odd";
    
*/