#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> height;
    int n;
    cin >> n;

    int temp;
    int prefixMax[n];
    int suffixMax[n];

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        height.push_back(temp);
        
    }
    int maxVal = height[0];
    for (int i = 0; i < n; i++)
    {
        maxVal = max(height[i],maxVal);
        prefixMax[i] = maxVal;
        
    }
    maxVal = height[n-1];
    for(int i = n-1;i>=0; i--){
        maxVal = max(height[i],maxVal);
        suffixMax[i] = maxVal;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        
        ans += min(suffixMax[i],prefixMax[i])-height[i];

    }

    cout << ans << endl;

    return 0;
}