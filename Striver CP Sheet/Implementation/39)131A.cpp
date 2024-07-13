#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int check=0;
    if(s.size()>1){
        check=1;
        for(int i{1};i<s.size();i++){
            if(int(s[i])>=96){
                check=0;
                break;
            }
        }
    }
    else{
            check=1;
    }
    if(check==1){
    for(auto c:s){
        if(int(c)>=65 && int (c)<=91){
            cout<<char(int(c)+32);
        }
        else{
            cout<<char(int(c)-32);
        }
    }}
    else{
        cout<<s;
    }
    return 0;
}