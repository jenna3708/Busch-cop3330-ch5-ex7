//chapter 5 exercise 7
//Jenna Busch
//quadratic equation 

#include <iostream>
#include <cmath>
using namespace std;


int main() {
  double a;
  double b;
  double c;
  double x1;
  double x2;
  double real;
  double imaginary;
  double d;

  cout << "Please enter your a, b, and c for the quadratic equation\n";

  cout << "a:";
  cin >> a;

  cout << "b:";
  cin >> b;

  cout << "c:";
  cin >> c;
  
  //find our discriminant 
  d = b*b - 4*a*c;

  //if d is greater than 0
  if (d > 0) 
  {
    x1 = (-b + sqrt(d)) / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);
    cout << "Roots are real and different.\n";
    cout << "x1 = " << x1 <<"\n";
    cout << "x2 = " << x2 <<"\n";
  }
  //if d = 0
  else if (d == 0) 
  {
    cout << "Roots are real and same.\n";
    x1 = -b/(2*a);
    cout << "x1 = x2 =" << x1;
  }
  //if d is less than 0
  else 
  {
    real = -b/(2*a);
    imaginary =sqrt(-d)/(2*a);
    cout << "Roots are complex and different.\n";
    cout << "x1 = " << real << "+" << imaginary << "i"<<"\n";
    cout << "x2 = " << real << "-" << imaginary << "i"<<"\n";
  }

  return 0;

} 