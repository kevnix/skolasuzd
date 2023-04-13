#include <iostream>
using namespace std;
int main() {
  string vards;
  char b1, b2;

  cin>>vards;
  cin>>b1;
  cin>>b2;

  for(int i=0; i<vards.length(); i++){
    if(vards[i]==b1){
      cout<<b1;
      return 0;
    }else if(vards[i]==b2){
      cout<<b2;
      return 0;
    }
  }
}