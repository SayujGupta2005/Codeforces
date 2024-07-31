#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if (n&1){
        cout<<"No"<<endl;
    }
    else{
        stack <char> st;
        for (int i=0;i<n;i++){
            if(!st.empty() && s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if (!st.empty()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}