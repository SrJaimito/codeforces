#include <bits/stdc++.h>

using namespace std;

void solve_test() {
    int a, b, c;

    cin >> a >> b >> c;

    int diff = abs(b - c);
    if (diff % 2 == 0) {
        if (a >= (diff / 2)) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    } else {
        cout << "0 ";
    }

    diff = abs(a - c);
    if (diff % 2 == 0) {
        if (b >= (diff / 2)) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    } else {
        cout << "0 ";
    }

    diff = abs(a - b);
    if (diff % 2 == 0) {
        if (c >= (diff / 2)) {
            cout << '1';
        } else {
            cout << '0';
        }
    } else {
        cout << "0 ";
    }

    cout << '\n';
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num_tests;

    cin >> num_tests;

    for (int test = 0; test < num_tests; test++) {
        solve_test();
    }

    return 0;
}

