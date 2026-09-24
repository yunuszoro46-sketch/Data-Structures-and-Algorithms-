#include<iostream>
using namespace std;
int main(){
  cout<<"Enter Array size: ";
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter Array Elements: ";
  for(int i=0; i<n;i++){
       cin>>arr[i];
  }
  cout<<"Index : ";
  int y;
  cin>>y;
  cout<<"Value : ";
  int value;
  cin>>value;
  arr[y]=value;
  cout<<"new array elements: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  } 

}
