#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void solveTOH(lli n, lli A, lli B, lli C) {
    if (n > 0) 
    {
        solveTOH(n-1, A, C, B);
        cout << A <<" " << C << endl;
        solveTOH(n-1, B, A, C);
    }
        
 
}
int main (){
    lli n;
    cin >> n;
    lli k = pow(2,n) - 1;
    cout <<  k << endl;
    solveTOH(n, 1, 2 , 3);
}
