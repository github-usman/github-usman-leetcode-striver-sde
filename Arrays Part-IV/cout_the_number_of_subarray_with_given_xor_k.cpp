

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
int driver(vector<int> &arr, int x)
{

    unordered_map<int, int> visited;
    int cpx = 0;
    long long cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cpx ^= arr[i];
        if (cpx == x)
            cnt++;
        int h = cpx ^ x;
        if (visited.find(h) != visited.end())
        {
            cnt = cnt + visited[h];
        }
        visited[cpx]++;
    }
    return cnt;
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
    {
        int n;
        cin >> n;

        vector<int> arr;
        int temp;
        int x;
        cin >> x;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        cout << driver(arr, x) << endl;
    }

    return 0;
}