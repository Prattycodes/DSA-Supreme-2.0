#include<iostream>
using namespace std;
int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid-1;
            }
            else {
                first = mid+1;
            }
        }
        return first;
    }
int main(){
    int x;
    cin>>x;
    cout<<mySqrt(x);
    return 0;
}