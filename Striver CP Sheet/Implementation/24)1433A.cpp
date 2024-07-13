#include<bits/stdc++.h>
using namespace std;
int main(){
    int q{0};
    cin>>q;
    for(int p{0};p<q;p++){int n;
    cin>>n;
    string y=to_string(n);
    int i{y.length()};
    int x= stoi(string(1, y[0]));
    if(x==1){
        cout<<i*(i+1)/2<<endl;
    }
    else{
        cout<<((x-1)*10)+i*(i+1)/2<<endl;
    }}    
    return 0;
}