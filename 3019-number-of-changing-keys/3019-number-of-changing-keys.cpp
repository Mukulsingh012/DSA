class Solution {
public:
    int countKeyChanges(string s) {
        
        int count = 0;
        int i = 0;

        while(i < s.size() - 1){

            if(tolower(s[i]) != tolower(s[i + 1])){
                count++;
            }
            i++;
        }

        return count;
    }
};