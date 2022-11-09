#include <bits/stdc++.h>
using namespace std;
void lower(string &s) {
    for(char &x:s) {
        x=tolower(x);
    }
}
int main() {
    string s;
    getline(cin,s);
    set<string> se;
    stringstream ss(s);
    string x;
    while(ss>>x) {
        lower(x);
        se.insert(x);
    }
    cout<<se.size();
    
    return 0;
}
