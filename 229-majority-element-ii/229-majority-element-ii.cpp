class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int ,int> mp;
        for(int i=0; i<nums.size(); i++ ){
            mp[nums[i]]++;
        }
        for(auto e:mp){
            if (e.second> (nums.size()/3)){
                ans.push_back(e.first);}
        }
        return ans;
    }
};