#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>

using namespace std;


int main(){


    vector<int> nums;
    int n;
    cin>>n;

    int temp;

    for(int i = 0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

   int k = 0;

    for(int i = 0;i<n-1;i++){
        if(nums[i] == nums[i+1]){

        }else{
            nums[k] = nums[i];
            k++;
        }
    }
    nums[k] = nums[n-1];
    k++;
    cout<<k<<endl;
    return 0;
}