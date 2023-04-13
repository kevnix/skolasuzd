#include <iostream>
using namespace std;
int main() {
    long a, b, c;
    cin >> a >> b >> c;

    if(a+b > 0 || a+c>0 || b+c >0) cout<<"VAR\n";
    else cout<<"NEVAR\n";
    if(a+b==0 || a+c==0 || b+c==0) cout<<"VAR\n";
    else cout<<"NEVAR\n";
    if(a+b<0 || a+c<0 || b+c<0) cout<<"VAR\n";
    else cout<<"NEVAR\n";
    /*cout << ((a + b > 0 || a + c > 0 || b + c > 0) ? "VAR" : "NEVAR") << endl;
    cout << ((a + b == 0 || a + c == 0 || b + c == 0) ? "VAR" : "NEVAR") << endl;
    cout << ((a + b < 0 || a + c < 0 || b + c < 0) ? "VAR" : "NEVAR") << endl;*/

    return 0;
}
