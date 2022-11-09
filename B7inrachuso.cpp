#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(char x:s) {
        if(isdigit(x)) {
           cout<<x;
         }
    }
    cout<<endl;
    for(char x:s) {
        if(!isdigit(x)) {
           cout<<x;
         }
    }
    return 0;
}
