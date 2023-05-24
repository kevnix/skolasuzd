#include <iostream>
using namespace std;
int main() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;

  int skaitlis = 1;
  int nenosvitrotais = 0;

  while (n > 0) {
    bool dalasBezAtlikuma = false;

    if (skaitlis % a == 0 || skaitlis % b == 0 || skaitlis % c == 0) {
      dalasBezAtlikuma = true;
    }

    if (!dalasBezAtlikuma) {
      n--;
      nenosvitrotais = skaitlis;
    }

    skaitlis++;
  }

  cout << nenosvitrotais << endl;

  return 0;
}
