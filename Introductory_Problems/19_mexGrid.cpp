#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            set<int> s;
            for(int r = 0; r < row; r++){
                s.insert(a[r][col]);
            }
            for (int c = 0; c < col; c++){
                s.insert(a[row][c]);
            }
            int x= 0;
            while(s.count(x) != 0){
                x++;
            }
            a[row][col] = x;
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
