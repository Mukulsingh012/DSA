class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        

        unordered_set<string> st;

        for(int i = 0; i < words.size(); i++){

            string even = "";
            string odd = "";

            for(int j = 0; j < words[i].size(); j++){

                if(j % 2 == 0){
                    even += words[i][j];
                }
                else{
                    odd += words[i][j];
                }

            }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            st.insert(even + odd);
        }

        return st.size();
    }
};