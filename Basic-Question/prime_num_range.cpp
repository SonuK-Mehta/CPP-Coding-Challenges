// Check Prime Number between given Range in C++ 

#include<iostream>
using namespace std;

int primeNumber(int num){

  if(num < 2)
    return false;
  else {
    int x = num/2;
    for (int i = 2; i < x; i++){
      if(num % i == 0){
        return false;
      }
    }
  }
  return true;
}

int main(){
cout << "\n\n";

  int num1, num2;
  cout << "Enter the Starting Number: ";
  cin >> num1;

  cout << "Enter the Ending Number: ";
  cin >> num2;

  cout << "Prime Number between "<<num1<<" and "<<num2<<" is: \n";

  for(int i=num1; i<num2; i++){
    if(primeNumber(i))
      cout << i << endl;
  }

cout << "\n\n";
return 0;
}