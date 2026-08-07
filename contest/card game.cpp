#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;

    for (int i = 2; 1LL * i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << (isPrime(n + 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}