#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int count0 = 0, count1 = 0;
        for (char c : S) {
            if (c == '0') count0++;
            else count1++;
        }

        int result = 0;
        for (int k = 1; k <= N; k++) {
            if (k>= count1 &&  (k - count1) % 2 == 0) {
                result++;
            } else if (k >= count0 && (k - count0) % 2 == 0) {
                    result++;
        }

        cout << result << endl;
    }
    return 0;
}
