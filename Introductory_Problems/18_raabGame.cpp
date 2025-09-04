#include <bits/stdc++.h>
using namespace std;

bool test_cases() {
    int n, a, b; // n = no of cards, a = alice wins, b = bob wins
    cin >> n >> a >> b;

    int ties = n - a - b;
    if (ties < 0) return false;

    n -= ties;
    if (n < 0) return false;

    if (a + b != n) return false;

    if (n >= 1 && (a == n || b == n)) return false;

    cout << "YES\n";

    // Alice
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    for (int i = n + 1; i <= n + ties; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // Bob
    for (int i = 0; i < n; i++) {
        int x = i + a;
        if (x >= n) x -= n;
        cout << x + 1 << " ";
    }
    for (int i = n + 1; i <= n + ties; i++) {
        cout << i << " ";
    }
    cout << "\n";

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (!test_cases()) {
            cout << "NO\n";
        }
    }
}
