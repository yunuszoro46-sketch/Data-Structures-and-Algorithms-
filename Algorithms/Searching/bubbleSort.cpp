#include <iostream>
#include <algorithm>
using namespace std;


void bubbleSort(int arr[], int n) {

    for (int i = 0; i <= n - 2; i++) {

        bool swapped = false;

        for (int j = 0; j <= n - i - 2; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter Array size: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    bubbleSort(arr, n);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
