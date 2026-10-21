class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        string t;
        unordered_set<string> mpp;

        if(s.size() < k){
            return false;
        }

        for(int i = 0; i < k; i++){
            t.push_back(s[i]);
        }

        for(int j = k; j < s.size(); j++){

            mpp.insert(t);
            t.erase(t.begin());
            t.push_back(s[j]);
            
        }

        mpp.insert(t);

        if(pow(2, k) == mpp.size()){
            return true;
        }
        else{
            return false;
        }


    }
};