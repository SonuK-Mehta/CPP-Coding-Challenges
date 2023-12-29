#include<iostream>
#include<cmath>
using namespace std;

double squareRoot (double a){

  double floatNum = floor(sqrt(a));
  double sqrtNum = sqrt(a);

  cout << "floor value: " << floatNum << endl;
  cout << "Square value: " << sqrtNum << endl;

  if(floatNum == sqrtNum){
    return true;
  } else return  false;

}

int main() {
cout << "\n\n";

  double a;
  cout << "Enter a Number: "; cin >> a;

  double result = squareRoot(a);

  if(result == true)
    cout << "It's Perfect Square Root...";
  else cout << "Not a Perfect Squae Root...";

cout << "\n\n";
  return 0;
}