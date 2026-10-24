class Solution {
public:
    bool isPathCrossing(string path) {
        
        
        vector<int> ans(2, 0);

        unordered_set<string> mpp;

        mpp.insert(to_string(ans[0]) + "," + to_string(ans[1]));

        for(int i = 0; i < path.size(); i++){

            if(path[i] == 'N'){
                ans[1] += 1;
            }
            else if(path[i] == 'E'){
                ans[0] += 1;
            }
            else if(path[i] == 'S'){
                ans[1] -= 1;
            }
            else if(path[i] == 'W'){
                ans[0] -= 1;
            }

            string curr_pos = to_string(ans[0]) + "," + to_string(ans[1]);

            if(mpp.find(curr_pos) != mpp.end()){
                return true;
            }
            mpp.insert(curr_pos);
        }

        return false;
    }
};