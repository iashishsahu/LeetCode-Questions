class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,res=1;
        int n=nums.size();
        for(i=1;i<n;i++)
        {
            if(nums[i]!=nums[res-1])
            {
                nums[res]=nums[i];
                    res++;
            }
            
        }
        return res;
    }
};