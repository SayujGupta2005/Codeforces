//Recursive approach
#include <bits/stdc++.h>
using namespace std;

bool canBeZero(int index, int currentSum, int n, int a[]) {
    if (index == n) {
        return (currentSum % 360 == 0);
    }
    return canBeZero(index + 1, currentSum + a[index], n, a) ||
           canBeZero(index + 1, currentSum - a[index], n, a);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (canBeZero(0, 0, n, a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> dp;

string getKey(int index, int currentSum) {
    return to_string(index) + "," + to_string(currentSum);
}
bool canBeZero(int index, int currentSum, int n, int a[]) {
    if (index == n) {
        return (currentSum % 360 == 0);
    }
    
    string key = getKey(index, currentSum);
    if (dp.find(key) != dp.end()) {
        return dp[key];
    }
    
    bool addRotation = canBeZero(index + 1, currentSum + a[index], n, a);
    bool subtractRotation = canBeZero(index + 1, currentSum - a[index], n, a);

    dp[key] = addRotation || subtractRotation;
    return dp[key];
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (canBeZero(0, 0, n, a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
