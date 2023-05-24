#include <iostream>

using namespace std;

int main() {
  int A, N;
  cin >> A >> N;

  double currSk = A;
  for (int i = 1; i < N; i++) {
    currSk = currSk + 1 / currSk;
  }

  int sk = static_cast<int>(currSk);
  cout << sk;
}
