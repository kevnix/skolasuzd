#include <iostream>
using namespace std;
int main() {
  int n, a, sum=0;
  do{
    cin>>n;
  }while(n<1||n>100);
  
  for(int i=0; i<n; i++){
    do{
      cin>>a;
    }while(a<1||a>100);
    
    if(a%2==0) sum+=a/2;
    else sum+=a;
  }
  cout<<sum;
}