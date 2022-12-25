class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i = 1;i<=numRows;i++){
            int sol = 1;
            vector<int> row;
            for(int j = 1;j<=i;j++){
                row.push_back(sol);
                sol = (sol*(i-j))/j;
            }
            result.push_back(row);
        }
        return result;
    }
};