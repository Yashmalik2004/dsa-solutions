// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     while (n--) {
//         int x;
//         cin >> x;

//         int count = 0;

//         for (int i = 1; i * i <= x; i++) {
//             if (x % i == 0) {
//                 count += 2;

//                 if (i * i == x)
//                     count--;
//             }
//         }

//         cout << count << '\n';
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        int count = 0;

        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                count += 2;

                if (i * i == x)
                    count--;
            }
        }

        cout << count << '\n';
    }

    return 0;
}