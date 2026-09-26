#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int search,found=-1;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>search;

    for (int i=0;i<=n;i++) {
        if (arr[i]==search) {
            found=i;
            break;
        }

        }
    if (found==-1) {
        cout<<"Not Found"<<endl;
    }else {
        cout<<"Found"<<endl;
    }
    
    }

