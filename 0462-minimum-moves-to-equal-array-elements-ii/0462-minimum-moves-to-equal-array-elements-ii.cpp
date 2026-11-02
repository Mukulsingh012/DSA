class Solution {
public:
    int minMoves2(vector<int>& nums) {

        long long count = 0;
        long long ans = LLONG_MAX;
        vector<long long> prefix(nums.size());
        sort(nums.begin(), nums.end());
        prefix[0] = 0;

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i - 1] + nums[i - 1];
        }

        long long sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        for(int k = 0; k < nums.size(); k++){

            count = (sum - 1LL * nums[k] * (nums.size() - k) - prefix[k]) + (1LL * nums[k] * k - prefix[k]);
            ans = min(ans, count);

        }

        return ans;
        
    }
};