// Coding for voting system -

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int age, rem = 0;
  
  cout << "Enter Your Age: ";
  cin >> age;

  if(age >= 18){
    cout << "You can vote";
  } 
  else {
    cout << "You are not eligible for vote";
    rem = 18 - age;
    cout << "\nYou can vote after "<< rem << " years";
  }

cout << "\n\n";
return 0;
}
