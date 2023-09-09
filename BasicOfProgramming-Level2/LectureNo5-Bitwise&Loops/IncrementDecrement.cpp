#include<iostream>
using namespace std;
int main(){
    //As priority of ++ operator is more than priority of *
    int a= 10;
    cout<<++a*a++;
    return 0;
}