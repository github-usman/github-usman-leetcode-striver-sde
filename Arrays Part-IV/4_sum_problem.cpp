#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> four_sum_prblem(vector<int> &nums,int target,int n){
    sort(nums.begin(),nums.end());

    set<vector<int>> sv;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                long long int fourthValue = (long long)target-((long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
                cout<<" fourthValue"<<fourthValue<<endl;
                if(binary_search(nums.begin()+k+1,nums.end(),fourthValue)){
                    vector<int> vv;
                    vv.push_back(nums[i]);
                    vv.push_back(nums[j]);
                    vv.push_back(nums[k]);
                    vv.push_back(fourthValue);
                    sv.insert(vv);
                }
            }
        }
    }

    vector<vector<int>> result(sv.begin(),sv.end());
  

    return result;
}

int main(){

    int n;
    cin>>n;
    int target;
    cin>>target;

    vector<int> nums;
    int temp;
    for(int i = 0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    vector<vector<int>> result = (four_sum_prblem(nums,target,n));


    cout<<"after that"<<endl;
     for(int i = 0;i<result.size();i++){
        for(int j = 0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}




