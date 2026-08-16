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
        long long a, b;
        cin >> a >> b;

        long long exponent = power(b, a, PHI);

        long long ans = power(a, exponent, MOD);

        cout << ans << '\n';
    }

    return 0;
}