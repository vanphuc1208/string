#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string x;
    while(ss>>x) {
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (auto x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<string>());
    for (auto x:v) {
        cout<<x<<" ";
    }
    return 0;
}
