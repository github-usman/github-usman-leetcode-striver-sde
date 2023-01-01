#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// using prefix sum hand hash table using 
int maxLength(vector<int> &A){
     unordered_map<int, int> ump;
     int N = A.size();
 
    int sum = 0; // Initialize the sum of elements
    int max_len = 0; // Initialize result
 
    // Traverse through the given array
    for (int i = 0; i < N; i++) {
 
        // Add current element to sum
        sum += A[i];
        if (sum == 0)
            max_len = i + 1;
 
        // Look for this sum in Hash table
        if (ump.find(sum) != ump.end()) {
 
            // If this sum is seen before, then update
            // max_len
            max_len = max(max_len, i - ump[sum]);
        }
        else {
            // Else insert this sum with index
            // in hash table
            ump[sum] = i;
        }
    }
 
    return max_len;
}

////////////***First Approach***////////////
void driver(){

    int n;
    cin>>n;

    vector<int> A;
    int temp;
    for(int i = 0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cout<<maxLength(A);
  
    

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