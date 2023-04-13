#include <iostream>
using namespace std;
int main() {
  string vards, salikts="";

  for(int i=0; i<5; i++){
    cin>>vards;
    salikts +=vards[0];
  }
  cout<<salikts;
}