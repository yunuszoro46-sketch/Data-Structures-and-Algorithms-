#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int index;

    for(int i=1;i<=n;i++) {
        cin>>arr[i];
        }

    cout<<"Current Array: "<<endl;
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Inset index you want to delete: "<<endl;
    cin>>index;
    for(int i=index;i<=n;i++) {
        arr[i]=arr[i+1];
    }
    cout<<"After delete Array: "<<endl;
    for(int i=1;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
