class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        
        unordered_set<int> mpp;
        int ans = 1;

        for(int i = 0; i < rolls.size(); i++){

            mpp.insert(rolls[i]);
            if(mpp.size() == k){
                ans++;
                mpp.clear();
            }
        }

        return ans;
    }
};