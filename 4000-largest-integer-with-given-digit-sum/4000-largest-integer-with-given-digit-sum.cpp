class Solution {
public:
    int largestInteger(int n, int s) {
        
        int ans = 0;
        if(9 * n < s){
            return -1;
        }

        for(int i = 0; i < n; i++){

            if(9 <= s){
                ans = ans * 10 + 9;
                s -= 9;
            }
            else{
                ans = ans * 10 + s;
                s = 0;
            }
        }

        return ans;
    }
};