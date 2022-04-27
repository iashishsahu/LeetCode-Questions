class Solution {
public:

int find(int x, vector<int> &parent) {
    if(parent[x] == x)
        return x;
    
    return parent[x] = find(parent[x], parent);
}

void union_(int x, int y, vector<int> &parent) {
    int parentOf_x = find(x, parent);
    int parentOf_y = find(y, parent);
    
    if(parentOf_x != parentOf_y)
        parent[parentOf_y] = parentOf_x;
}

string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
    
    int n = s.length();
    vector<int> parent(n);
    for(int i = 0; i < n; i++)
        parent[i] = i;
    
    for(auto &it: pairs)
        union_(it[0], it[1], parent);
    
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++)
        mp[find(i, parent)].push_back(i);
    
    for(auto &it: mp) {
        string temp = "";
        for(auto i: it.second)
            temp += s[i];
        
        sort(temp.begin(), temp.end());
        
        int j = 0;
        for(auto i: it.second)
            s[i] = temp[j++];
    }
    
    return s;
}
};