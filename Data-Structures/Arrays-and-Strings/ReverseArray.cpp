#include<iostream>
using namespace std;
int main(){
   cout<<"Enter Array Size: "<<endl;
   int n;
   cin>>n;
   int a[n];
   cout<<"Enter Array Elements: "<<endl;
  for(int i=0;i<=n;i++){
    cin>>a[i];
  } 
  cout<<"Reverse Elements"<<endl;
  for(int i=n; i>=0;i--){
     cout<<a[i]<<" ";
  }
}
