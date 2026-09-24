#include<iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"Enter array size: ";
    int size,newElement,index;
    cin>>size;
    cout<<"enter  array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"original array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Enter new Element: ";
    cin>>newElement;
    cout<<"Enter index: ";
    cin>>index;
    for(int i=size ; i>index ; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=newElement;

    cout<<"New array: ";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }


}
