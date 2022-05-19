class Solution {
public:
    int n,m;
    vector<int> dx = {0,0,1,-1}, dy = {1,-1,0,0};
    
    bool valid(int x, int y){
        return x<n && y<m && x>=0 && y>=0;
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& a) {
        n = a.size(); m = a[0].size();
        vector<vector<int>> indegree(n, vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int k=0; k<4; k++){
                    int x = i+dx[k], y = j+dy[k];
                    if(valid(x,y) && a[i][j]>a[x][y]) indegree[i][j]++;
                }
            }
        }
        
        queue<vector<int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(indegree[i][j]==0)q.push({i,j});
            }
        }
        
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int x = q.front()[0], y = q.front()[1]; 
                q.pop();
                for(int i=0; i<4; i++){
                    int newx = x+dx[i], newy = y+dy[i];
                    if(valid(newx,newy) && a[newx][newy]>a[x][y]){
                        indegree[newx][newy]--;
                        if(!indegree[newx][newy])q.push({newx,newy});
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};