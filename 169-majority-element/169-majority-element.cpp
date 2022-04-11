class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> myMap;
        int item{0};
        
        for(auto i = 0; i < nums.size(); i++) {
            myMap[nums[i]]++;
        }
        
        for(auto i : myMap) {
            if(i.second > nums.size() / 2) {
                 item = i.first;        
            }
        }
        return item;
    }
};