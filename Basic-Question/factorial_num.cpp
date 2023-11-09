// C++ Program to find the Factorial of a Number -

#include<iostream>
using namespace std;

int main() {
cout << "\n\n";

  int num,temp, rem, fact = 1;

  cout << "Enter a Number: ";
  cin >> num;

  temp = num;

  while(num != 0){
    fact = fact * num;
    num --;
  }

  if(temp == 0)
    cout << "Not possible";
  else
    cout << "Factorial of "<< temp << " is: "<< fact;

cout << "\n\n";
return 0;
}