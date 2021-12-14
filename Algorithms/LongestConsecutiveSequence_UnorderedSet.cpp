// Longest Consecutive Sequence O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        int result = 0;
        
        // Insert all the element into set
        for(int x : nums){
            s.insert(x);
        }
        
        for(int x : nums){
            // previous number not found
            if(s.find(x - 1) == s.end()){
                int count = 1;
                while(s.find(x + 1) != s.end()){
                    x += 1;
                    count ++;
                }
                if(count > result){
                    result = count;
                }
            }
        }
        
        return result;  
    }
};