#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
  int lowest_element,index;
   for(int i=1;i<n;i++){
        cin>>a[i];
        lowest_element=a[0];
     for(int j=1;j<n;j++){
           if(lowest_element>a[j]){
               lowest_element=a[j];
                index=a[j];
           }
     }
   }
  cout<<lowest_element<<" "<<index<<endl;
}
