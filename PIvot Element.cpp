#include<iostream>
using namespace std;

   int getpivot(int arr[], int n){
   int s=0;
   int e=n-1;
   int mid= s+(e-s)/2;
   while(s<e){
       if(arr[mid]>=arr[0]){
           s=mid+1;
       } else{
           
           e=mid;
       }
       
       mid=s+(e-s)/2;
   }
   return s;
}


   int main(){
       int even[5]={3,7,10,1,2};
       cout<<" pivot element is "<<getpivot(even,7);
   }
