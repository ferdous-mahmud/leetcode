class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {

    vector<int> result;

    unordered_map<int, int> hash_table;

    for (int i = 0; i < nums.size(); i++) {

      int secondNum = target - nums[i];

      if (hash_table.find(secondNum) != hash_table.end()) {
        result.push_back(hash_table.find(secondNum)->second);
        result.push_back(i);
        return result;
      } else {
        hash_table[nums[i]] = i;
      }
    }
    return result;
  }
};