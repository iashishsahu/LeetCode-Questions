class Solution {
public:
    string defangIPaddr(string address) {
        string str="";
        for(int i=0 ; i< address.length(); i++){
            if(address[i]!='.'){
                str=str+address[i];
            }
            else{
                str=str+"[.]";
            }
        }
        return str;
    }
};