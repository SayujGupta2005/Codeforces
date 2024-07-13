#include<bits/stdc++.h>
using namespace std;
long int cards(long int i){
    long int y=(i*(i+1))/2;
    return y;
}
int main(){
    long int n;
    cin>>n;
    long int z{0};
    long int i{0};
    while(z<=n){
        i+=1;
        z+=cards(i);
        
    }
    cout<<i-1;
    return 0;
}