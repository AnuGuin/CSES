#include <bits/stdc++.h>
using namespace std;

int n;
int a[21];
ll ans = LONG_LONG_MAX;
 
void solve(int i, ll X, ll Y) {
    if(i == n){
        ans = min(ans, abs(X-Y));
        return;
    }
    solve(i+1, X+a[i], Y); //put in first pile
    solve(i+1,X, Y+a[i]); //put in second pile
}
 
int main() {
    fastio();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve(0,0,0);
    cout << ans << endl;
    return 0;
}
