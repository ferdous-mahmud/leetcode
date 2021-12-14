// Brout Force O(nlogn) solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int size = nums.size();
        
        if (size == 0){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int result = 0;
        int currentres = 0;
        
        for(int i = 0; i < size - 1; i++){
            if(nums[i] + 1 == nums[i + 1] ){
                cout << nums[i] << " ";
                currentres ++;
            }
            else if(nums[i] == nums[i + 1]){
                // Repetative number
            }
            else{
                currentres = 0;
            }
            result = max(result, currentres);
        }
        
        return result + 1;
    }
};