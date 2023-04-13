#include <iostream>
using namespace std;
int main() {
  string v1, v2;
  do{
    cin>>v1;
    cin>>v2;
  }while(v1.length()>20 || v2.length()>20);
  
  if(v1.length()>v2.length()){
    cout<<"Pirmais";
  }else if(v1.length()<v2.length()){
    cout<<"Otrais";
  }else{
    cout<<"Pirmais";
  }
}