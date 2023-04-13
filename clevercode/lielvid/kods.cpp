#include <iostream>
using namespace std;
int main() {
  int n, sum=0, vid=0, sk=0;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
  }
  vid=sum/n;

  for(int i=0; i<n; i++){
    if(a[i]>vid) sk++;
  }
  cout<<sk;
  
}