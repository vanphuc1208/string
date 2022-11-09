#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
    for(int i=0;i<s.length()-1;i++) {
        if((abs(s[i]-s[i+1]))!=1) return false;
    }
    return true;
}
int main() {
    string s;
    cin>>s;
    if(check(s)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
