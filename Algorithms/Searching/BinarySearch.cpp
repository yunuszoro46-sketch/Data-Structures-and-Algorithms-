#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low ,int high ,int key){
  while(low<=high){
        int mid = (low + high ) / 2 ;
        if( arr[mid]==key){
              return mid;
        }else if(arr[mid]<key){
              low = mid +1 ;
        }else if( arr[mid]>keu){
               high= mid-1 ;
        }
  }
  return -1;
}

int main(){
     int n;
     cout<<"Enter array size : "<<endl;
     int arr[n];
     cout << "Enter " << n << " sorted elements:" << endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int key;
     cout<<"Enter the element you want to find"<<endl; 
     cin>>key;
     int result = BinarySearch(arr,0,n-1,key);
     if(result == -1) {
         cout<<"Not Found"<<endl;
      else{
        cout<<"Found"<<endl;
      }
       return 0;
  
}
