//
// Created by mktb on 2023/7/17.
//

#include <iostream>

using namespace std;

int main() {
    int T, n, k, x;
    cin >> T;

    while (T--) {
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << "1 ";
            }
            cout << endl;
            continue;
        } else if (n % 2 == 0) {
            if (k == 1) {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << "2 ";
            }
            cout << endl;
            continue;
        } else if (n >= 3) {
            if (k <= 2) {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            cout << (n - 3) / 2 + 1 << endl;
            cout << "3 ";
            for (int i = 0; i < (n - 3) / 2; i++) {
                cout << "2 ";
            }
            cout << endl;
            continue;
        } else {
            cout << "NO" << endl;
        }
    }
}
