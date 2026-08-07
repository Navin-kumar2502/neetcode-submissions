class Solution {
public:
int calculate(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default:  return 0;
    }
}
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& s:tokens){
            if(s == "+" || s == "*" || s == "-" || s == "/"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int res=calculate(a,b,s[0]);
                st.push(res);
            }
            else{st.push(stoi(s));}
        }
        return st.top();
    }
};
