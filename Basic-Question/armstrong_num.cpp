// Armstrong Number in C++
//If the sum of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.

#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, p, q, rem, sum = 0, count = 0, cnt, add = 1;
  cout << "Enter a Number: ";
  cin >> num;

  q = num;
  p = num;

  while(p != 0){ 
    p = p/10;     
    count++;
  }

  cnt = count;
  cout << "Number of Digit is: "<< count;

  while(q != 0){
    rem = q % 10;

      while(cnt != 0){   
        add = add * rem;
        cnt--;
      }
      
    sum = sum + add; 
    add = 1;
    cnt = count;
    q = q / 10;
  }

  cout << "\nOutput of Number "<<num<<" is: "<< sum;

  if(num == sum)
    cout << "\nIt's a Armstrong Number";
  else 
    cout << "\nIt's not a Armstrong Number";


cout << "\n\n";
return 0;
}