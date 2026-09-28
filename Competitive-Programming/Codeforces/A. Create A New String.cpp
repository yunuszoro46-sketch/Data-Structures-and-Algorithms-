//Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A 
#include <iostream>

using namespace std;

int main() {
   string a,b;
   cin>>a>>b;
   int count=0;
    int count2=0;

   for (int i=0;i<a.length();i++) {
       count++;
   }

    for (int i=0;i<b.length();i++) {
        count2++;
    }
    cout<<count<<" "<<count2<<endl;
    cout<<a<<" "<<b<<endl;
}
