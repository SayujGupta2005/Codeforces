#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int arr[i];
    for( int u{0};u<i;u++){
        int z;
        cin>>z;
        arr[u]=z;
    }
    int max{1};
    int count{1};
    for(int p{0};p<i-1;p++){
        if(arr[p]<arr[p+1]){
            count+=1;
            if(max<count){
                max=count;
                }

        }
        else{
           count=1;
        }
    }
    cout<<max;
    return 0;
}