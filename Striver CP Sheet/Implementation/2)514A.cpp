#include <iostream>
using namespace std;
 
int chew(int s) {
    if (s > 4) {
        return 9 - s;
    }
    return s;
}
 
int main() {
    unsigned long long int x;
    cin >> x;
    if(x==9){
        cout<<9;
        return 0;
    }
    long long int ans = 0;
    unsigned long long int pow10 = 1;
    unsigned long long int temp=x;
    int count{1};
    while(temp/10){
        count++;
        temp/=10;
    }
    
    
    
    for (int i{0};i<count;i++) {
        int s= x%10;
        if(i+1==count && s==9){
        ans=s*pow10+ans;
        x/=10;
        pow10*=10;
        }
        else{
        ans=chew(s)*pow10+ans;
        x/=10;
        pow10 *= 10;}
    }
    
    cout << ans;
    return 0;
}