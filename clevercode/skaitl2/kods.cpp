#include <iostream>
using namespace std;
int main() {
  int n, c, k;
  cin>>n>>c;

  k=n+1;
  while (k <= 1000000) {
    int pag = k;
    while (pag != 0) {
      if (pag % 10 == c) {
        cout << k;
        return 0;
      }
      pag /= 10;
    }
    k++;
  }
  return 0;
}