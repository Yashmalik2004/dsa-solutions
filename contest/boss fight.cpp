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

        vector<int> cards(1001, 0);

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            cards[x]++;
            sum += x;
        }

        int mx = 0;
        int maxVal = 0;

        for (int x = 1; x <= 1000; x++) {
            if (cards[x] > mx) {
                mx = cards[x];
                maxVal = x;
            }
        }

        int rest = n - mx;

        if (mx <= rest + 2) {
            cout << sum << '\n';
        }
        else {
            int unusable = mx - (rest + 2);

            int ans = sum - unusable * maxVal;

            cout << ans << '\n';
        }
    }
}