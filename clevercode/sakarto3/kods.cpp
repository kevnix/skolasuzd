#include <iostream>

using namespace std;

int main() {
    long a, b, c;
    cin >> a >> b >> c;

    // Bubble sort
    if (a > b) {
        long temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        long temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        long temp = a;
        a = b;
        b = temp;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
