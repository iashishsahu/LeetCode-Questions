class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        string str="";
        for(int i=0; i<s.length(); i++){
            if(!st.empty() and st.top()==s[i]){
                st.pop();
            }
            else
                st.push(s[i]);
        }
        while(!st.empty()){
            char q=st.top();
            str+=q;
            st.pop();
            }
        reverse(str.begin() , str.end());
    return str;
    
    }
};