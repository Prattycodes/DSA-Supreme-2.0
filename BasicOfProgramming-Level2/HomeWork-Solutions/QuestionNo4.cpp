#include<iostream>
using namespace std;
void printDigit(int n){
    while(n){
        int digit= n%10;
        cout<<digit<<endl;
        n /= 10;
    }
} 
int main(){
    int n;
    cin>>n;
    printDigit(n);
    return 0;
}