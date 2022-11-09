#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int cnt=1;
    string res="";
    while(cin>>s) {
       if(cnt%2==0) {
        reverse(s.begin(),s.end());
        res+=s+" ";
       }
       else res+=s+" ";
       cnt++;
    }
    res.pop_back();
    cout<<res;
    return 0;
}
