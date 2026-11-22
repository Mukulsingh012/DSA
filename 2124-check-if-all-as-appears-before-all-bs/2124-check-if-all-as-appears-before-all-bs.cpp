class Solution {
public:
    bool checkString(string s) {
        
        int isTrue = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == 'b'){
                isTrue = 1;
            }
            else if(s[i] == 'a' && isTrue == 1){
                return false;
            }
        }

        return true;
        
    }
};