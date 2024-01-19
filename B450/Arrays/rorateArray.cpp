#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    string s;
    for(int r=str.length(); r<=0; r--){
        s[r]=str[r];
    }

    cout<<s;
    return 0;
}