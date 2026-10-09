class Solution {
public:
    int minInsertions(string s) {
        
        stack<int> st;
        int ans = 0;
        int i = 0;

        while(i < s.size()){

            if(s[i] == '('){
                st.push(s[i]);
                i++;
            }
            else{
                if(i + 1 < s.size() && s[i + 1] == ')'){
                    i = i + 2;
                }
                else{
                    ans++;
                    i++;
                }

                if(!st.empty()){
                    st.pop();
                }
                else{
                    ans++;
                }
            }
        }

        return ans + 2 * st.size();

        
        
    }
};