#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    vector<ll> arr;
    int temp;

    for(int i = 0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
        
    }

    int cnt = 0;
    for(int i = (n-1);i>=0;i--){
        for(int j = 0;j<=i;j++){
            if(arr[j]>arr[i]){
                cnt++;
            }
        }
    }


    // we can solve it by using merge sort
    cout<<cnt<<endl;
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