class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = 1;
        int length = 0;

        while(right < nums.size()){

            int diff = nums[right] - nums[left];

            if(diff == 1){
                length = max(length, right - left + 1);
            }

            if(diff <= 1){
                right++;
            }
            else{
                left++;
            }
        }

        return length;
        
    }
};