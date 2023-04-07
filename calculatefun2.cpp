#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b, string c) {
  if (c == "+") {
    cout << a + b;
  }
}

int sub(int a, int b, string c) {
  if (c == "-") {
    cout << a - b;
  }
}

int multi(int a, int b, string c) {
  if (c == "*") {
    cout << a * b;
  }
}

int devide(int a, int b, string c) {
  if (c == "/") {
    cout << a / b;
  }
}

int sym(int a, int b, string c) {
  if (c != "+" && c != "-" && c != "*" && c != "/" ) {
    cout <<"invalide Symbol: ";
}
}

int main () {
  int a, b;
  string symbol;

  cout << "Enter a 1st number: ";
  cin >> a;

  cout << "Enter 2nd Number: ";
  cin >> b;

  cout << "Enter a symbol: ";
  cin >> symbol;

  sum(a, b, symbol);
  sub(a, b, symbol);
  multi(a, b, symbol);
  devide(a, b, symbol);
  sym(a, b, symbol);
  return 0;
}