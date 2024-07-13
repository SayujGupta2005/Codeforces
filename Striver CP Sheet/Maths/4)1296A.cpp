#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    while(n--){
        cin>>i;
        int count=0;
        for(int c{0};c<i;c++){
            int y;
            cin>>y;
            if(y&1) count++;
        }
        if(count==i && i&1) cout<<"YES"<<endl;
        else if(count>0 && count<i) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
