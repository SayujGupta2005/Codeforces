/*

This dp code is correct but wont work due to n^18 so we'll have to do bit manipulation

*/

// #include<bits/stdc++.h>
// using namespace std;

// unordered_map<string,long long int> dp;

// string getkey(long long int n,long long int k){
//     return to_string(n)+','+to_string(k);
// }

// long long int func(long long int n,long long int k){
//     if(n==0) return 0;
//     if(k==0) return 0;

//     string key = getkey(n,k);
//     if (dp.find(key) != dp.end()) {
//         return dp[key];
//     }
    
//     dp[key]=max(n^func(n-1,k-1),func(n-1,k));

//     return dp[key];

// }

// int main(){
//     long long int n,k;
//     cin>>n>>k;
//     cout<<func(n,k);
//     return 0;
// }

/*

Code using bit manipulation

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n;
    }
    else{
        int ans = 1;
        while(ans<=n){
            ans<<=1;
        }
        ans--;
        cout<<ans;

    }
    return 0;
}
