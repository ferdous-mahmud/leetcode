class Solution {
public:
  bool isPalindrome(int x) {

    string str = to_string(x);

    int size = str.length();
    int j = size - 1;
    bool result = true;

    for (int i = 0; i < size; i++) {
      if (str[i] != str[j]) {
        result = false;
      }
      j--;
    }

    return result;
  }
};