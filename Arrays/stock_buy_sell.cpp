class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        int n = prices.size();
        int max_arr[n];
        int min_arr[n];

        // for minmum current array;
        for(int i = 0;i<n;i++){
            min_val = min(prices[i],min_val);
            min_arr[i] = min_val;
        }
        // for maxmum current array for left side
         int profit = 0;
         for(int i = (n-1);i>=0;i--){
            max_val = max(prices[i],max_val);
            max_arr[i] = (max_val-min_arr[i]);
            profit = max(max_arr[i],profit);
        }

       

        
        return profit;
    }
};