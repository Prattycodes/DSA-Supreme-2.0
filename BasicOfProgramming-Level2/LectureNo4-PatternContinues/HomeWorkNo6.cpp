#include<iostream>
// N=  7
// *
// **
// ***
// ****
// ***
// **
// *
using namespace std;
int main(){
    int n;
    cin>>n;
    int num= n/2+1;
    int i;
    for( i=0; i<num; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}