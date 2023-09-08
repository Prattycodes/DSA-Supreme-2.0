/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n= 4;
    int i=0;
    while(i<n){
        int j = i,count = 0;
        while(count<i+1){
            cout<<j+1;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}