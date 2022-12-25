class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int sizeLess = intervals.size()-1;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<intervals.size();i++){
            vector<int> row;
            row.push_back(intervals[i][0]);
            int local_Ans = intervals[i][1];
        
            while(i<(intervals.size())){

                if(i<sizeLess && intervals[i+1][0] < local_Ans  && intervals[i+1][1] < local_Ans){
                    i++;
                    continue;
                }else if(i<sizeLess && intervals[i+1][0] <= local_Ans){
                    // row.push_back(intervals[i+1][1]);
                    // ans.push_back(row);
                    local_Ans = intervals[i+1][1];
                    i++;
                   
                }else{
                     row.push_back(local_Ans);
                    ans.push_back(row);
                    break;
                }
            }
        }
        return ans;
    }
};