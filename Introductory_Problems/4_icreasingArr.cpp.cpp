#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int  main(){
    ll int n, swp = 0;
    int mx = 0;
    cin >> n;
    for(int i =0 ; i < n; ++i){
        int x;
        cin >> x;
        mx =  max (x,mx);
        swp = swp + mx - x;
 
    }
    cout << swp << endl;
    
}
