#include <iostream>
#include <string>
using namespace std;
int main() {
  string v1, v2;
  char b;
  bool var = true;
  cin >> v1 >> v2;
    
  for (int i=0; i<v2.length(); i++) {
    b=v2[i];
    if (v1.find(b) == string::npos) {
      var = false;
      break;
    }
  }
  if (var) {
    cout << "Var" << std::endl;
  } else {
    cout << "Nevar" << std::endl;
  }
  return 0;
}
