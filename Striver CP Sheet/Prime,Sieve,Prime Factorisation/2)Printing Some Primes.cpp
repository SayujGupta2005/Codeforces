// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     const long long limit = 1000000000;
//     const long long sqrt_limit = static_cast<long long>(sqrt(limit)) + 1;
    
//     vector<bool> is_prime(limit, true);
//     vector<long long> primes;
    
//     is_prime[0] = is_prime[1] = false;
    
//     for (long long i = 2; i < sqrt_limit; ++i) {
//         if (is_prime[i]) {
//             for (long long j = i * i; j < limit; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
    
//     for (long long i = 2; i < limit; ++i) {
//         if (is_prime[i]) {
//             primes.push_back(i);
//         }
//     }
    
//     int z = 0;
//     while (z < primes.size()) {
//         cout << primes[z] % 100 << endl;
//         z += 100;
//     }
// }

// int main() {
//     solve();
//     return 0;
// }

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

void segmentedSieve(long long n) {
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

    for (size_t i = 0; i < primesInSegment.size(); i += 100) {
        cout << primesInSegment[i] << endl;
    }
}

int main() {
    long long n = 100000000;
    segmentedSieve(n);
    return 0;
}

