#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
    string m=s;
    reverse(s.begin(),s.end());
    return s==m;
}
int main() {
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string x;
    while(ss>>x) {
        if(check(x)) v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
    
    return 0;
}
