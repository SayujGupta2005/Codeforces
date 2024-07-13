#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool check=true;
    map<char,int> m1;
    map<char,int>m2;
    for(char c:s){
        m1[c]++;
    }
    for(auto p:m1){
        if(p.second%n!=0){
            cout<<-1;
            check=false;
            break;
        }
        m2[p.first]=p.second/n;
    }
    if(check){
        for(int i=0;i<n;i++){
            for(auto p:m2){
                cout<<string(p.second,p.first);
            }
        }
    }
    
    return 0;
}