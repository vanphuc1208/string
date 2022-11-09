#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    if(s.length()%2==1) {
        cout<<s[s.length()/2];
    }
    else cout<<"NOT FOUND";
    return 0;
}
