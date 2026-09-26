#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int val ;
    cin >> val;
    int k = 0;
    for (int i= 0 ; i < n ; i ++ ) {
        if (arr[i] != val) {
            arr[k] = arr[i];
            k++;
        }
    }
    for (int i = 0 ; i < k ; i ++ ) {
        cout << arr[i];
        if (i < k - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
