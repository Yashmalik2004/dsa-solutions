#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int MAX = 1000000;
    vector<int> freq(MAX + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    for (int g = MAX; g >= 1; g--) {
        int count = 0;

        for (int multiple = g; multiple <= MAX; multiple += g) {
            count += freq[multiple];

            if (count >= 2) {
                cout << g << '\n';
                return 0;
            }
        }
    }

    return 0;
}