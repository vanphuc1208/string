#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
   if (s[2]!='/') s= '0'+s;
   if(s[5]!='/') s.insert(3,"0");
   cout<<s;
    return 0;
}
