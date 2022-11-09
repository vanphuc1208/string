#include <bits/stdc++.h>
using namespace std;
void lower(string &s) {
    for(char &x:s) {
        x=tolower(x);
    }
}
int main() {
    string s;
    int res=0;
    while(cin>>s) {
        lower(s);
        if(s=="28tech") res++;
    }
    cout<<res;
    return 0;
}
