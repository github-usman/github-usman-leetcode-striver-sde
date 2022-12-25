class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool possible = false;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(n != nums[i]){
                possible = true;
                break;
            }else{
                n--;
            }
        }

        if(possible){
            next_permutation(nums.begin(),nums.end());
        }
        else{
            sort(nums.begin(),nums.end());
        }
        // for(int i=(nums.size()-1);i > 0;i--){
        //     if(nums[i] > nums[i-1]){
        //         swap(nums[i],nums[i-1]);
        //         possible = true;
        //         break;
        //     }
            
        // }
        // if(!possible){
        //    sort(nums.begin(),nums.end());
        // }
        
     
    }
};