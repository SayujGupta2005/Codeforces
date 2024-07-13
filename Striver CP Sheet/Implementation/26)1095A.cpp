#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a{""};
    int i{0};
    int z{1};
    while(i<n){
      a+=s[i];
      i+=z;
      z++;
    }
    cout<<a<<endl;
    return 0;
}