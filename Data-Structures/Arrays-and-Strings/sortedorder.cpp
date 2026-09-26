#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool ascending = true;
    bool descending = true;

  for (int i = 0; i < n-1; i++) {
      if (a[i]>a[i + 1]) {
          ascending = false;
      }else {
          descending = false;
      }

  }
    if (ascending) {
        cout<<"ascending"<<endl;
    }else if (descending) {
        cout<<"descending"<<endl;
    }else {
        cout<<"none"<<endl;
    }

    }

