class Solution {
public:
    vector<int> ans;
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0;  i<nums.size(); i++){
            if(nums[i]%2==0)
                ans.push_back(nums[i]);
        }
        for(int i=0;  i<nums.size(); i++){
            if(nums[i]%2==1)
                ans.push_back(nums[i]);
        }
        return ans;
        
    }
};