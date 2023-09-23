#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1 ;i=i+2){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    int n= 5;
    int val= 10;
    swapAlternate(arr, n);
    for(int i=0; i<n ;  i++){
        cout<<arr[i]<<" ";
    }
}