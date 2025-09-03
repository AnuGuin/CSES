#include<bits/stdc++.h>
using namespace std;
#define  ll long long


int main() {
    int n;
    cin >> n;
    ll int facti = 1;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        facti *= i;
        while (facti % 10 == 0) {
            cnt++;
            facti /= 10;
        }
    }
    cout << cnt << endl;
    return 0;
}