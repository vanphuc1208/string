#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt[256]={0};
    for(char x:s) {
        cnt[x]++;
        if(cnt[x]==2) {
            cout<<(char)x;
            return 0;
        }
    }
    cout<<"NONE";
    return 0;
}
