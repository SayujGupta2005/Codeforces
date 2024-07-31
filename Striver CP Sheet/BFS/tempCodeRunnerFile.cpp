#include<bits/stdc++.h>
using namespace std;

int n,m;
long long int k;
long long int dp[21][21];
long long int countpaths(int i,int j,long long int t,vector<vector<long long int>> &matrix){

    long long int down=0;
    long long int right=0;
    t=t^matrix[i][j];
    if((i==n-1 && j==m-1)&&(t==k)){
        return 1;
    }
    else if ((i==n-1 && j==m-1)&&(t!=k)) {
        return 0;
    }
    if(dp[i][j]!=-1){
        if(dp[i][j]>0)return 1;
        else return 0;
    }
    if(i+1<=n-1) down=countpaths(i+1,j,t,matrix);
    if(j+1<=m-1) right=countpaths(i,j+1,t,matrix);
    return dp[i][j]=down+right;
}


int main(){
    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>k;
    vector<vector<long long int>>matrix(n,vector<long long int>(m,0));
    for(int i{0};i<n;i++){
        for(int k{0};k<m;k++){
            int u;
            cin>>u;
            matrix[i][k]=u;
        }
    }
    
    long long int count=countpaths(0,0,0,matrix);
    if(count>2) count=count-2;
    cout<<count;
    return 0;
}