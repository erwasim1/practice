// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  vector<vector<string>> v;
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<string> res;
        fun(S,0,res);
        return v;
    }
    bool isPalindrome(string s)
    {
        int l=0;
        int h=s.size()-1;
        while(l<h)
        {
            if(s[l++]!=s[h--])
            return false;
        }
        return true;
    }
    void fun(string S,int in,vector<string> res)
    {
        if(in==S.size())
        {
            v.push_back(res);
            return;
        }
        
        for(int i=in;i<S.size();i++)
        {
            string str=S.substr(in,i-in+1);
            if(isPalindrome(str))
            {
                res.push_back(str);
                fun(S,i+1,res);
                res.pop_back();
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends