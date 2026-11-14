class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        int count = INT_MAX;
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int sum = 0;
        while(l <= r){
        
            for(int j = l - 1; j < nums.size(); j++){
                
                if(j == l - 1){
                    sum = prefix[j];
                }
                else{
                    sum = prefix[j] - prefix[j - l];
                }
                if(sum > 0){
                    count = min(count, sum);
                }
            }
            l++;
        }

        return count == INT_MAX ? -1 : count;

    }
};