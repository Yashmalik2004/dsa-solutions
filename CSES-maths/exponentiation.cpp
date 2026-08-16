#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long ans = 1;

    while (b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) % MOD;
        }

        a = (a * a) % MOD;
        b /= 2;
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

        cout << power(a, b) << '\n';
    }

    return 0;
}