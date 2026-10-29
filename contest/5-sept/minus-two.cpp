#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd = 0;
        int even0 = 0, even2 = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 2 == 1) {
                odd++;
            } else {
                long long k = x / 2;

                if (k % 2 == 0)
                    even0++;
                else
                    even2++;
            }
        }

        cout << max({odd, even0, even2}) << '\n';
    }

    return 0;
}