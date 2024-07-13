#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    int array[a];
    int i=0;
    while (i<a){
        cin>>array[i];
        i=i+1;
    }
    int n=0;
    int s=0;
    while (n<a){
        if(array[n]>=array[b] && array[n]!=0){
            s=s+1;
            n=n+1;
        }
        else{
            n=n+1;
        }
    }
    cout<<s<<endl;
    return 0;
}