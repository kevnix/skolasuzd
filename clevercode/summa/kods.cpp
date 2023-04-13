#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cipari = log10(n) + 1; // noskaidro cik ciparu ir skaitlī n
    int summa = 0;
    int pag = n;

    for(int i = 0; i < cipari; i++) {
        int pedejais = pag % 10;
        pag /= 10;
        pag += pow(10, cipari - 1) * pedejais; //parvieto pedejo ciparu uz skaitla sakumu un parejos ciparus pa vienu poz uz kreisi
        summa += pag;
    }

    cout << summa;
}
