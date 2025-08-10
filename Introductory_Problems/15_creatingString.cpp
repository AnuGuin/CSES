#include <bits/stdc++.h>
using namespace std;

int freq[26];
int n;
vector<string> answer;
 
void build (string s){
    if((int) s.length() == n){
        answer.push_back(s);
        return;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0){
            freq[i]--;
            build(s + char('a' + i)); // casting the ASCII value to char again
            freq[i]++;
        }
    }
}
 
int main() {
    fastio();
    string s;
    cin >> s;
    n =(int) s.length();
    for(char ch : s){
        freq[ch - 'a']++; // casting the char to an integer by substracting the ASCII vaue of a
    }
    build("");
    cout << answer.size() << endl;
    for(string s: answer){
        cout << s << endl;
    }
}
