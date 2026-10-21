class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> si(26, 0);
        vector<int> pi(26, 0);

        if(s1.size() > s2.size()){
            return false;
        }

        int left = 0, right = 0;

        while(right < s1.size()){

            si[s1[right] - 'a']++;
            pi[s2[right] - 'a']++;
            right++;

        }

        while(right < s2.size()){

            if(si == pi){
                return true;
            }

            pi[s2[left] - 'a']--;
            left++;
            pi[s2[right] - 'a']++;
            right++;

        }

        if(si == pi){
            return true;
        }
        else{
            return false;
        }
    }
};
    