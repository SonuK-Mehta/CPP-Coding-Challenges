//  Find the Reverse of a Number

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, rem, reverse = 0, orgNum;
  cout << "Enter a Number: ";
  cin >> num;

  orgNum = num;

  while(num != 0){
    rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num / 10;
  }

  cout << "Reverse of Number "<< orgNum <<" is: "<< reverse;

cout << "\n\n";
return 0;
}

