// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// const ll MOD = 1000000007;

// ll sumRange(ll l, ll r) {
//     __int128 a = (l + r) % MOD;
//     __int128 b = (r - l + 1) % MOD;

//     if (a % 2 == 0)
//         a /= 2;
//     else
//         b /= 2;

//     return (ll)((a * b) % MOD);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n;
//     cin >> n;

//     ll ans = 0;

//     for (ll l = 1; l <= n; ) {
//         ll q = n / l;
//         ll r = n / q;

//         ll sumD = sumRange(l, r);

//         __int128 contribution = (__int128)sumD * (q % MOD);
//         ans = (ans + (ll)(contribution % MOD)) % MOD;

//         l = r + 1;
//     }

//     cout << ans << '\n';

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1000000007;

ll sumRange(ll l, ll r) {
    __int128 a = (l + r) % MOD;
    __int128 b = (r - l + 1) % MOD;

    if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;

    return (ll)((a * b) % MOD);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = 0;

    for (ll l = 1; l <= n; ) {
        ll q = n / l;
        ll r = n / q;

        ll sumD = sumRange(l, r);

        __int128 contribution = (__int128)sumD * (q % MOD);
        ans = (ans + (ll)(contribution % MOD)) % MOD;

        l = r + 1;
    }

    cout << ans << '\n';

    return 0;
}