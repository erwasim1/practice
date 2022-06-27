// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        char comp;
        
        for(int i=0;i<x.length();i++){
            
            if(x[i]=='(' or x[i]=='{' or x[i]=='['){
                s.push(x[i]);
                continue;
            }
            
            if(s.empty())
            return false;
            
            switch(x[i]){
                case ')':
                comp=s.top();
                s.pop();
                
                if(comp=='{' or comp=='[')
                return false;
                break;
                
                 case '}':
                comp=s.top();
                s.pop();
                
                if(comp=='(' or comp=='[')
                return false;
                break;
                
                 case ']':
                comp=s.top();
                s.pop();
                
                if(comp=='{' or comp=='(')
                return false;
                break;
                
            }
        }
        return (s.empty());
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends