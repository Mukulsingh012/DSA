class Solution {
public:
    bool canAliceWin(int n) {
        
        int trun = 10;
        int i = 0;        
        while(trun >= 0 && n >= 0){

            if(i % 2 == 0){
                if(trun > n){
                    return false;
                }
            }

            n = n - trun;
            trun--;
            i++;

        }
        return true;        
    }
};