#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> st;
    st.push(-1);
    int maxLength = 0, count = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                int length = i - st.top();
                if (length > maxLength) {
                    maxLength = length;
                    count = 1;
                } else if (length == maxLength) {
                    count++;
                }
            }
        }
    }
    if(maxLength==0) count=1;
    cout << maxLength << " " << count << endl;
    return 0;
}
