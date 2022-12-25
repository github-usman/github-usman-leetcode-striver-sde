#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    int n;
    cin >> n;
    vector<int> nums;
    int temp;

    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
        ump[nums[i]]++;
    }
    int ans = 0;
    for (auto x : ump)
    {
        if (x.second > nums.size() / 2)
        {
            ans = x.first;
            break;
        }
    }
    cout << ans << endl;
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        driver();

    return 0;
}