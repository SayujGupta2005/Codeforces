#include<bits/stdc++.h>
using namespace std;
void fcheck(float &a,int &count,int &trigger){
    int A=floor(a);
    if(a==1){
        trigger=0;
    }
    else{
    if(A/2!=a/2 && A/3!=a/3){
         trigger=0;
         count=-1;
    }
    else if(A/2==a/2){
        count++;
        a=a/2;
    }
    else if(A/3==a/3){
        count++;
        a=a/3;
    }}
}
int main(){
    float n,m;
    cin>>n>>m;
    float z=m/n;
    int Z= floor(z);
    if(Z!=z){
        cout<<-1<<endl;
    }
    else if(z==1){
        cout<<0<<endl;
    }
    else{
        int count{0};
        int trigger=1;
        while(trigger){
            fcheck(z,count,trigger);
        }
        cout<<count;
    }


    return 0;
}