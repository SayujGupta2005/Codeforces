#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int v[n];
    for(long long int i{0};i<n;i++){
        cin>>v[i];
    }
    long long int tcount=0;
    long long int mi=INT_MAX;
    for(long long int i{n-1};i>=0;i--){
        if(v[i]<mi){
            tcount+=v[i];
            mi=v[i];
        }
        else{
            mi=max(0LL, mi- 1);
            tcount += mi;
        }
    }
    cout<<tcount;
    return 0;
}

