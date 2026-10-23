class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        

        int diff = 0;
        int max_len = INT_MIN;
        unordered_map<char, int> mpp;

        for(int i = 0; i < s.size(); i++){

            if(mpp.find(s[i]) != mpp.end()){
                max_len = max(max_len, i - mpp[s[i]] - 1);
            }
            else{
                mpp[s[i]] = i;
            }
        }

        return max_len == INT_MIN ? -1 : max_len;
    }
};