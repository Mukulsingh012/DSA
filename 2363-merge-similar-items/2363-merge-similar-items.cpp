class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

        vector<int> val;
        vector<vector<int>> result;
        
        unordered_map<int, int> mpp;
        unordered_map<int, int> mpp1;

        for(int i = 0; i < items1.size(); i++){
            mpp[items1[i][0]] = items1[i][1];
        }

        for(int j = 0; j < items2.size(); j++){
            mpp1[items2[j][0]] = items2[j][1];
        }

        for(int k = 0; k < items1.size(); k++){
            val.clear();
            val.push_back(items1[k][0]);
            val.push_back(mpp[items1[k][0]] + mpp1[items1[k][0]]);
            result.push_back(val);
        }

        for(int l = 0; l < items2.size(); l++){

            
            if(mpp[items2[l][0]] == 0){
                val.clear();
                val.push_back(items2[l][0]);
                val.push_back(items2[l][1]);
                result.push_back(val);
            }
          
        }

        sort(result.begin(), result.end());

        return result;
        
    }
};