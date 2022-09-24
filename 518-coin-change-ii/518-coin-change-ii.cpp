class Solution {
public:
//     int f(long ind, long T, vector<int> &coins,  vector<vector<long>> dp){
//         if(ind==0){
//         return (T%coins[0]==0);
//         }
        
//         if(dp[ind][T]!=-1) 
//             return dp[ind][T];
            
//             long notTake=f(ind-1,T,coins,dp);
//             long take=0;
//             if(coins[ind]<=T)
//                 take=f(ind,T-coins[ind],coins,dp);
//             return dp[ind][T]= take+notTake;
            
//     }
    
    int change(long amount, vector<int>& coins) {
        long n=coins.size();
        vector<vector<long>> dp(n,vector<long>(amount+1,0));
       for(int T=0; T<=amount; T++)
       {
           dp[0][T]= (T%coins[0]==0);
       }
        for(int ind=1; ind<n; ind++){
            for(int T=0; T<=amount; T++){
                 
            long notTake= dp[ind-1][T];
            long take=0;
            if(coins[ind]<=T)
                take=dp[ind][T-coins[ind]];
             dp[ind][T]= take+notTake;
            }
        }
        return dp[n-1][amount];
    }
};