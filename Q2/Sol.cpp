#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll int sum = 0;
    ll int n;
    cin >> n;
    for(int i = 0 ; i < n-1 ; ++i){
        int x;
        cin>>x;
        sum = sum + x;
    }
   cout << (n*(n+1)) / 2  - sum << endl;
 
