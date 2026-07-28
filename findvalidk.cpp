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

// Try to build a string with `zeros` 0s and `ones` 1s, arranged into exactly
// `blocks` maximal runs, with the run pattern starting on `startBit`.
// Returns true and fills ans if feasible.
bool build(int zeros, int ones, int blocks, int startBit, string &ans)
{
    int zeroBlocks, oneBlocks;

    if (startBit == 0)
    {
        zeroBlocks = (blocks + 1) / 2;
        oneBlocks = blocks / 2;
    }
    else
    {
        oneBlocks = (blocks + 1) / 2;
        zeroBlocks = blocks / 2;
    }

    if (zeroBlocks > zeros || oneBlocks > ones)
        return false;

    // If a side gets 0 blocks, it must also have 0 total characters,
    // otherwise those characters have nowhere to go.
    if ((zeroBlocks == 0 && zeros > 0) || (oneBlocks == 0 && ones > 0))
        return false;

    vector<int> z(zeroBlocks, 1), o(oneBlocks, 1);

    int extraZero = zeros - zeroBlocks;
    int extraOne = ones - oneBlocks;

    if (zeroBlocks)
        z[0] += extraZero;
    if (oneBlocks)
        o[0] += extraOne;

    ans.clear();
    ans.reserve(zeros + ones);

    int zi = 0, oi = 0;
    int cur = startBit;

    while (zi < zeroBlocks || oi < oneBlocks)
    {
        if (cur == 0)
        {
            ans.append(z[zi], '0');
            zi++;
        }
        else
        {
            ans.append(o[oi], '1');
            oi++;
        }
        cur ^= 1;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    string out;
    out.reserve(1 << 20);

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int blocks = n - k;
        string ans;
        bool ok = false;

        vector<pair<int, int>> cnts;

        if (n % 2 == 0)
        {
            cnts.push_back({n / 2, n / 2});
        }
        else
        {
            cnts.push_back({(n + 1) / 2, n / 2});
            cnts.push_back({n / 2, (n + 1) / 2});
        }

        for (size_t i = 0; i < cnts.size() && !ok; i++)
        {
            int z = cnts[i].first;
            int o = cnts[i].second;

            if (build(z, o, blocks, 0, ans) || build(z, o, blocks, 1, ans))
                ok = true;
        }

        if (ok)
        {
            out += ans;
            out += '\n';
        }
        else
        {
            out += "-1\n";
        }
    }

    cout << out;
    return 0;
}