#include <bits/stdc++.h>
using namespace std;
void upper(string &s) {
    for (char &x:s) {
        x=toupper(x);
    }
}
void lower(string &s) {
    for (char &x:s) {
        x=tolower(x);
    }
} 
int main() {
    string s;
    cin>>s;
    string tmp=s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    lower(tmp);
    cout<<tmp<<endl;
    upper(tmp);
    cout<<tmp<<endl;
    
    return 0;
}
