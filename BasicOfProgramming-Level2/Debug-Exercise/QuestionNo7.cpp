    /*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0,gaps = n-1;
    while(i<n){
        int k=0,gaps=n-1-i;
        while(k<=gaps){
            cout<<k+1;
            k++;
        }
        int num = i;
        while(num>0){
            cout<<"*";
            num = num - 1;
        }
        k = 1;
        while(k<(i+1)){
            cout<<"*";
            k++;
        }
        k =0;
        while(k<=gaps){
            cout<<n-i-k;
            k++;
        }
        i++;
        cout<<"\n";
    }
}