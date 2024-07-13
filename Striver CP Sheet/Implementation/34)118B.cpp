#include<bits/stdc++.h>
using namespace std;
int n;

void pattern(int n){
    int t=2*n+1;
    for(int s{n};s>0;s--){
            cout<<"  ";
        }
    cout<<0<<endl;
    for(int i{1};i<=n;i++){
        for(int s{n-i};s>0;s--){
            cout<<"  ";
        }
        for(int j{0};j<=i;j++){
            cout<<j<<" ";
        }
        for(int u{i-1};u>0;u--){
            cout<<u<<" ";
        }
        if(i>0){
        cout<<0;}
        cout<<endl;
    }
    for(int i{n-1};i>0;i--){
        for(int s{n-i};s>0;s--){
            cout<<"  ";
        }
        for(int j{0};j<=i;j++){
            cout<<j<<" ";
        }
        for(int l{i-1};l>0;l--){
            cout<<l<<" ";
        }

        if(i>0){
        cout<<0;}
        cout<<endl;
    }
    for(int s{n};s>0;s--){
            cout<<"  ";
        }
        cout<<0<<endl;
}

int main(){
    cin >> n;
    pattern(n);
    return 0;
}