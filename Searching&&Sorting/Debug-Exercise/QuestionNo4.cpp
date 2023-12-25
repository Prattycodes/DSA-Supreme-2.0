#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(mid+1<n && nums[mid] >= nums[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
}
int main(){
    vector<int> nums= {1,2,1,3,5,6,4};
    cout<<findPeakElement(nums);
    return 0;
}