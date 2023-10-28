// Check Whether the Number is a Prime or Not in C++

#include<iostream>
using namespace std;

bool isPrimeNum(int num){
  for (int i = 2; i < num; i++){
    if(num % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
cout << "\n\n";

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  bool isPrime = isPrimeNum(num);

  if(isPrime)
    cout << "It's a Prime Number";
  else 
    cout << "Not a Prime Number";

cout << "\n\n";
return 0;
}