// Program to Check Whether a Year is a Leap Year or Not in C++
/* Condition for leap year --

  1. If a year is divisible by 400, it's a leap year.
  2. If a year is divisible by 4 but not by 100 then its leap year

*/

#include<iostream>
using namespace std;

int main() {
cout << "\n\n\n";

  int year;
  cout << "Enter Year: "; cin >> year;

  if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
    cout << "It's a leap year";
  else
    cout << "it's not leap year";


cout << "\n\n";
return 0;
}