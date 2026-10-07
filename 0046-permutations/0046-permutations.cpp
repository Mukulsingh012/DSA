class Solution {
public:
    vector<vector<int>> ans;
    unordered_set<int> st;
    int n;

    vector<vector<int>> permute(vector<int>& nums) {
        
        n = nums.size();
        vector<int> arr;
        solve(nums, arr);
        return ans;

    }

    void solve(vector<int>& nums, vector<int>& arr){

        if(arr.size() == n){
            ans.push_back(arr);
            return;
        }

        for(int i = 0; i < n; i++){

            if(st.find(nums[i]) == st.end()){
                arr.push_back(nums[i]);
                st.insert(nums[i]);
                solve(nums, arr);
                arr.pop_back();
                st.erase(nums[i]);
                
            }
        }
    }
};