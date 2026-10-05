class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<string> ans;
        unordered_map<int, string> mpp;

        for(int i = 0; i < heights.size(); i++){
            mpp[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end());
        int n  = heights.size();

        for(int j = n - 1; j >= 0; j--){
            ans.push_back(mpp[heights[j]]);
        }

        return ans;
    }
};