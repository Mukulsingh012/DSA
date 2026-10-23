class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        vector<int> ans(code.size(), 0);
        int n = code.size();
        

        if(k > 0){

            for(int i = 0; i < code.size(); i++){

                int sum = 0;
                int j = i + 1;

                while(j <= i + k){
                    sum += code[j % code.size()];
                    j++;
                }

                ans[i] = sum;

            }
        }

        else if(k < 0){

            
            for(int i = 0; i < code.size(); i++){

                int sum = 0;
                int j = i + k;

                while(j < i){
                    sum += code[(j + n)  % code.size()];
                    j++;
                }

                ans[i] = sum;

            }
        }

        return ans;
    }
};