#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> start, end;
    int n;
    cin >> n;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        start.push_back(temp);
    }
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        end.push_back(temp);
        minVal = min(minVal, temp);
    }

    int ans = 1;

    vector<pair<int, int>> vvp;
    for (int i = 0; i < n; i++)
    {
        vvp.push_back(make_pair(end[i], start[i]));
    }

    sort(vvp.begin(), vvp.end());
    // sort(end.begin(),end.end());
    int meetingEnd = vvp[0].first;
    // meetingEnd = vvp[0].second;
    for (int i = 0; i < n; i++)
    {

        // cout<<vvp[i].first<<" "<<vvp[i].second<<endl;
        if (meetingEnd < vvp[i].second)
        {
            ans++;
            meetingEnd = vvp[i].first;
        }
    }

    // int curr = start[0];
    // int k = 0;
    // int i = 0;
    // while(i<n){

    //     if(curr<end[k]){
    //         ans++;
    //         cout<<curr<<" "<<end[k]<<endl;

    //         while(i<n){
    //             if(end[k]<start[i]){
    //                 curr = start[i];
    //                 // cout<<start[i]<<" whilein"<<endl;
    //                 break;
    //             }
    //             i++;
    //         }
    //         k++;
    //         continue;
    //     }else{
    //         k++;
    //         // i++;
    //     }
    // }
    cout << ans << endl;
    return 0;
}