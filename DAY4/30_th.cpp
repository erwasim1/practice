// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here..
    int firstBuy=INT_MIN;
    int firstSell=0;
    int secondBuy=INT_MIN;
    int secondSell=0;
    
    for(int i=0;i<price.size();i++){
        firstBuy=max(firstBuy,-price[i]);
        firstSell=max(firstSell,firstBuy+price[i]);
        secondBuy=max(secondBuy,firstSell-price[i]);
        secondSell=max(secondSell,secondBuy+price[i]);
    }
    
    return secondSell;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}
  // } Driver Code Ends