#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main() {
    lli n, valid_move, invalid_move;
    cin >> n;
    if(n==1) {
        cout  << 0 << endl;
 
    } else {
        for(lli i =  1; i <= n; i++) {
        valid_move  = (i*i)*(i*i-1) / 2 ;
        invalid_move = 4*(i-1)*(i-2);
        cout  << valid_move - invalid_move << endl;
     }
  }    
}
