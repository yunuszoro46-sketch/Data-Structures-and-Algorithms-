#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string v ,a ;
    for (int i = 0; i < s.length(); i++) {
          v = s[i];
    }
    for (int i= s.length() - 1; i >= 0; i--) {
          a = s[i];
    }
    if (v==a) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

}


