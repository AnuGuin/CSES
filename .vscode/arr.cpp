#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int ind1, int ind2) {
    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        int sum = 0;

        for (int i = 0; i < n + 1; ++i) {
            cin >> a[i];
        }

        int last = a[n];

        while (true) {
            bool swapped = false;
            for (int i = 0; i < n; ++i) {
                if (a[i] <= 2 * last) {
                    if (last < a[i]) {
                        swap(a, i, n);
                        last = a[n];
                        swapped = true;
                    }
                }
            }
            if (!swapped) break;
        }

        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        cout << sum << endl;
    }
    return 0;
}
