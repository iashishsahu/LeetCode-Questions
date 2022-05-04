class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count=0;
        for(auto i:nums){
            if(mp[k-i])
            {
            mp[k-i]--;
                mp[i]--;
                count++;
            }
            mp[i]++;
        }
        return count;
    }
};