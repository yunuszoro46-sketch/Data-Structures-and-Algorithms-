//problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int  a= s.length();
        int count = s.length() - 2;
        if (a<=10) {
            cout << s << endl;
        }else  {
            cout<<s[0]<<count<<s[a-1]<<endl;
        }
    }

}



