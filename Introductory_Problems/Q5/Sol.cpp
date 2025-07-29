#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    if(n==1){
      cout<<1<<" ";
    } else if(n==4) {
      cout<<2<<" "<<4<<" "<<1<<" "<<3;
    } else if( n <= 3) {
      cout<<"NO SOLUTION";
    } else {
    for(int i=n;i>=1;i=i-2) {
      cout<<i<<" ";
    }
    for(int i=n-1;i>=1;i=i-2) {
      cout<<i<<" ";
    }
}
