#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxNo= INT_MIN;
    int minNo= INT_MAX;
    
    for(int i=0;i<n;i++){
        // use inbuilt function
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }
    cout<<" max number is "<<maxNo<<endl;
    cout<<" min number is "<<minNo<<endl;
}
