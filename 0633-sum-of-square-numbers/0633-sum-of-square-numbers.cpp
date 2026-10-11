class Solution {
public:
    bool judgeSquareSum(int c) {
        
        for(long long i = 0; i * i <= c; i++){

            if(c - (i * i) >= 0){
                int val = c - (i * i);
                int x = sqrt(val);

                if(x * x == val){
                    return true;
                }
                
            }
            else{
                return false;
            }
        }

        return false;
    }
};