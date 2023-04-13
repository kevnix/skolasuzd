#include <iostream>
using namespace std;
int main() {
  string vards;
  char burts;
  int x=0;
  cin>>vards;
  cin>>burts;

  for(int i=0; i<vards.length(); i++){
    if(vards[i]==burts) x++;
  }
  cout<<x;
}