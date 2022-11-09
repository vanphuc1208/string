#include <bits/stdc++.h>
using namespace std;
bool checkupper(string s) {
    for(char x: s) {
        if(!isupper(x)) return false;
    }
    return true;
}
int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string x;
    int res=0;
    while(ss>>x) {
        if(checkupper(x)) res++;
    }
   cout<<res;
    return 0;
}
