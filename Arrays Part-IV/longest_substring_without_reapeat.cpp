#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    string s;
    cin >> s;
    int ans = 0;
    if (s == "" || s == "")
    {
        ans = 0;
    }
    else
    {
        ans = 0;
        int cnt = 0;
        int stringIndex[123] = {0};
        int startIndex = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int j = i;
            while (j < s.size())
            {
                if (stringIndex[(int)s[j]] == 0)
                {
                    stringIndex[(int)s[j]]++;
                    cnt++;
                }else{
                    ans = max(ans,cnt);
                    cnt = 0;
                     for (int k = 95; k < 123; k++)
                    {
                    stringIndex[k] = {0};
                    }
                    break;
                }
               j++;
            }
           if(j >= s.size()){
            break;
           }
        }
        ans = max(ans, cnt);
    }

    // return ans;
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