#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void subset(vector<int> nums, vector<int> ans, int n, int index, set<vector<int>> &sub)
{
    if (index == n)
    {
        sort(ans.begin(),ans.end());
        sub.insert(ans);

        return;
    }

    ans.push_back(nums[index]);
    subset(nums, ans, n, index + 1, sub);
    ans.pop_back();
    subset(nums, ans, n, index + 1, sub);
}
    vector<vector<int>> subsetsWithDup( vector<int>&nums) {
    vector<int> ans;
    set<vector<int>> sub;
  

     subset(nums, ans, nums.size(), 0, sub);
      vector<vector<int>> ansFinal;

    for (auto it : sub)
    {   
        vector<int> vec;
        for (auto x : it)
        {
            vec.push_back(x);
            // cout << x << " ";
        }
        ansFinal.push_back(vec);
        cout << endl;
    }
     return ansFinal;
    }
};


int main(){

    int n;
    cin>>n;

    vector<int> nums;
    int temp;

    for(int i = 0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }



    Solution obj;
    vector<vector<int>> ansFinal = obj.subsetsWithDup(nums);

    for(auto x:ansFinal){
        for(auto it:x){
            cout<<it<<" ";
        }
        cout<<endl;
    }


    return 0;
}