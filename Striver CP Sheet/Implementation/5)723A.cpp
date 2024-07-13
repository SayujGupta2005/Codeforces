#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> d{a,b,c};
    sort(d.begin(),d.end());
    cout<<(d[2]-d[0]);
    return 0;
}