class Solution {
public:
    bool isPalindrome(string s) {
        string f="";
        string b="";
        int a=s.size();
        for(int i=0;i<a;i++){
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                f+=tolower(s[i]);
            }
        }
        for(int i=a-1;i>=0;i--){
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                b+=tolower(s[i]);
            }
        }
        return f==b;
    }
};
