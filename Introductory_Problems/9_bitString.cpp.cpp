#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1e9 + 7;
 
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    
    return result;
}
 
int main() {
    int n;
    cin >> n;
    
    cout << power(2, n, MOD) << endl;
    
    return 0;
}
