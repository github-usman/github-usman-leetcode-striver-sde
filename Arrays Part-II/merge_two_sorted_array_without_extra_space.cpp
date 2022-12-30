#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    int m, n;
    cin >> m >> n;

    vector<int> nums1, nums2;
    int temp;

    if (m != 0)
    {
        for (int i = 0; i < m + n; i++)
        {
            cin >> temp;
            nums1.push_back(temp);
        }
    }

    if (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            nums2.push_back(temp);
        }
    }

    int k = 0;
    if (m != 0 && n != 0)
    {
        for (int i = (m - 1); i < m + n; i++)
        {
            nums1[i] = nums2[k];
            k++;
        }

    }else if(m == 0){
        nums1 = nums2;
    }

    sort(nums1.begin(), nums1.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout<<endl;

   
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