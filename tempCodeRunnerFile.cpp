#include<bits/stdc++.h>
using namespace std;

int n;
long long int s;
int arr[100001];
int dp[100001][1000000001];

int rec(int x,long long int s){
    if(s==0) return 0;
    if(x<0||s<0) return 0;
    if(dp[x][s]!=-1) return dp[x][s];
    int include=0,exclude=0;
    exclude=rec(x-1,s);
    if(s-arr[x]>=0){
        include=rec(x-1,s-arr[x])+1;
    }
    return dp[x][s]=max(include,exclude);
}

int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans=rec(n-1,s);
    if(ans==0){
    cout<<ans<<endl;}
    else{
        cout<<ans-1<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int n;
// long long int s;
// int arr[100001];
// int dp[100001];

// // Function to find the maximum number of elements with sum <= s
// int rec(int x, long long int s) {
//     if (s == 0) return 0; // Base case: sum is zero, no elements needed
//     if (x < 0 || s < 0) return 0; // Base case: invalid state
//     if (dp[x] != -1) return dp[x]; // Return memoized result
    
//     // Exclude the current element
//     int exclude = rec(x - 1, s);
    
//     // Include the current element if it fits in the sum
//     int include = 0;
//     if (s - arr[x] >= 0) {
//         include = rec(x - 1, s - arr[x]) + 1;
//     }
    
//     // Memoize and return the result
//     return dp[x] = max(include, exclude);
// }

// int main() {
//     cin >> n >> s;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     memset(dp, -1, sizeof(dp));
//     cout << rec(n - 1, s)-1 << endl;
//     return 0;
// }
