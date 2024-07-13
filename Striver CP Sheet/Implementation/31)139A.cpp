#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> arr(7);
    cin>>n;
    int i{0};
    while(i<7){
        cin>>arr[i];
        i++;
    }
    int count{0};
    int day{0};
    while(count<n){
        count+=arr[day];
        // cout<<count<<endl;
        if(day==6 && count<n){
            day=0;
        }
        else if(day==6 && count>n){
            day++;
            break;
        }
        else{
            day++;
        }
    }
    cout<<day<<endl;
    return 0;
}