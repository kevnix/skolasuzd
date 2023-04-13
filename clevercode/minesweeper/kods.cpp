#include <iostream>

using namespace std;

const int MAX = 1010;

int n, m, k;
int laukums[MAX][MAX];

void minas(int a, int b) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int rinda = a + i, kol = b + j;
            if (rinda >= 0 && rinda < n && kol >= 0 && kol < m && laukums[rinda][kol] != -1) {
                laukums[rinda][kol]++;
            }
        }
    }
}

int main() {
    cin >> n >> m >> k;
    while (k--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        laukums[a][b] = -1;
        minas(a, b);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laukums[i][j] == -1) {
                cout << "*";
            } else {
                cout << laukums[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
