#include <iostream>
using namespace std;

int main() {
  string ievade;
  cin >> ievade;

  string txt;
  char prevChar = '\0';

  for (int i = 0; i < ievade.length(); i++) {
    char currChar = ievade[i];
    if (currChar != prevChar) {
      txt += currChar;
      prevChar = currChar;
    }
  }
  cout << txt;
}
