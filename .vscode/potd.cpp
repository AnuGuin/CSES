#include<bits/stdc++.h>
using  namespace std;
#define  ll long long

int main(){
    string s;
    cin >> s;
    int  zerocnt = 0;
    int swp = 0;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '0'){
            zerocnt++;
        } else if(s[i] == 1){
            swp = swp + zerocnt;
        }
    }
    cout <<  swp << endl;

}

