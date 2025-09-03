#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
    int x, y, p;
    cin >> x >> y >> p;
    int m = p / 100;
    int power_m = m * x;
    int r = p % 100;
    int n = (r + 3) / 4;
    int power_n = n * y;
    cout << power_m + power_n << endl;
    }
    
    return 0;
}
