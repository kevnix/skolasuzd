#include <iostream>
using namespace std;
int main() {
  long a, cipsum=0;
  cin>>a;
  while(a>0){
    cipsum+=a%10;
    a/=10;
  }
  cout<<cipsum;
}