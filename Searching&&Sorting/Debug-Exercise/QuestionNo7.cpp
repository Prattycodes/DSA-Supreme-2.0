#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid+1;       
            } else {
                right = mid;
            }
        }        
        if (left >= 0 and nums[left-1] == target) {
            return left-1;
        } 
        else {
            return -1;
        }
    }
int main(){
    vector<int> nums= {1, 2, 3, 4, 5, 6,7, 20};
    int target= 5;
    cout<<binarySearch(nums, target);
    return 0;
}