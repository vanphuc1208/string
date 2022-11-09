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
    for(char &x:s) {
        if(x=='.' ||x==','||x=='!'||x=='?') x=' ';
    }
    stringstream ss(s);
    string x;
    string res="";
    while(ss>>x) {
        res+=x+" ";
    }
    res.pop_back();
    cout<<res;
    return 0;
}
