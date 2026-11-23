class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        unordered_map<char, int> mpp;
        unordered_set<char> st;

        if(words.size() <= 1){
            return true;
        }

        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                mpp[words[i][j]]++;
                st.insert(words[i][j]);
            }
        }

        for(char ch : st){
            if(mpp[ch] % words.size() != 0){
                return false;
            }
        }

        return true;
    }
};