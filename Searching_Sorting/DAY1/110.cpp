// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        int l=i+1;
        int h=size-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            if(abs(arr[i]-arr[mid])==n)return true;
            else if(arr[mid]-arr[i]>n)h=mid-1;
            
            else l=mid+1;
        }
    }
    return false;
}