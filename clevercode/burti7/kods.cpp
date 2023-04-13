#include <iostream>
#include <string>
using namespace std;
int main() {
  string vards;
  char b1, b2;
  cin>>vards>>b1>>b2;
  for(int i=0; i<vards.length(); i++){
    if(vards[i]==b1){
      vards[i]=b2;
    }
  }
  cout<<vards;
}