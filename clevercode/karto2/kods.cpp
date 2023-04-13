#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;
  string vardi[n];

  for(int i=0;i<n;i++){
    cin>>vardi[i];
  }

  sort(vardi, vardi+n);

  for(int i=0;i<n;i++){
    cout<<vardi[i]<<endl;
  }
}