#include <iostream>
using namespace std;
int addi(int a, int b) {
  return a + b;
}

int subs(int a, int b) {
  return a - b;
}

int mult(int a, int b) {
  return a * b;
}

int divi(int a, int b) {
  return a / b;
}

int calculate(string x, int y, int z) {
  int result;

  if (x == "+") {
    result = addi(y, z);
  }

  if (x == "-") {
    result = subs(y, z);
  }
  
  if (x == "*") {
    result = mult(y, z);
  }
  
  if (x == "/") {
    result = divi(y, z);
  }

  return result;
}


int main () {
  int n1, n2;
  string symbol;

  cout << "Enter a 1st number: ";
  cin >> n1;

  cout << "Enter 2nd Number: ";
  cin >> n2;

  cout << "Enter a symbol: ";
  cin >> symbol;

  cout << calculate(symbol, n1, n2);

  return 0;
}
