// #include <bits/stdc++.h>
// using namespace std;

// long long solve(long long n, long long k) {
//     if (n == 1)
//         return 1;

//     long long half = n / 2;

//     if (k <= half)
//         return 2 * k;

//     long long x = solve(n - half, k - half);

//     if (n % 2 == 0)
//         return 2 * x - 1;

//     if (x == 1)
//         return n;

//     return 2 * x - 3;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int q;
//     cin >> q;

//     while (q--) {
//         long long n, k;
//         cin >> n >> k;

//         cout << solve(n, k) << '\n';
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k) {
    if (n == 1)
        return 1;

    long long half = n / 2;

    if (k <= half)
        return 2 * k;

    long long x = solve(n - half, k - half);

    if (n % 2 == 0)
        return 2 * x - 1;

    if (x == 1)
        return n;

    return 2 * x - 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        long long n, k;
        cin >> n >> k;

        cout << solve(n, k) << '\n';
    }

    return 0;
}