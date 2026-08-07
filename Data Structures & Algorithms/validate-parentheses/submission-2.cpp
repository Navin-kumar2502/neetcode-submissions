class Solution {
public:
    bool isValid(string s) {
       unordered_map<char,char> m = {{')','('},{']','['},{'}','{'}};
       stack<char> st;
       for(char s1:s){
        if(m.count(s1)){
            if(!st.empty() && st.top()==m[s1]){st.pop();}
            else{
                return false;
            }
        }
        else{
            st.push(s1);
        }
       } 
       return st.empty();
    }
};
