class Solution {
public:
  int longestMountain(vector<int> &arr) {

    int result = 0;
    int size = arr.size();

    int previousRes = -1;

    if (size >= 3) {
      for (int i = 0; i < size - 2; i++) {

        int front = i;
        int mid = i + 1;
        int end = i + 2;

        // peak
        if (arr[mid] > arr[front] && arr[mid] > arr[end]) {

          // Backup previous value
          int bFront = front;
          int bMid = mid;
          int bEnd = end;

          int backword = 0;
          int forword = 0;

          while (arr[mid] > arr[front]) {
            front--;
            mid--;
            backword++;
            if (front < 0) {
              break;
            }
          }

          front = bFront;
          mid = bMid;
          end = bEnd;

          while (arr[mid] > arr[end]) {
            end++;
            mid++;
            forword++;
            if (end > size - 1) {
              break;
            }
          }

          result = backword + forword + 1;

          if (previousRes >= result) {
            result = previousRes;
          }

          previousRes = result;
        }
      }
    }

    return result;
  }
};