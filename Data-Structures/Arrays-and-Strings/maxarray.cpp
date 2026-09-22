#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter Array Size: ";
   cin>>n;
   int a[n];
   int max_element;
   for(int i=0;i<n;i++){
       cin>>a[i];
       max_element=a[0];//assuming first element is the max 
      for(int j=1;j<n;j++){
         if(max_element<j[i]){
              max_element=a[j];
         }
      }
     
   }

  cout<<"max element: "<<max_element<<endl;
    
}
