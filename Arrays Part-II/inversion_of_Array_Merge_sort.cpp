#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int inv_count = 0;
    int left1 = left;
    int j = mid;
    int left2 = left;
    while ((left1 <= mid - 1) && (j <= right))
    {
        if (arr[left1] <= arr[j])
        {
            temp[left2++] = arr[left1++];
        }
        else
        {
            temp[left2++] = arr[j++];
            inv_count = inv_count + (mid - left1);
        }
    }

    while (left1 <= mid - 1)
        temp[left2++] = arr[left1++];

    while (j <= right)
        temp[left2++] = arr[j++];

    for (left1 = left; left1 <= right; left1++)
        arr[left1] = temp[left1];

    return inv_count;
}

int merge_Sort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left)
    {
        mid = left + (right - left) / 2;

        inv_count += merge_Sort(arr, temp, left, mid);
        inv_count += merge_Sort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    int n = 5;
    int temp[n];
    int ans = merge_Sort(arr, temp, 0, n - 1);
    cout << "The total inversions are " << ans << endl;
    for (int left1 = 0; left1 < n; left1++)
    {
        cout << arr[left1] << " ";
    }

    return 0;
}