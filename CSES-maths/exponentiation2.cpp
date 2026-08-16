#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const long long PHI = MOD - 1;

long long power(long long a, long long b, long long mod) {
    long long ans = 1;

    while (b > 0) {
        if (b & 1)
            ans = (ans * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a == 0) {
            if (b == 0 && c == 0)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';

            continue;
        }

        long long exponent = power(b, c, PHI);

        long long ans = power(a, exponent, MOD);

        cout << ans << '\n';
    }

    return 0;
}