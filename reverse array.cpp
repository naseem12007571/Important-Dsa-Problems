#include<bits/stdc++.h>
using namespace std;

void reverse (int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}


void printarray(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
  cout<<endl;
}


int main(){
    
    int arr[6]={5,6,7,8,9,10};
    int brr[5]= {1,2,3,4,5};
    
    reverse(arr,6);
    reverse(brr,5);
    
    printarray(arr,6);
    printarray(brr,5);
    
    
}
