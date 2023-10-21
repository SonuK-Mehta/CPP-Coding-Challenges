// Find the Sum of Numbers in a given range in C++

#include<iostream>
using namespace std;

int main(){
cout <<"\n\n\n";

int num1, num2, sum = 0;
cout << "Enter two Number: ";
cin >> num1 >> num2;

for (int i=num1; i<=num2; i++)
  sum += i;

cout << "Sum of Number between " << num1 << " and " << num2 << " is: " << sum;


cout <<"\n\n";   
return 0;
}