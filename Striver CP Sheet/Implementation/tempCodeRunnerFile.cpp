#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i{0};i<n;i++){
        cin>>v[i];
    }
    int tcount=0;
    int mi=INT_MAX;
    for(int i{n-1};i>=0;i--){
        if(v[i]<mi){
            tcount+=v[i];
            mi=v[i];
        }
        else{
            mi=max(0, mi- 1);
            tcount += mi;
        }
    }
    cout<<tcount;
    return 0;
}