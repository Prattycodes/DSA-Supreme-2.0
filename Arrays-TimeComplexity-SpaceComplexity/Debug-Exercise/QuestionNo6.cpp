#include<iostream>
using namespace std;
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			for(int k=j; k<size; k++){
				if(input[i] + input[j] + input[k] == x) {
                    cout<<input[i]<<" "<<input[j]<<" "<<input[k]<<endl;
                    triplets++;
                }
			}
		}
	}
	return triplets;
}
int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    int n= 5;
    int val= 4;
    cout<<tripletSumToX(arr, n, val);
    // for(int i=0; i<n ;  i++){
    //     cout<<arr[i]<<" ";
    // }
}
