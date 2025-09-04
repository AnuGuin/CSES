#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; // n = row or height, m = col or width
    cin >> n >> m;
   vector<string> grid(n);
    for(string &s: grid){
        cin >> s;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((i+j) % 2 == 0){
                grid[i][j] = (grid[i][j] == 'A' ? 'C' : 'A');
            } else {
                grid[i][j] = (grid[i][j] == 'B' ? 'D' : 'B');
            }    

        }
    cout << grid[i] << endl;
    }

 }

