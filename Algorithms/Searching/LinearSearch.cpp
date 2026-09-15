#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size , int target){
        for(int i=0;i<size;i++){
            if(arr[i]==target){
                return true;
            }
        }
       return false; 
}
int main(){
       cout<<"Enter size of array"<<endl;
       int n;
       cin>>n;
      int numbers[n];
     for(int i=0;i<n;i++){
            cin>>numbers[i];
     }
     cout<<"Enter the element you want to find"<<endl;
      int target;
      cin>>target;
  if(linearSearch(numbers,n,target)){
     cout<<"Element Found"<<endl;
  }else{
     cout<<"Element not found"<<endl;
  } 
       return 0;

}
