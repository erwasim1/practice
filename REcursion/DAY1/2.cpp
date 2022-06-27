//string subsequence
#include<vector>
#include <iostream>
using namespace std;
void prints(int ind,vector<int>&ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    
    //taking sequece
    ds.push_back(arr[ind]);
    prints(ind+1,ds,arr,n);
    ds.pop_back();
    
    //not taking
    prints(ind+1,ds,arr,n);
    
    
    
}

int main() {
    int n=3;
    int arr[]={3,1,2};
    vector<int>ds;
    prints(0,ds,arr,n);
	
} 