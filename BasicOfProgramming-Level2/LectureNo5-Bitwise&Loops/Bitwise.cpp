#include<iostream>
using namespace std;
int main(){
    //As 1 Byte is equal to 8 bits
    //So it will flip all bits of 1 and then take -ve number's 2's compliment 
    //Hence we are getting it as -2
    bool flag= 1;
    cout<<~flag<<endl;
    return 0;
}