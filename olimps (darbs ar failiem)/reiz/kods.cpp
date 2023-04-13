#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream ievades_fails;
  ofstream izvades_fails;

  ievades_fails.open("reiz.in");
  izvades_fails.open("reiz.out");

  cout<< "Ievadi skaitli\n";
  int N;
  ievades_fails >> N;
  izvades_fails << N*2;
  ievades_fails.close();
  izvades_fails.close();
  
}