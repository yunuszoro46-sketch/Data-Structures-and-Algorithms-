#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of array: ";
    cin>>n;
    int a[n];
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]%2==0) {
            sum_even =sum_even +a[i];
        }else {
            sum_odd = sum_odd +a[i];
        }
    }
    cout<<"sum of even: "<<sum_even<<endl;
    cout<<"sum of odd: "<<sum_odd<<endl;
}
