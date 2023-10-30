// Palindrome program in C++ -

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, orgNum, rem, sum = 0;
  cout << "Enter a Number: ";
  cin >> num;

  orgNum = num;

  while(num != 0){
    rem = num % 10;
    sum = sum * 10 + rem;
    num = num / 10;
  }

  if(orgNum == sum)
    cout << "It's a Palindrome Number.";
  else
    cout << "It's not a Palindrme Number.";

cout << "\n\n";
return 0;
}