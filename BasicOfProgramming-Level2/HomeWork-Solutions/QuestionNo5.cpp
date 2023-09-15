#include<iostream>
#include<cmath>
using namespace std;
void createNum(int n){
    int digit= 0;
    int num= 1;
    for(int i=0; i<n; i++){
        cin>>digit;
        digit *= pow(10, n-1-i);
        num += digit;
    }
    cout<<num<<endl;
}
int main(){
    int n;
    cin>>n;
    createNum(n);
    return 0;
}