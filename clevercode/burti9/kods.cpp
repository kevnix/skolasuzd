#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  string vards;
  cin>>vards;
  sort(vards.begin(), vards.end());
  cout<<vards;
}