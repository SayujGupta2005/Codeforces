#include <bits/stdc++.h>
using namespace std;
int main() {
    int n{0};
    cin>>n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin>>heights[i];
    }
    int max_height = *max_element(heights.begin(), heights.end());
    int min_height = *min_element(heights.begin(), heights.end());
    int taller_than_min = find(heights.begin(), heights.end(), max_height) - heights.begin();
    int shorter_than_max = find(heights.rbegin(), heights.rend(), min_height) - heights.rbegin();
    int swaps = taller_than_min + shorter_than_max;
    if (taller_than_min + shorter_than_max >= n) {
        swaps -= 1; 
    }
    cout<<swaps<<endl;
    return 0;
}
