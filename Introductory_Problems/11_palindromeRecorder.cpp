#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.length();
    
    vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'A']++;
    }
 
    int odd_count = 0;
    int odd_index = -1;
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            odd_count++;
            odd_index = i;
        }
    }
 
    if ((n % 2 == 0 && odd_count > 0) || (n % 2 == 1 && odd_count != 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }
 
    string result(n, ' ');  // initialize result string with blanks
 
    int left = 0, right = n - 1;
 
    for (int i = 0; i < 26; i++) {
        // If character has odd frequency, place the center char later
        if (freq[i] % 2 == 1) continue;
 
        while (freq[i] > 0) {
            result[left++] = 'A' + i;
            result[right--] = 'A' + i;
            freq[i] -= 2;
        }
    }
 
    // Place the middle character (if any)
    if (odd_index != -1) {
        int count = freq[odd_index];  // this is odd
        for (int i = 0; i < count; i++) {
            result[n / 2 - count / 2 + i] = 'A' + odd_index;
        }
    }
 
    cout << result << '\n';
    return 0;
}
