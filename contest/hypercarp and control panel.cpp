#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestsNumT;
    cin >> TestsNumT;

    while (TestsNumT--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &v : a) cin >> v;

        vector<int> st, end, clr;

        for (int i = 0; i < n;) {
            int j = i;
            while (j + 1 < n && a[j + 1] == a[i])
                j++;

            st.push_back(i);
            end.push_back(j);
            clr.push_back(a[i]);

            i = j + 1;
        }

        int runs = clr.size();
        int ans = runs;

        vector<int> pref(n), suff(n);

        pref[0] = 1;
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + (a[i] != a[i - 1]);

        suff[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
            suff[i] = suff[i + 1] + (a[i] != a[i + 1]);

        for (int p = 0; p < runs; p++) {
            vector<int> Lpos = {st[p]};

            if (st[p] < end[p])
                Lpos.push_back(st[p] + 1);

            for (int q = p + 1; q < min(runs, p + 4); q++) {
                if (clr[p] == clr[q])
                    continue;

                vector<int> Rpos = {end[q]};

                if (st[q] < end[q])
                    Rpos.push_back(end[q] - 1);

                for (int i : Lpos) {
                    for (int j : Rpos) {
                        int left = 0;
                        int right = 0;

                        if (i > 0) {
                            left = pref[i - 1];

                            if (a[i - 1] == a[j])
                                left--;
                        }

                        if (j + 1 < n) {
                            right = suff[j + 1];

                            if (a[j + 1] == a[i])
                                right--;
                        }

                        ans = max(ans, left + 2 + right);
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}