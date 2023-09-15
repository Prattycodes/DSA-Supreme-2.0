#include<iostream>
using namespace std;
void check(int n){
    if(n&1){
        cout<<"ODD"<<endl;
    }
    else{
        cout<<"EVEN"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    check(n);
    return 0;
}