#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    cin>>a>>b>>c>>d;
    int s=0;
    if(a==b & a==c & a==d){
        s=s+1;
    }
    if(b==c & b==d){
        s=s+1;
    }
    if(c==d){
        s=s+1;
    }
    cout<<s;
    return 0;
}