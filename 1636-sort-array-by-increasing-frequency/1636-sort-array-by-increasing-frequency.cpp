class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        

        unordered_map<int, int> count;

        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&count](int a, int b){

            if(count[a] == count[b]){
                return a > b;
            }

            return count[a] < count[b];
        });

        return nums;



    }
};