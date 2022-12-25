#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    int m, n;
    cin >> m >> n;

    int robo[m][n];
    int val;
    for (int i = 0; i < m; i++)
    {
        val = 1;
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                robo[i][j] = 0;
            }
            continue;
        }
        robo[i][0] = val;
        for (int j = 1; j < n; j++)
        {
            robo[i][j] = val + robo[i - 1][j];
            val = robo[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int localans = 0;
        for (int j = 0; j < n - 1; j++)
        {
            localans += robo[i][j];
        }
        ans += localans;
    }

    cout << ++ans << endl;
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