#include<algorithm>
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        if(words.size()==0 || s.size()< words.size()*words[0].size())
            return {};
            
       sort(words.begin(),words.end());
        vector<int>result;
        vector<string>searchStr;
        do{
            string temp;
            for(string str :words){
                temp+=str;
                searchStr.push_back(temp);
                
            }
            
        }while(next_permutation(words));
        
        int len=searchStr.size[0].size();
        
        for(i=0;i<=s.size()-len;i++){
            string curr=s.substr(i,len);
            
            for(string ss: searchStr)
                if(ss == curr)
                    result.push_back(i);
            
        }
        
        return result;
    }
};