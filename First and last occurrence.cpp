#include<iostream>
using namespace std;


int firstOccurence(int arr[], int n, int key){
    
    int s=0;
    int e=n-1;
    
    int  mid= s+(e-s)/2;
    int ans= -1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        } 
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        
        mid= s+(e-s)/2;
    }
    return ans;
    
}
int lastOccurence(int arr[], int n, int key){
    
    int s=0;
    int e=n-1;
    
    int  mid= s+(e-s)/2;
    int ans= -1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        } 
        else if(key>arr[mid]){    // go to right part
            s=mid+1;
        }
        else if(key<arr[mid]){   // go to last left part
            e=mid-1;
        }
        
        mid= s+(e-s)/2;
    }
    return ans;
    
}

int main()
{
    
    int even[10]={1,2,3,3,3,3,3,3,5,6};
    
      cout<<"firstOccurence of 3 is "<<firstOccurence(even,10,3)<<endl;
      cout<<"lastOccurence of 3 is "<<lastOccurence(even,10,3)<<endl;
    return 0;
}
