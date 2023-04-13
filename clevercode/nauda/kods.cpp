#include <iostream>
using namespace std;
int main() {
  int n1, n2, n3, m=0, p=0;
  cin>>n1>>n2>>n3;

  p = n1*240+n2*12+n3;
  m = p/100;
  p=p%100;

  cout<<m<<" "<<p;
}