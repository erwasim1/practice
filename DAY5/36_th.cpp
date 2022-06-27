// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int mi=INT_MAX;
        int i=0,j=0;
        int s=0;
        
        while(i<=j and j<n){
            while(s<=x and j<n){
                s+=arr[j++];
            }
            
            while(s>x and i<j){
                mi=min(mi,j-i);
                s-=arr[i];
                i++;
            }
        }
        return mi;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends