#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &nums, int low, int mid, int high)
{
    int cnt = 0;
    int j = mid + 1;
    int i = low;

    while (i <= mid)
    {
        while ((j <= high) && (nums[i] > static_cast<long long>(2) * nums[j]))
        {
            j++;
        }
        cnt += (j - (mid + 1));
        i++;
    }

    i = low, j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i++]);
        }
        else
        {
            temp.push_back(nums[j++]);
        }
    }

    // individual
    while (i <= mid)
    {
        temp.push_back(nums[i++]);
    }

    while (j <= high)
    {
        temp.push_back(nums[j++]);
    }

    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &nums, int low, int high)
{
    int ans = 0, mid = 0;

    if (low >= high)
    {
        return 0;
    }
    else
    {
        mid = low + (high - low) / 2;
        ans = mergeSort(nums, low, mid);
        ans += mergeSort(nums, mid + 1, high);
        ans += merge(nums, low, mid, high);
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    int ans = mergeSort(nums, 0, n - 1);
    cout << ans << endl;
    return 0;
}
