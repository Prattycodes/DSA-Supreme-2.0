#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int deci= 0;
    int i= 0;
    while(n){
        int bit= n%10;
        deci += bit*pow(2, i++);
        n /= 10;
    }
    return deci;
}
int binaryToDecimal2(int n){
    int deci= 0;
    int i= 0;
    while(n){
        int bit= n&1;
        deci += bit<<i++;
        n /= 10;
    }
    return deci;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal2(n)<<endl;
    return 0;
}