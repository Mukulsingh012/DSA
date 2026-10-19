class Solution {
public:
    int countGoodSubstrings(string s) {
    

        int i = 0;
        int j = 1;
        int k = 2;


        int count = 0;

        while(k < s.size()){

            if(s[i] != s[j] && s[j] != s[k] && s[k] != s[i]){
                count++;
            }
            i++;
            j++;
            k++;

        }

        return count;

    }
};