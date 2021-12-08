class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int front = 0;
    int rear = numbers.size() - 1;

    while (rear > front) {
      int sum = numbers[front] + numbers[rear];

      if (sum == target) {
        break;
      } else if (sum > target) {
        rear--;
      } else {
        front++;
      }
    }

    return {front + 1, rear + 1};
  }
};