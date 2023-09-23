#include<iostream>
using namespace std;
void leftShift(int arr[], int n){
    //Step 1
    int temp= arr[0];
    //Step 2
    for(int i=0; i<n-1; i++){
        arr[i]= arr[i+1];
    }
    //Step 3
    arr[n-1]= temp;
}
int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int n= 5;
    leftShift(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}