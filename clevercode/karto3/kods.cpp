#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int array[n];
  bool nulle=false;
  
  for(int i=0; i<n; i++){
    cin>>array[i];
    if(array[i]==0){
      nulle=true;
    }
  }

  if(nulle==true){
    for(int i=0; i<n; i++){
      if(array[i]!=0){
        array[i] = -array[i];
      }
    }
  }

  sort(array, array+n);
  for(int i=0; i<n; i++){
    cout<<array[i]<<endl;
  }

  
}