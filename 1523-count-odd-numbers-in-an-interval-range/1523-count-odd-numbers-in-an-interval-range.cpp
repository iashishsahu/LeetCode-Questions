class Solution {
public:
    int countOdds(int low, int high) {
        int i , diff= high-low, ans;
        if(high%2==0&& low%2==0)
            ans= diff/2;
        else {
            ans=(diff/2)+1;}
        
        return ans;
    }
};