#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int A[n][m], B[n][m];
  for (int i = 0; i < 2*n; i++) {
    for (int j = 0; j < m; j++) {
      if (i < n) {
        cin >> A[i][j];
      } else {
        cin >> B[i-n][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << A[i][j] + B[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
