 int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int len=0;

        for(int i=0;i<s.length();i++){
            
            if(s[i]=='('){
                
                st.push(i);

            }
            else{
                st.pop();
                if(!st.empty()){
                   int length=i-st.top();
                   len=max(len,length);
                }
                else{
                    st.push(i);
                }
            }
        }
            
            
        
        
        return len;
    }
};
