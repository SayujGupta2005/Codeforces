// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // void fcount(int &i,string s,int &count,vector<int>&arr){
// // //     while(i<s.length()-1){
// // //             if(s[i]=='0'){
// // //                 count+=1;
// // //                 if(s[i+1]=='1'){
// // //                     arr.push_back(count);
// // //                     count=0;
// // //                     break;
// // //                 }
// // //             } 
// // //         }
// // // }
// // // void check(int &i,string s,int &count,vector<int>&arr){
// // //     while(i<s.length()-1){
// // //             if(s[i]=='1'&&s[i+1]=='0'){
// // //                 i++;
// // //                 fcount(i,s,count,arr);
// // //                 break;
// // //             }
// // //             i++;
// // //         }
// // // }


// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     vector<int> arr{0};
// // //     if(n==0){
// // //         cout<<0<<endl;
// // //     }
// // //     else{
// // //         string s= to_string(n);
// // //         int count=0;
// // //         for(int i{0};i<s.length()-1;i++){
// // //             check(i,s,count,arr);
// // //         }
// // //         int sum = accumulate(arr.begin(), arr.end(), 0);
// // //         cout<<sum<<endl;
// // //     }
// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // void fcount(int &i, string s, int &count, vector<int>& arr){
// //     while(i < s.length()){
// //         if(s[i] == '0'){
// //             count++;
// //             i++;
// //         }
// //         else{
// //             arr.push_back(count);
// //             count = 0;
// //             break;
// //         }
// //     }
// // }

// // void check(int &i, string s, int &count, vector<int>& arr){
// //     while(i < s.length()-1){
// //         if(s[i] == '1' && s[i+1] == '0'){
// //             i++;
// //             fcount(i, s, count, arr);
// //         }
// //         else{
// //             i++;
// //         }
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int> arr{0};
// //     if(n == 0){
// //         cout<<0<<endl;
// //     }
// //     else{
// //         string s = to_string(n);
// //         int count = 0;
// //         for(int i{0}; i < s.length()-1; i++){
// //             check(i, s, count, arr);
// //         }
// //         int sum = accumulate(arr.begin(), arr.end(), 0);
// //         cout<<sum<<endl;
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int t){
//     while(t--){
//         string s;
//         cin>>s;
//         int n = s.length();
//         int left = 0, right = 0, minZeroes = n, zeroes = 0;
//         while(right < n){
//             if(s[right] == '1'){
//                 right++;
//             }
//             else{
//                 zeroes++;
//                 right++;
//             }
//             while(left < right && s[left] == '1'){
//                 left++;
//             }
//             if(left == right){
//                 minZeroes = min(minZeroes, zeroes);
//             }
//             else if(left > right){
//                 left = right;
//                 zeroes = 1;
//             }
//         }
//         cout<<minZeroes<<endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     solve(t);
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        string s;
        cin >> s; // Input string for each test case
        
        int first_one = s.find('1'); // Find index of first '1'
        int last_one = s.rfind('1'); // Find index of last '1'
        
        if (first_one == -1) { // If there are no '1's, no '0's need to be erased
            cout << 0 << endl;
        } else {
            // Count number of '0's between first and last '1's
            int zeros_to_erase = 0;
            for (int i = first_one; i <= last_one; ++i) {
                if (s[i] == '0') {
                    zeros_to_erase++;
                }
            }
            cout << zeros_to_erase << endl;
        }
    }
    
    return 0;
}
