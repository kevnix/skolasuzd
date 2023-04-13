#include <iostream>
using namespace std;
int main() {
  string vards, salikts;
  int sk;
  cin>>sk;
  for(int i=0; i<sk; i++){
    cin>>vards;
    salikts+=vards[0];
  }
  cout<<salikts;
}