// Find the Factors of a Number

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num;

  cout << "Enter a Number: ";
  cin >> num; 

  cout << "Factor of Number "<< num<< " is: ";
  for(int i=1; i<num; i++){
    if(num % i == 0){
      cout << i << " ";
    }
  }

cout << "\n\n";
return 0;
}