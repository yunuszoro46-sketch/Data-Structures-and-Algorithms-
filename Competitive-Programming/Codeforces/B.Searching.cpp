//problem:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int search;
  cin>>search;
  for(int i=0;i<n;i++){
       if(search==arr[i]){
           cout<<i;
           return 0;
       }
  }cout<<-1;
   return 0;
  
}
