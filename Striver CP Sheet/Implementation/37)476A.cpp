#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans=-1;
    for(int y{n/2};y>=0;y--){
        
        int x=n-2*y;
        if(x>=0){
            int k=x+y;
            if(k%m==0){
                ans=k;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
