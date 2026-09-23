#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    
 
    cin >> n;


    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }


    cout << "Original array elements:" << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    int newElement;
    cout << "Insert element: " << endl;
    cin >> newElement;
    

    a[n - 1] = newElement;


    cout << "New array elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
