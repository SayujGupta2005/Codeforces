#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    for (auto& x:a) {
        x = tolower(x); 
    } 
    for(int i{0};i<a.length();i++){
        a[i];
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o'
        || a[i] == 'u' || a[i] == 'y'){
            a.erase(i,1);
            i--;
        }
    }
    int n=a.length();
    int i1{0};
    while(i1<n){
        cout<<'.'<<a[i1];
        i1++;
    }
    return 0;
}