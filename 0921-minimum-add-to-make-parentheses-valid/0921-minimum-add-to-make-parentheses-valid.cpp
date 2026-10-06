class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<int> st;
        stack<int> st1;

        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    st1.push(s[i]);
                }
            }
        }

        return (st.size() + st1.size());
        
    }
};