#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

const int64 MOD = 1000000007;

int64 sumRange(int64 l, int64 r) {
    l %= MOD;
    r %= MOD;

    int64 sum = (l + r) % MOD;
    int64 cnt = (r - l + 1) % MOD;
    if (cnt % 2 == 0)
        cnt /= 2;
    else
        sum /= 2;

    return (sum * cnt) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n;
    cin >> n;

    int64 ans = 0;
    for (int64 l = 1; l <= n; ) {
        int64 q = n / l;
        int64 r = n / q;

        int64 sumD = sumRange(l, r);

        ans = (ans + (sumD * (q % MOD)) % MOD) % MOD;

        l = r + 1;
    }

    cout << ans << '\n';

    return 0;
}