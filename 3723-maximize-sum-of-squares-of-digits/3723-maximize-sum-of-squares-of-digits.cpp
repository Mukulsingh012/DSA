class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        string ans = "";

        if(9 * num < sum){
            return ans;
        }

        for(int i = 0; i < num; i++){

            if(9 <= sum){
                ans += '9';
                sum -= 9;
            }
            else{
                ans += (sum + '0');
                sum = 0;
            }
        }

        return ans;

    }
};    