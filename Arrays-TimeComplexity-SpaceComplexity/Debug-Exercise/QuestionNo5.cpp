#include<iostream>
using namespace std;
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}
int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    int n= 5;
    int val= 8;
    cout<<"Pairs-> "<<pairSumToX(arr, n,  val);
    // for(int i=0; i<n ;  i++){
    //     cout<<arr[i]<<" ";
    // }
}