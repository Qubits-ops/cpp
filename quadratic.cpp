#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double a,b,c;
  cout << "enter a: ";
  cin >> a;
  cout << "enter b: ";
  cin >> b;
  cout << "enter c: ";
  cin >> c;

  double root1;
  double root2;

  root1 = (-b + sqrt(b*b - 4*a*c))  / (2*a);
  root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
  cout << " root 1 is " << root1 << "\n";
  cout << " root 1 is " << root2 << "\n";
  
  
}
