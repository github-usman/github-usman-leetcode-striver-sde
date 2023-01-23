#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    
    vector<int> nums;
    int temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    int ans = 0;
    int localAns = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            localAns++;
        }
        else{
            ans = max(localAns,ans);
            localAns = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}