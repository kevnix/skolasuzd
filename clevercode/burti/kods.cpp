#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string rota, vards;
    cin >> rota >> vards;
    sort(rota.begin(), rota.end()); // sakārto Rotas klucīšus alfabētiski
    sort(vards.begin(), vards.end()); // sakārto Zigmāra vārda burtus alfabētiski

    bool varSalikt = true;
    int i = 0, j = 0;
    while (i < rota.length() && j < vards.length()) {
        if (rota[i] == vards[j]) {
            i++;
            j++;
        } else if (rota[i] < vards[j]) {
            i++;
        } else {
            varSalikt = false;
            break;
        }
    }

    if (j < vards.length()) {
        varSalikt = false;
    }

    if (varSalikt) {
        cout << "VAR" << endl;
    } else {
        cout << "NEVAR" << endl;
    }

    return 0;
}
