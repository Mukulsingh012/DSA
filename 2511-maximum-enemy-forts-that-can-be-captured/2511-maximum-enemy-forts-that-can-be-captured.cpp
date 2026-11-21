class Solution {
public:
    int captureForts(vector<int>& forts) {
        
        int i = 0;
        int j = 0;
        int count = 0;
        int result = 0;

        while(j < forts.size()){

            if(forts[j] != 0){
                i = j;
            }
            else{
                while(j < forts.size() && forts[j] == 0){
                    j++;
                    count++;
                }

                if(j < forts.size() && forts[i] == -forts[j]){
                    result = max(result, count);
                }

                count = 0;
                i = j;

            }
            j++;

        }

        return result;
    }
};