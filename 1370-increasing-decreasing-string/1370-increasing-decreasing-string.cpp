class Solution {
public:
    string sortString(string s) {
        
        unordered_map<char, int> mpp;
        unordered_set<char> st;
        vector<int> ans;
        string str;

        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
            st.insert(s[i]);
        }

        for(auto x : st){
            ans.push_back(x);
        }

        sort(ans.begin(), ans.end());

        int k = 0;
        while(str.size() != s.size()){
            
            if(k == ans.size()){
                reverse(ans.begin(), ans.end());
                k = 0;
            }
            if(mpp[ans[k]] > 0){
                str.push_back(ans[k]);
                mpp[ans[k]]--;
                k++;
            }
            else{
                k++;
            }
        }

        return str;

        
        
    }
};