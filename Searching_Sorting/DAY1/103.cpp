//bruteforce
int search(vector<int>& nums, int target) {
        
        int idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                idx=i;
                return i;
            }
        }
            
            return -1;
     
    }
        
};

//binary_search
  
        int n=nums.size();
        int left=0;
        int right=n-1;
        
        while(left<=right){
          int mid=(left+right)/2;
            
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>=nums[left]){
                if(target<=nums[mid] and target>=nums[left])
                    right=mid-1;
                else left=mid+1;
            }
            else{
                if(target>=nums[mid] and target<=nums[right])
                    left=mid+1;
                
                else right=mid-1;
            }
        }
        return -1;
    }