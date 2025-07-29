#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main() {
    int t;
    cin >> t;
    while(t--){
        lli  x, y;
        cin >> y >> x;
        if(x >= y) {
            if(x % 2 == 1) {
                lli  ans  = x*x - (y - 1); 
                cout << ans << endl;    
            } else if (x % 2 == 0) {
                lli  ans  = (x-1)*(x-1) + y;
                cout << ans << endl;
            }
        } else {
            if(y % 2 == 0) {
                lli  ans  = y*y - (x - 1);
                cout << ans << endl;
            } if(y % 2 == 1) {
                lli  ans  = (y-1)*(y-1) + x ;
                cout << ans << endl;
            }
        }    
    }
}
