#include<bits/stdc++.h>
using namespace std;
int min(long int a,long int b,long int c){
    int min{0};
    if (a<b){
        min=a;
    }
    else{
        min=b;
    }
    if(c<min){
        min= c;
    }
    
    return min;
}
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long int f=(k*l)/nl;
    long int sl=c*d;
    long int salt=p/np;
    long int ans= min(f, sl, salt)/n;
    cout<<ans;
    return 0;
}