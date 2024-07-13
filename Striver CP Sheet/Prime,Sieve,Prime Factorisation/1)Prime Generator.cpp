#include <bits/stdc++.h>
using namespace std;
void simpleSieve(long long int limit, vector<long long int> &prime)
{   vector<bool> mark(limit + 1, true);

    for (long long int p=2; p*p<limit; p++)
    {   if (mark[p] == true)
        {   for (long long int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
    for (long long int p=2; p<limit; p++)
    {
        if (mark[p] == true){
            prime.push_back(p);
        }
    }
}

void segmentedSieve(long long int m, long long int n) {
    long long int limit = floor(sqrt(n)) + 1;
    vector<long long int> prime;
    simpleSieve(limit, prime);

    vector<bool> mark(n - m + 1, true);

    for (long long int i = 0; i < prime.size(); i++) {
        long long int loLim = max(prime[i] * prime[i], (m + prime[i] - 1) / prime[i] * prime[i]);
        for (long long int j = loLim; j <= n; j += prime[i])
            mark[j - m] = false;
    }

    for (long long int i = max(m, 2LL); i <= n; i++) {
        if (mark[i - m])
            cout << i << endl;
    }
}
int main()
{
    long long int i;
    cin>>i;
    while(i--){
        long long int x,y;
        cin>>x>>y;
        segmentedSieve(x,y);
        cout<<endl;
    }
    return 0;
}