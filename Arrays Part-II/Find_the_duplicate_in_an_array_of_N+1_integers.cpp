#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    
    vector<int> nums;
    int temp;
    int n;
    cin>>n;


    for(int i = 0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    int arr[1000000] = {0};

             int ans = 0;
            for(int i = 0;i<nums.size();i++){
                arr[nums[i]]++;
                if(arr[nums[i]]>1){
                    ans = nums[i];
                    break;
                }
            }
         
            cout<<ans<<endl;
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    driver();

    return 0;
}