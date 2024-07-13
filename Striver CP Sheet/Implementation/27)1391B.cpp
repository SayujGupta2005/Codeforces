#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    while (p--) {
        int n, m;
        cin >> n >> m;
        vector<string> fac(n);
        for (int i = 0; i < n; ++i) {
            cin >> fac[i];
        }
        int count = 0;
        for (int y = 0; y < n; ++y) {
            if (fac[y][m - 1] == 'R') {
                count += 1;
            }
        }
        for (int z = 0; z < m; ++z) {
            if (fac[n - 1][z] == 'D') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
