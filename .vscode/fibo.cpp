#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a = 0, b = 1;
    cout << a <<" " << b <<" ";

    for(int i = 2; i < n; ++i)
    {
        i = a  + b;
        b =  a;
        a = i;
        cout << i << " ";
    }
   
}