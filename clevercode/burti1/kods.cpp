#include <iostream>
using namespace std;
int main() {
  string vards;
  int x=0;
  cin>>vards;
  for(int i=0; i<vards.length(); i++){
    if(vards[i]=='a'){
      x++;
    } 
  }
  cout<<x;
}