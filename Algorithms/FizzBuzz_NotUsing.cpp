// FizzBuzz without using % operator
// Cause : % operator are very costly
// + - * / : O(n)  % : O(n^2)

class Solution {
public:
  vector<string> fizzBuzz(int n) {
    vector<string> result;

    int divByThree = 0;
    int divByFive = 0;

    for (int i = 1; i <= n; i++) {
      divByThree++;
      divByFive++;

      string res = "";

      if (divByThree == 3) {
        divByThree = 0;
        res += "Fizz";
      }
      if (divByFive == 5) {
        divByFive = 0;
        res += "Buzz";
      }
      if (res == "") {
        result.push_back(to_string(i));
      } else {
        result.push_back(res);
      }
    }

    return result;
  }
};