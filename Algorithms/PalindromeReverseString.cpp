class Solution {
public:
  bool isPalindrome(int x) {

    string str = to_string(x);

    string rev = str;

    reverse(rev.begin(), rev.end());

    if (str == rev) {
      return true;
    }

    return false;
  }
};