class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string str1="";
        string str2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
                str1+=s[i];
            else
            {
                if(str1.size()>0)
                str1.erase(str1.size()-1,1);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
                str2+=t[i];
            else
            {
                if(str2.size()>0)
                str2.erase(str2.size()-1,1);
            }
        }
        
        return str1==str2;
        
    }
};