#include<iostream>
using namespace std;
void ShiftByK(int arr[], int n, int k){
    //Step 1
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i]= arr[n-k+i];
    }
    //Step 2
    for(int i=n-k-1; i>=0; i--){
        arr[i+k]= arr[i];
    }
    //Step 3
    for(int i=0; i<k; i++){
        arr[i]= temp[i];
    }
}
int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int n= 5;
    int k= 2;
    ShiftByK(arr, n, k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}