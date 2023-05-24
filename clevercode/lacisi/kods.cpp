#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<string> komix;
    for (int i = 0; i < N; i++) {
        string url;
        cin >> url;
        //string date_str = url.substr(37,4);
        //cout<<date_str << " ";
        komix.insert(url);
    }
    cout << komix.size() << endl;
    return 0;
}
