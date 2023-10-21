// Find the Sum of N Natural Numbers in C++

#include<iostream>
using namespace std;

int main(){
cout <<"\n\n\n";

 int num;
    cout << "Enter a number : "; 
    cin >> num;
    
    int sum=0;
    
    for(int i=1;i<=num;i++) 
        sum+=i;

    cout << sum;

cout <<"\n\n";   
return 0;
}


/*
  Using Formula for the Sum of Nth Term -

  int n;
    
  cout << "Enter a number : "; 
  cin >> n;
  cout << n*(n+1)/2;


*/