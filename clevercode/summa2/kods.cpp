#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() {
  string str;
  long sk;
  do{
    cin>>str;
  }while(str.length()>100);
  
  long garums = str.length(); 
  long skaitli[garums];
  for(long i=0; i<garums; i++){
    stringstream ss(str.substr(i, garums));
    ss>>sk;
    skaitli[i]=sk;
  }

  long sum=0;
  for(long i=0; i<garums; i++){
    sum+=skaitli[i];
  }

  cout<<sum;

}