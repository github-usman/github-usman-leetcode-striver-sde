#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <iomanip>
#include<vector>

using namespace std;

struct Item{
    int value;
    int weight;
};

int main()
{

    int n;
    cin >> n;

    double W;
    cin >> W;
    Item arr[n];

    int weight[n], value[n];

    for(int i = 0;i<n;i++){
         cin >> arr[i].value;
     
    }
    for(int i = 0;i<n;i++){

        cin >> arr[i].weight;
    }

    int ansArr[n];
    vector<pair<double,double>> vvp;
    for (int i = 0; i < n; i++)
    {
       
        double divi = double(arr[i].value)/double(arr[i].weight);
        vvp.push_back(make_pair(divi,arr[i].weight));

    }
    sort(vvp.rbegin(),vvp.rend());
    for(int i = 0;i<n;i++){
        cout<<vvp[i].first<<" "<<vvp[i].second<<endl;
    }

    double ansVal = 0;
    double wt = 0;
    for(int i = 0;i<n;i++){
        if(wt<W){
            if(wt+vvp[i].second>W){
                double rem = (wt+vvp[i].second)-W;
                ansVal += vvp[i].first*(vvp[i].second-rem);
                wt += (vvp[i].second-rem);
            }else{
                ansVal += vvp[i].first*vvp[i].second;
                wt += vvp[i].second;
            }
        }else{
            break;
        }
    }
    cout<<setprecision(2)<<fixed;
    cout<<ansVal<<endl;

    return 0;
}