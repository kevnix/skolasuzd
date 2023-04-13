#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  string v1, v2;
  int n;
  cin>>v1>>v2;
  cin>>n;
  string list[n];

  for(int i=0; i<n; i++){
    cin>>list[i];
    if(list[i]==v1){
      list[i]=v2;
    }
  }
  sort(list, list+n);
  
  for(int i=0; i<n; i++){
    cout<<list[i]<<endl;
  }
}