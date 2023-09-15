#include<iostream>
using namespace std;
float convert(int cel){
    return (float)cel*9/5+32;
}
int main(){
    int cel;
    cin>>cel;
    cout<<convert(cel)<<endl;
    return 0;
}