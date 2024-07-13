#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int i = 0;
    while (i < n) {
        int x;
        cin >> x;
        arr1[i] = x;
        arr2[x - 1] = i + 1; 
        i++;
    }
    for (int c = 0; c < n; c++) {
        cout << arr2[c] << ' ';
    }
    return 0;
}
