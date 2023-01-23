#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{

    vector<int> nums;
    int temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    int first = nums[0];
    int second = nums[1];
    int third = nums[2];

    set<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        first = nums[i];
        int k = i + 1;
        int j = n - 1;
        while (k < j)
        {
            second = nums[k];
            third = nums[j];
            if ((first + second + third) < 0)
            {
                k++;
            }
            else if ((first + second + third) > 0)
            {
                j--;
            }
            else if ((first + second + third) == 0)
            {
  
                vector<int> v1;
                v1.push_back(first);
                v1.push_back(second);
                v1.push_back(third);

                ans.insert(v1);
                k++;
            }
        }
    }

   vector<vector<int>> ok;
    for (auto it = ans.begin(); it != ans.end(); it++)
    {

        vector<int> v1 = *it;
        // for (int i = 0; i < v1.size(); i++)
        // {
        //     cout << v1[i] << " ";
            
        // }
        ok.push_back(v1);
        cout << endl;
       
    }


    for(int i=0;i<ok.size();i++){
        for(int j = 0;j<ok[0].size();j++){
            cout<<ok[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}