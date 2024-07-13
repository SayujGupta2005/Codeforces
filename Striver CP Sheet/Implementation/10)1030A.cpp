#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n>0){
        int y;
        cin>>y;
        if(y==1){
            cout<<"HARD";
            c=1;
            break;
        }
        n--;
    }
    if(c==0){
        cout<<"EASY";
    }
    return 0;
}