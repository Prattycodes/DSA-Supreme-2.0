#include<iostream>
#include<vector>
using namespace std;
int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
                ans[index]=nums[i];
            }
        }    
        return ans.size();
}
int main(){
    vector<int> nums= {7,7,7,7,7,7,7};
    cout<<lengthOfLIS(nums);
    return 0;
}