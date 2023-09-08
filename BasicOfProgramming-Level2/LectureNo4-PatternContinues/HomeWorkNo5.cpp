#include<iostream>
//N= 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
using namespace std;
int main(){
    int n;
    cin>>n;
    int num= 2*n;
    for(int i=0; i<n; i++){
        for(int j=0; j<num-i-2; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i+1; j++){
            if(j%2==0)
                cout<<i+1;
            else
                cout<<"*";
        }
        int k= i;
        while(k<2*n-2){
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    return 0;
}