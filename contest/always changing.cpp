// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         int cnt[2] = {0, 0};

//         for (char c : s) {
//             cnt[c - '0']++;
//         }

//         int ans = INT_MAX;

//         for (int st = 0; st <= 1; st++) {

//             int same = st;
//             int zero = 0;
//             int one = 0;

//             vector<pair<int, int>> pref;

//             pref.push_back({0, 0});

//             for (char c : s) {
//                 int curr = c - '0';

//                 if (curr == same) {

//                     if (curr == 0)
//                         zero++;
//                     else
//                         one++;

//                     pref.push_back({zero, one});

//                     same ^= 1;
//                 }
//             }

//             for (auto p : pref) {

//                 int k0 = p.first;
//                 int k1 = p.second;

//                 int del0 = cnt[0] - k0;
//                 int del1 = cnt[1] - k1;

//                 if (abs(del0 - del1) <= 1) {
//                     ans = min(ans, del0 + del1);
//                 }
//             }
//         }

//         if (ans == INT_MAX)
//             cout << -1 << '\n';
//         else
//             cout << ans << '\n';
//     }

//     return 0;
// }
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

        string s;
        cin >> s;

        int cnt[2] = {0, 0};

        for (char c : s) {
            cnt[c - '0']++;
        }

        int ans = INT_MAX;

        for (int st = 0; st <= 1; st++) {

            int same = st;
            int zero = 0;
            int one = 0;

            vector<pair<int, int>> pref;

            pref.push_back({0, 0});

            for (char c : s) {
                int curr = c - '0';

                if (curr == same) {

                    if (curr == 0)
                        zero++;
                    else
                        one++;

                    pref.push_back({zero, one});

                    same ^= 1;
                }
            }

            for (auto p : pref) {

                int k0 = p.first;
                int k1 = p.second;

                int del0 = cnt[0] - k0;
                int del1 = cnt[1] - k1;

                if (abs(del0 - del1) <= 1) {
                    ans = min(ans, del0 + del1);
                }
            }
        }

        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}