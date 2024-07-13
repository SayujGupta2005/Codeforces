#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,x,y;
    cin>>i;
    while(i--){
        cin>>x>>y;
        if(x<2) cout<<x<<endl;
       
        else{
            int ans{0};
            if((x-2)%y){
                ans=(x-2)/y+2; }
            else{
                ans=(x-2)/y+1;}
            
            cout<<ans<<endl;
            }
    }
    return 0;
}