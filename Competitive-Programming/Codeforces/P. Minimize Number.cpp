//problem : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int op = 1000000000;

    for (int i = 0; i < n; i++) {
        int count = 0;

        while (a[i] % 2 == 0) {
            a[i] = a[i] / 2;
            count++;
        }

        op = min(op, count);
    }

    cout << op << endl;

    return 0;
}
