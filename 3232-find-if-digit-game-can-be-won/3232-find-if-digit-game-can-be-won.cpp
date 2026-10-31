class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] < 10){
                sum += nums[i];
            }
            else{
                count += nums[i];
            }
        }

        if(sum != count){
            return true;
        }
        else{
            return false;
        }
    }
};