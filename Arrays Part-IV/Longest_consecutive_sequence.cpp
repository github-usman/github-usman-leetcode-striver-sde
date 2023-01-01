#include<bits/stdc++.h>

using namespace std;
int longestConsecutive(vector < int > & nums) {
  set < int > hashValue;
  for (int i = 0;i<nums.size();i++) {
    hashValue.insert(nums[i]);
  }

  int ans = 0;

  for (auto num: nums) {
    if (!hashValue.count(num - 1)) {
      int currentNum = num;
      int cnt = 1;

      while (hashValue.count(currentNum+1)) {
        currentNum++;
        cnt++;
      }
    
      ans = max(ans, cnt);
    }
  }
  cout<<ans<<endl;
  return ans;
}
int main() {
  vector<int> arr{100,200,1,2,3,4};
  int lon = longestConsecutive(arr);
  cout << "The longest consecutive sequence is " << lon << endl;

}