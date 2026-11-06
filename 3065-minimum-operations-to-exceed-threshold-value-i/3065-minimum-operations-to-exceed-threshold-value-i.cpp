class Solution {
public:
    int minOperations(std::vector<int>& nums, int k) {
        
        vector<bool> removed(nums.size(), false);
        int count = 0;

        while (true) {
            int minIdx = -1;
            for (int i = 0; i < nums.size(); i++) {
                if (removed[i]) continue;
                if (minIdx == -1 || nums[i] < nums[minIdx]) minIdx = i;
            }
            if (nums[minIdx] >= k) break;
            removed[minIdx] = true;
            count++;
        }

        return count;
    }
};