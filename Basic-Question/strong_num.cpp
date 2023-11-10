/* C++ Program to check whether a number is a Strong Number or not -
  For Example: 145 
  145 = 1! + 4! + 5! =  145
*/

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, temp,fact = 1, add = 0, rem;
  cout << "Enter a Number: "; 
  cin >> num;

  temp = num;

  while(num != 0){
    rem = num % 10;      

      while(rem != 0){
        fact = fact * rem;
        rem --;
      }

    add += fact;
    fact = 1;
    num = num / 10;
  }

  if(temp == add)
    cout << "\nIt's a Strong Number.";
  else 
    cout << "\nNot a strong Number.";


cout << "\n\n";
return 0;
}