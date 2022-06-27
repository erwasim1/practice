// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    
    int ind1=lower_bound(arr,arr+n,x)-arr;
    
    if(ind1!=n and arr[ind1]==x)
    ans.push_back(ind1);
    
    else ans.push_back(-1);
    
    
    int ind2=upper_bound(arr,arr+n,x)-arr;
    ind2--;
    
    if(ind2>=0 and arr[ind2]==x)
    ans.push_back(ind2);
    
    else ans.push_back(-1);
    
    
    
    return ans;
    
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends


///2nd aproach



  // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // vector<int>ans;
    
    // int ind1=lower_bound(arr,arr+n,x)-arr;
    
    // if(ind1!=n and arr[ind1]==x)
    // ans.push_back(ind1);
    
    // else ans.push_back(-1);
    
    
    // int ind2=upper_bound(arr,arr+n,x)-arr;
    // ind2--;
    
    // if(ind2>=0 and arr[ind2]==x)
    // ans.push_back(ind2);
    
    // else ans.push_back(-1);
    
    
    
    // return ans;
    
    vector<int>ans;
    int first=-1;
    int last=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            first=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            last=i;
            break;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    
    
    return ans;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends