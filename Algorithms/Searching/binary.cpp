#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i};
  }
  int start=0,end=n-1,found=-1;
  int search ;
  cout<<"search element: "<<endl;
  cin>>search ;
  while(start<=end){//in sorted array//
         int mid= start  + (start - end)/2;
       if(search == arr[mid]{
           found = mid;
            break;
       }else if(search>arr[mid]){
             start=mid+1;
         }else{
             end=mid-1;
         }
  }
if(found == -1 ) {
  cout<<"not found"<<endl;
}else{
  cout<<"found"<<endl;
}

}
