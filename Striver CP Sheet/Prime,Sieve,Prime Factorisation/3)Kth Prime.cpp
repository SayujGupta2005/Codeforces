#include <bits/stdc++.h>
using namespace std;

void simpleSieve(long long limit, vector<long long> &prime) {
    vector<bool> mark(limit + 1, true);
    for (long long p = 2; p * p <= limit; ++p) {
        if (mark[p]) {
            for (long long i = p * p; i <= limit; i += p) {
                mark[i] = false;
            }
        }
    }
    for (long long p = 2; p <= limit; ++p) {
        if (mark[p]) {
            prime.push_back(p);
        }
    }
}

vector<long long > segmentedSieve(long long n) {
    long long limit = floor(sqrt(n)) + 1;
    vector<long long> prime;
    simpleSieve(limit, prime);

    long long low = limit;
    long long high = 2 * limit;

    vector<long long> primesInSegment;

    while (low < n) {
        if (high >= n) {
            high = n + 1;
        }

        vector<bool> mark(high - low, true);

        for (long long i = 0; i < prime.size(); ++i) {
            long long lowLim = max(prime[i] * prime[i], (low + prime[i] - 1) / prime[i] * prime[i]);

            for (long long j = lowLim; j < high; j += prime[i]) {
                mark[j - low] = false;
            }
        }

        for (long long i = low; i < high; ++i) {
            if (mark[i - low]) {
                primesInSegment.push_back(i);
            }
        }

        low += limit;
        high += limit;
    }
    primesInSegment.insert(primesInSegment.begin(), prime.begin(), prime.end());

    return primesInSegment;
}

int main() {
    long long n = 100000000;
    vector<long long int> v=segmentedSieve(n);
    int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<v[k-1]<<endl;
    }
    return 0;
}