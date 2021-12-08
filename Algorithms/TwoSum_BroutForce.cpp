class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result;

    int size = nums.size();

    for (int i = 0; i < size; i++) {
      for (int j = size - 1; j > 0; j--) {
        if (nums[i] + nums[j] == target && j > i) {
          result.push_back(i);
          result.push_back(j);
          break;
        }
      }
    }

    return result;
  }
};

// Time Complexity  - O(n^2)
// Space Complexity - O(1)