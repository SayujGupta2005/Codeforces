#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,x,y;
    cin>>i;
    while(i--){
        cin>>x>>y;
        if(2*x<=y){
            cout<<x<<" "<<2*x<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }

        
    }
    return 0;
}