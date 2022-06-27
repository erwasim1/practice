//print sequence which are equal to given sum
#include<vector>
#include <iostream>
using namespace std;
void prints(int ind,vector<int>&ds,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
           for(auto it:ds)
            cout<<it<<" ";
        
        cout<<endl;
        }
        return; 
        
        }
    
    
    
    //taking sequece
    ds.push_back(arr[ind]);
    s+=arr[ind];
    prints(ind+1,ds,s,sum,arr,n);
     s-=arr[ind];
    ds.pop_back();
   
    
    //not taking
    prints(ind+1,ds,s,sum,arr,n);
    
    
    
}

int main() {
    int n=3;
    int arr[]={1,2,1};
    int sum=2;
    vector<int>ds;
    prints(0,ds,0,sum,arr,n);
	
} 

//count the possible sum sequence
#include<vector>
#include <iostream>
using namespace std;
int prints(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum)
        return 1;
       else return 0; 
        
        }
    
    
    
    //taking sequece
    
    s+=arr[ind];
   int l= prints(ind+1,s,sum,arr,n);
     s-=arr[ind];
    
   
    
    //not taking
   int r= prints(ind+1,s,sum,arr,n);
    
    return l+r;
    
}

int main() {
    int n=3;
    int arr[]={1,2,1};
    int sum=2;

    cout<<prints(0,0,sum,arr,n);
    //return ans;
	
} 