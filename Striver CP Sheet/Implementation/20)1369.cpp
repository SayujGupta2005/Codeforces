#include<bits/stdc++.h>
using namespace std;

void add(long long int &a,long long int &b){
    if(a>b || a==b){
        b+=a;
    }
    else{
        a+=b;
    }
}

int main(){
    int i{0};
    cin>>i;
    while(i>0){
        long long int a,b,n;
        cin>>a>>b>>n;
        int count{0};
        while(a<n ||a==n || b<n ||b==n){
            add(a,b);
            count+=1;
        }
        cout<<count-1<<endl;
        i--;
    }
    return 0;
}