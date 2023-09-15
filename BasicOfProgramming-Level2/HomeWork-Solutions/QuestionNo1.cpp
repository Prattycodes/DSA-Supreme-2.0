#include<iostream>
using namespace std;
float areaOfCir(float radius){
    return (float)3.14*radius*radius;
}
int main(){
    float n; 
    cin>>n;
    cout<<areaOfCir(n);
}