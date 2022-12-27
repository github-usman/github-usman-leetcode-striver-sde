#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;
    int target;
    cin>>target;

    vector<pair<int,int>> pr;
    int temp;
    for(int i= 0;i<n;i++){
        cin>>temp;
        pr.push_back(make_pair(temp,i));
    }

    sort(pr.begin(),pr.end());
    


    vector<int> ans;
    int st = 0,end = n-1;
    while(1){
        if(st>end){
            break;
        }
        if((pr[st].first+pr[end].first) == target){
            ans.push_back(pr[st].second);
            ans.push_back(pr[end].second);
            break;
        }else if((pr[st].first+pr[end].first)>target){
            end--;
        }else{
            st++;
        }
    }

    cout<<ans[0]<<" "<<ans[1]<<endl;


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