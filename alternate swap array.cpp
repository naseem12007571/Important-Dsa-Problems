#include<bits/stdc++.h>
using namespace std;

void printArray (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    
    int arr[6]= {10,5,15,20,25,30};
    
    swapAlternate(arr,6);
    printArray(arr,6);
   
    
    
    
}
