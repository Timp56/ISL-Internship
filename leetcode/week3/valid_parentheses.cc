class Solution { //This is inccorect I didn't know how to complete this one
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto i:s) 
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  
        {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};