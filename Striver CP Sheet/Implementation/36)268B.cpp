#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i{1};
    int count =n;
    while(n>1){
        count +=i*(--n);
        i++;
    }
    cout<<count;
}