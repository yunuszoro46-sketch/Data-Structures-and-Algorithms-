// problem : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size,minIndex=0,maxIndex=0,temp;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for(int j=1;j<size;j++){
        if(arr[j]<min){
            min=arr[j];
            minIndex=j;
        }if (arr[j]>max){
            max=arr[j];
            maxIndex=j;
        }
    }
    temp = arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}
