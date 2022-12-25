#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix;

    int temp;
    for (int i = 0; i < n; i++)
    {
        vector<int> rowise;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            rowise.push_back(temp);
        }
        matrix.push_back(rowise);
    }
    int targetValue;
    cin >> targetValue;

    for (int i = 0; i < matrix.size(); i++)
    {

        if (matrix[i][m - 1] >= targetValue)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == targetValue)
                {
                    cout << "yes" << endl;
                    return;
                }
            }
            cout << "NOT" << endl;
            return;
        }

        cout << endl;
    }
    cout << " no" << endl;
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