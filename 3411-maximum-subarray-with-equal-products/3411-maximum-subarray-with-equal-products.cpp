class Solution {
public:
    int maxLength(vector<int>& nums) {
        
        int maxl = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            long long g = 0;
            long long l = 1;
            long long prod = 1;

            for(int j = i; j < nums.size(); j++){

                if (prod > LLONG_MAX / nums[j]) 
                    break;
                    
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                prod = prod*nums[j];

                if(prod == g * l){
                    maxl = max(maxl, j - i + 1);
                }
                
            }
        }

        return maxl;
    }
};