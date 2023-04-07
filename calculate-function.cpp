#include <iostream>
using namespace std;

void sum(int a, int b) {
  cout << a + b;
}

int sub(int a, int b) {
  return a - b;
 }

int multi(int a, int b) {
  return a * b;
} 

int devide(int a, int b) {
  return a / b;
}


int main () {
  int n1, n2, result;
  string symbol;

  cout << "Enter number A: ";
  cin >> n1;

  cout << "Enter Number B: ";
  cin >> n2;

  cout << "Enter Symbol: ";
  cin >> symbol;

  if (symbol == "+") {
   
    sum(n1, n2);
  }

  if (symbol == "-") {
    
    cout << sub(n1, n2);
  }

  if (symbol == "*") {
    
    cout << multi(n1, n2);
  }

  if (symbol == "/") {
    
    cout << devide(n1, n2);
  }

  if (symbol != "+"
    && symbol != "-"
    && symbol != "*"
    && symbol != "/"
  ) {
    cout << "Invalid symbol!";
  }

  return 0;
}
