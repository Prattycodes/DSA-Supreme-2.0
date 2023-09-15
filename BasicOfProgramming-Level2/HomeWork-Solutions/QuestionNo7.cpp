#include<iostream>
using namespace std;
double convert(int km){
    return (km/1.609);
}
int main(){
    int km;
    cin>>km;
    cout<<convert(km);
    return 0;
}