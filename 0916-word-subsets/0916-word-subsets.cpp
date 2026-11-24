class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<string> ans;
        unordered_map<char, int> mpp;
        unordered_set<char> st;

        for(int i = 0; i < words2.size(); i++){

            unordered_map<char, int> temp;
               
            for(int j = 0; j < words2[i].size(); j++){
                temp[words2[i][j]]++;
                st.insert(words2[i][j]);
            }

            for(auto it : temp){
                mpp[it.first] = max(mpp[it.first], it.second);
            }
        }

        for(int k = 0; k < words1.size(); k++){
            unordered_map<char, int> mpp2;
            int isTrue = 0;
            for(int l = 0; l < words1[k].size(); l++){
                mpp2[words1[k][l]]++;
            }

            for(char ch : st){
                if(mpp2[ch] < mpp[ch]){
                    isTrue = 1;
                    break;
                }
            }

            if(isTrue == 0){
                ans.push_back(words1[k]);
            }
        
        }

        return ans;
    }
};