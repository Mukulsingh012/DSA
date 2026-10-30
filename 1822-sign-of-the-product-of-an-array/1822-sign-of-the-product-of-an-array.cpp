class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int count = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] > 0){
                nums[i] = 1;
            }
            else if(nums[i] < 0){
                nums[i] = -1;
                count++;
            }
            else{
                return 0;
            }
        }

        if(count % 2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};