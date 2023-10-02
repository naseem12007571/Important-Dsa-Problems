#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    cout<<" print the element 1 to 10";
    for(int i=1;i<=n;i++){
        cout<<" " << i;
    }
    
}


compilor code 
#include<iostream>
using namespace std;

void bubble(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    
    
    int arr[6]={10,2,5,6,1,4};
    bubble(arr,6);
    for(int i=0;i<6;i++){
        cout<<" "<<arr[i];
    }
     
    
}
