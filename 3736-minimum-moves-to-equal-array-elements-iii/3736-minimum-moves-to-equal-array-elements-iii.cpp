class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int maxV = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            maxV = max(maxV, nums[i]);
        }

        int count = 0;

        for(int j = 0; j < nums.size(); j++){
            count += maxV - nums[j];
        }

        return count;
    }
};