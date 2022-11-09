#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    if(a.size()!=b.size()) return a.size()<b.size();
    return a<b;
}
int main() {
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string x;
    while(ss>>x) {
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for (auto x:v) {
        cout<<x<<" ";
    }
    
    return 0;
}
