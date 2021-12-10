class Solution {
public:
  void reverseString(vector<char> &s) {

    int size = s.size();
    vector<char> temp;

    for (int i = size - 1; i >= 0; i--) {
      temp.push_back(s[i]);
    }
    s = temp;
  }
};