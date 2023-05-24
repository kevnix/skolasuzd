#include <iostream>
using namespace std;
int main() {
  int arr[10];
  int sk;
  for(int i=0; i<10; i++){
    cin>>sk;
    arr[i]=sk;
  }
  
  int sum = arr[0]+arr[9];;

  int lielsk=0;
  int mazsk=0;
  for(int i=0; i<10; i++){
    if(arr[i]>arr[0]) lielsk++;
    else if(arr[i]<arr[9]) mazsk++;
  }
  cout<<sum<<" "<<lielsk<<" "<<mazsk;
}