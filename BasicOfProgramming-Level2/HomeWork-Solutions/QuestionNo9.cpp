#include<iostream>
using namespace std;
int count(int n){
    int count= 0;
    while(n){
        if(n&1){
            count++;
        }
        n= n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}