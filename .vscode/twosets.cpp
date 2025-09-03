#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/ 2;
    if(sum % 2 == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        ll hsum = sum / 2;
        vector<ll> v1, v2;
        while(n){
            if(hsum - n >= 0) {
                v1.push_back(n);
                hsum-=n;      
            } else {
            v2.push_back(n);
            }
        n--;
        }
        cout << v1.size() <<" " << endl;
        for(auto x1 : v1){
            cout << x1 << " ";
        }
        cout<< endl;
        cout << v2.size() <<" " << endl;
        for(auto x2 : v2){
            cout << x2 << " ";
        } 
        cout << endl;
    }
}
