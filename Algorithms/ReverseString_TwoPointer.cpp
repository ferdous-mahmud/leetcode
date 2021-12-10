class Solution {
public:
  void reverseString(vector<char> &s) {

    int size = s.size();

    int begin = 0;
    int end = size - 1;

    while (end > begin) {
      char temp = s[begin];
      s[begin] = s[end];
      s[end] = temp;
      begin++;
      end--;
    }
  }
};