#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int mid_dist = 0;
        for(int i = 0; i < n; i++){
            int diff  = abs(a[i] - a[n - 1]);
            if(diff > mid_dist){
                mid_dist = diff;
            }

        }
        int last_dis = abs(2*(x - a[n-1]));
        int first_dis = abs(0-a[0]);
        cout << max(first_dis, max(last_dis, mid_dist)) <<endl;


    }
}