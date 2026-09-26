//problem:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int round  = 0; round  < n; round ++) {
        for (int j = 0 ; j < n - round - 1  ; j++) {
              if (arr[j]>arr[j+1]) {
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
              }
        }
    }

    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }


    return 0;
}
