#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> getRoundNumbers(int n) {
    vector<int> roundNumbers;
    int powerOf10 = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            roundNumbers.push_back(digit * powerOf10);
        }
        n /= 10;
        powerOf10 *= 10;
    }
    reverse(roundNumbers.begin(), roundNumbers.end());
    return roundNumbers;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers = getRoundNumbers(n);
        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); ++i) {
            cout << roundNumbers[i];
            if (i != roundNumbers.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}