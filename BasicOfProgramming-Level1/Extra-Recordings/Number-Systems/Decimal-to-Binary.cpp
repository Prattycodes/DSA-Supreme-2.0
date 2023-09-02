#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int n){
    int binaryNum= 0;
    if(n%2==1){
        binaryNum= 1;
    }
    int i=0;
    while(n>0){
        int bit= n%2;
        binaryNum += bit*pow(10, i++);
        cout<<binaryNum<<endl;
        n= n/2;
    }
    return binaryNum;
}
int bitWiseDtoB(int n){
    int binaryNum= 0;
    if(n%2==1){
        binaryNum= 1;
    }
    int i= 0;
    while(n>0){
        int bit= (n&1);
        binaryNum = (binaryNum+ (bit*pow(10, i++)));
        n= n>>1;
    }
    return binaryNum;
}
int main(){
    int n;
    cin>>n;
    int binary= bitWiseDtoB(n);
    cout<<binary<<endl;
    return 0;
}
