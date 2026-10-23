class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_set<int> st;

        for(int i = 0; i < candyType.size(); i++){
            st.insert(candyType[i]);
        }

        if(candyType.size() / 2 > st.size()){
            return st.size();
        }
        else{
            return candyType.size() / 2;
        }
    }
};