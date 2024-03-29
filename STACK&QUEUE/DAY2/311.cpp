// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
          vector<vector<int>>mergeinterval;
          if(intervals.size()==0){
              return mergeinterval;
          }
          sort(intervals.begin(),intervals.end());
          vector<int>tempinterval=intervals[0];
          
          for(auto it:intervals){
              if(it[0]<=tempinterval[1]){
                  tempinterval[1]=max(it[1],tempinterval[1]);
              }else{
                  mergeinterval.push_back(tempinterval);
                  tempinterval=it;
              }
          }
          mergeinterval.push_back(tempinterval);
          return mergeinterval;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends