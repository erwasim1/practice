class Solution {
public:
//Time complexity->0(n^2)
    int findDuplicate(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};

//o(n)/0(1)


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
        int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow != fast);
            
            fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};