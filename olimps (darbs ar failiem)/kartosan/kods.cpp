#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inputFile("kartosan.dat");
  ofstream outputFile("kartosan.rez");

  int N;
  inputFile >> N;

  int sk[N];
  for (int i = 0; i < N; i++) {
    inputFile >> sk[i];
  }
  sort(sk, sk + N);

  for (int i = 0; i < N; i++) {
    outputFile << sk[i] << endl;
  }

  inputFile.close();
  outputFile.close();
}
