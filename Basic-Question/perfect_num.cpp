/* Perfect Number Program in C++
  For Example: 28
  Divisors : 1 + 2 + 4 + 7 + 14 = 28
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
cout << "\n\n";

  int num, temp, add = 0;

  cout << "Enter a Number: ";
  cin >> num;

  temp = num;

  cout << "Divisors: ";

  for(int i = 1; i<num; i++){
    if(num % i == 0){
      cout << i << " ";
      add = add + i;
    }
  }

  cout << "\nAddition of Divisors is: "<< add;

  if(add == temp)
    cout << "\nIt's a Perfect Number";
  else
    cout << "\nIt's Not a Perfect Number";

cout << "\n\n";
return 0;
}