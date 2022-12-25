class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {0};
        for(int i = 0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int k = 0;
        while(arr[0]){
            nums[k] = 0;
            k++;
            arr[0]--;
        }

        while(arr[1]){
            nums[k] = 1;
            k++;
            arr[1]--;
        }

        while(arr[2]){
            nums[k] = 2;
            k++;
            arr[2]--;
        }
    }
};