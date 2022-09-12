class Solution {
public:
    string reverseWords(string s) {
        s=" "+s+" ";    
        string word="",ans="";
        vector<string> reverse;
        for(int i = 1;i<s.length();i++){    
            if(s.at(i)!=' '){   
                word=word+s[i];
               
            } //word bana liya
         
            else if(s.at(i)==' '&&s[i-1]!=' '){ 
                reverse.push_back(word+" ");  
                word="";    
            }
        }
        for(auto i =0;i<reverse.size();i++){
            ans=ans+reverse[reverse.size()-i-1];    
        }
        ans.erase(ans.length()-1,1);    
        return ans; 
    }
};