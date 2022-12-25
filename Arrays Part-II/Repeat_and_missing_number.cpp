#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    vector<int> arr;
    int n;
    cin>>n;

    int temp;


    for(int i = 0;i<n;i++){
        cin>>temp;

        arr.push_back(temp);
    }

// Write your code here 
      int sum = 0;

    int index[n+1]= {0};
    
    for(int i = 0;i<n;i++){
        index[arr[i]]++;
        sum += arr[i];
    }
    
    int M = 0,R = 0;

    
    for(int i = 0;i<=n;i++){
        if(index[i]>1){
            R = i;break;
        }
    }
    
    sum -= R;
    int totalSum = (n*(n+1))/2;
    
    M = totalSum-sum;
    cout<<M<<" "<<R<<endl;
	
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