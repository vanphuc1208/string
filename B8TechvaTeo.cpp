#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string res="";
    for(char x:s) {
        if(x!='2'&& x!='8' && x!='t' && x!='e' && x!='c' && x!='h') res+=x;
    }
    if(res.size()==0) cout<<"EMPTY";
    else cout<<res;
}
