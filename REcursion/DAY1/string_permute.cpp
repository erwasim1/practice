// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
      private:
    void recurPermute(int index, string S, vector<string>& ans) {
      if (index == S.size()) {
        ans.push_back(S);
        return;
      }
      for (int i = index; i < S.size(); i++) {
          if( S[i]!=S[i+1]){
        swap(S[index], S[i]);
        recurPermute(index + 1, S, ans);
        swap(S[index], S[i]);
          }
      }
    }
	public:
	
	
		vector<string>find_permutation(string S)
		{
		     vector<string>ans;
      recurPermute(0, S, ans);
      sort(ans.begin(),ans.end());
      return ans;
		    
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends