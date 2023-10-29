// Sum of digits of a Number in C++ 

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, sum = 0;

  cout << "Enter a Number: ";
  cin >> num;

  while(num != 0){
    sum = sum + num % 10; // storing the reminder value
    num = num / 10; // decresing the value
  }

  cout << "Sum of digits " << sum;


cout << "\n\n";
return 0;
}