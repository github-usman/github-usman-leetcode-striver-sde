#include<bits/stdc++.h>
using namespace std;

#define ll long long int

// float powerFunction(float x,float n){
//     return (x<<n);
// }

////////////***First Approach***////////////
void driver(){

    double x;
    int n;
    cin>>x>>n;
    cout.precision(5);
    cout<<fixed;

    double val = pow(x,n);
    cout<<val<<endl;
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