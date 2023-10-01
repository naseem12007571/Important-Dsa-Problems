#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for(int i=0;i<n-1;i++){
        int miniIndex= i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex=j;
            }
        }

        swap(arr[miniIndex],arr[i]);
    }
}


//compilor code

#include<bits/stdc++.h>
using namespace std;

void search(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int miniIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[miniIndex])
                miniIndex = j;
        }
        swap(arr[miniIndex], arr[i]);
    }
}

int main() {
    int arr[6] = {3, 4, 2, 1, 6, 7};
    search(arr, 6);

    cout << "Sorted array is ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
