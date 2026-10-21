class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> si(26, 0);
        vector<int> pi(26, 0);
        vector<int> ans;

        if(s.size() < p.size()){
            return ans;
        }


        int left = 0, right = 0;

        while(right < p.size()){
            si[s[right] - 'a']++;
            pi[p[right] - 'a']++;
            right++;
        }

        while(right < s.size()){

            if(si == pi){
                ans.push_back(left);
            }

            si[s[left] - 'a']--;
            left++;
            si[s[right] - 'a']++;
            right++;
        }

        if(si == pi){
            ans.push_back(left);
        }

        return ans;
    }
};