// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    struct Pos { int i, j, d; };
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int M = grid.size(), N = grid[0].size();
    vector<vector<int>>R(M);
    queue<Pos>Q;
    for (auto& r: R) r.assign(N, 1000);
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (grid[i][j])
                Q.push({i,j,0});
    while (Q.size()) {
        auto p = Q.front(); Q.pop();
        if (p.d < R[p.i][p.j]) {
            R[p.i][p.j] = p.d;
            if (p.i > 0) Q.push({p.i-1, p.j, p.d+1});
            if (p.j > 0) Q.push({p.i, p.j-1, p.d+1});
            if (p.i < M-1) Q.push({p.i+1, p.j, p.d+1});
            if (p.j < N-1) Q.push({p.i, p.j+1, p.d+1});
        }
    }
    return R;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends