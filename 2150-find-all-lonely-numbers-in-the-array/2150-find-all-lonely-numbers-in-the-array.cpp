class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int, int> mpp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }

        if(nums.size() == 1){
            ans.push_back(nums[0]);
        }
        else{
            for(int j = 0; j < nums.size(); j++){

                if(mpp[nums[j]] == 1 && 
                mpp[nums[j] + 1] == 0 && 
                mpp[nums[j] - 1] == 0){
                    ans.push_back(nums[j]);
                }

            }
        }    

        return ans;
    }
};