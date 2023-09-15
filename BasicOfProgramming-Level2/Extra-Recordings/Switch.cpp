#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch (ch)
    {
    case /* constant-expression */'A':
        /* code */
        cout<<"Hello A";
        break;
    case 'B':
        cout<<"Hello B";
        break;
    default:
        break;
    }
    return 0;
 }