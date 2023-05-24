#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("virkne3.in");
    ofstream outputFile("virkne3.out");

    char input[251];
    inputFile.getline(input, 251);

    char txt[251];
    char prevChar = '\0';
    int index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != prevChar) {
            txt[index++] = input[i];
            prevChar = input[i];
        }
    }

    txt[index] = '\0';

    outputFile << txt << endl;

    inputFile.close();
    outputFile.close();
}
