// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--) {
//         int n;
//         cin >> n;

//         vector<int> w(n + 1);
//         for (int i = 1; i <= n; i++)
//             cin >> w[i];

//         if (n % 2 == 1) {
//             cout << "NO\n";
//             continue;
//         }

//         int low = 0;
//         int high = 1000000001;

//         for (int i = 1; i <= n; i++) {
//             if (i % 2 == 1) {
//                 // odd positions move right => w[i] > k
//                 high = min(high, w[i]);
//             } else {
//                 // even positions move left => w[i] < k
//                 low = max(low, w[i]);
//             }
//         }

//         if (low < high - 1)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> w(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> w[i];

        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        int low = 0;
        int high = 1000000001;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                // odd positions move right => w[i] > k
                high = min(high, w[i]);
            } else {
                // even positions move left => w[i] < k
                low = max(low, w[i]);
            }
        }

        if (low < high - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}