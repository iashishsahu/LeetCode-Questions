class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int sz=nums.size();
        int total=sz*(sz+1)/2;
        for(int i=0; i<sz;i++){
            sum+=nums[i];
        }
        return total-sum;
    }
};