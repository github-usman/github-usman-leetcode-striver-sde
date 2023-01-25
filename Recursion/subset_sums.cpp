#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsetSums(int index,vector<int> arr,vector<int> &ans,int n,vector<int> &subset){
    if(index == n){

        int sum = 0;
        for(auto it:ans){
            sum += it;
        }
        if(ans.size() == 0){
            sum = 0;
        
        }
        subset.push_back(sum);
        return;
    }
    // sum += arr[index];
    ans.push_back(arr[index]);
    subsetSums(index+1,arr,ans,n,subset);
    ans.pop_back();
    subsetSums(index+1,arr,ans,n,subset);
    // ans.push_back(sum);

}
int main(){

    int n;
    cin>>n;

    vector<int> arr,ans,subset;
    int temp;
    for(int i = 0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    subsetSums(0,arr,ans,n,subset);
    reverse(subset.begin(),subset.end());

    for(int i = 0;i<subset.size();i++){
        cout<<subset[i]<<" ";
    }
    cout<<endl;

    return 0;
}