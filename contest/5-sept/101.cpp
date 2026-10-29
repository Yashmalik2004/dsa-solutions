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

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        vector<int> one;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1)
                one.push_back(i);
        }

        int L = -1, R = -1, best = 0;

        if (one.empty()) {
            int l = -1, r = -1;

            for (int i = 0; i < n; i++) {
                if (a[i] == -1) {
                    if (l == -1)
                        l = i;
                    r = i;
                }
            }

            if (l != -1) {
                L = l;
                R = r;
            }
        } else {
            int start = 0;

            for (int i = 0; i <= (int)one.size(); i++) {
                int end = (i == (int)one.size() ? n : one[i]);

                int left = -1, right = -1;

                for (int j = start; j < end; j++) {
                    if (a[j] == -1) {
                        if (left == -1)
                            left = j;
                        right = j;
                    }
                }

                if (left != -1 && i < (int)one.size()) {
                    int len = end - left + 1;

                    if (len > best) {
                        best = len;
                        L = left;
                        R = end;
                    }
                }

                if (left != -1 && i == (int)one.size()) {
                    int len = right - left + 1;

                    if (len > best) {
                        best = len;
                        L = left;
                        R = right;
                    }
                }

                if (i < (int)one.size()) {
                    if (one[i] - start + 1 > best) {
                        best = one[i] - start + 1;
                        L = one[i];
                        R = one[i];
                    }

                    start = one[i] + 1;
                }
            }

            for (int i = 0; i + 1 < (int)one.size(); i++) {
                int len = one[i + 1] - one[i] + 1;

                if (len > best) {
                    best = len;
                    L = one[i];
                    R = one[i + 1];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (L != -1) {
            a[L] = 1;
            a[R] = 1;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}