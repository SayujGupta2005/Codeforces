#include<bits/stdc++.h>
using namespace std;

string ans(stack<string> st){
    stack <string> s2;
    string answer;
    while(!st.empty()){
        s2.push(st.top());
        st.pop();
    }
    while(!s2.empty()){
        answer+=s2.top();
        if(s2.top()!="/") answer+="/";
        s2.pop();
    }
    return answer;
}

void fempty(stack <string> &s){
    while(!s.empty()){
        s.pop();
    }
}

int main(){
    int n;
    cin>>n;
    stack<string>s;
    while(n--){
        string dir;
        string cmd;
        cin>>cmd;
        if(cmd=="pwd"){
            if(!s.empty()){
                dir=ans(s);
                if(!s.empty()&&dir[0]!='/')dir="/"+dir;
                cout<<dir<<endl;
            }
            else{
                cout<<"/"<<endl;
            }
        }
        else{
            string str;
            cin>>str;
            if(str[0]=='/'){
                fempty(s);
                s.push("");
                str = str.substr(1);
            }
            string substr;
            char delimiter='/';
            stringstream ss(str);
            while(getline(ss,substr,delimiter)){
                if(!s.empty() && substr==".."){
                    s.pop();
                }
                else{
                    s.push(substr);
                }
            }
        }
    }
    return 0;
}


