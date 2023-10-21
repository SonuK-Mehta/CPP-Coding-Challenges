

#include<iostream>
using namespace std;

int main(){
cout <<"\n\n\n";

int num1, num2;
cout << "Enter two Number: ";
cin >> num1 >> num2; 


    if (num1 == num2)
        cout << "both are equal"; else if (num1 > num2)
        cout << num1 << " is greater than " << num2;
    else
        cout << num2 << " is greater than " << num1;

cout <<"\n\n";   
return 0;
}