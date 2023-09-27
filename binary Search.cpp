#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;
     
     int mid= start+(end-start)/2;
     
     while(start<=end){
         if(arr[mid]==key){
             return mid;
         }
         if(key>arr[mid]){
             start=mid+1;
         }
         else{
             end= mid-1;
         }
         mid= start+(end-start)/2;
     }
     return-1;
}

int main(){
    
    int even[6]= {7,11,15,16,18,20};
    int odd[5]= {5,7,9,10,15};
    int indexEven= binarysearch(even,6,16);
    cout<<" index of 16 is "<<indexEven<<endl;
    
    
    int indexOdd= binarysearch(odd,5,7);
    cout<<" index of 7 is "<<indexOdd<<endl;
    
    
    
}
