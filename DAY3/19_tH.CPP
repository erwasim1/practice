class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergeintervals;
        
        sort(intervals.begin(),intervals.end());
        
        if(intervals.size()==0)return mergeintervals;
        
        vector<int>Tempintervals=intervals[0];
        
        for(auto it:intervals){
            if(it[0]<=Tempintervals[1]){
                Tempintervals[1]=max(it[1],Tempintervals[1]);
            }else{
                mergeintervals.push_back(Tempintervals);
                Tempintervals=it;
            }
        }
        mergeintervals.push_back(Tempintervals);
        return mergeintervals;
    }
};