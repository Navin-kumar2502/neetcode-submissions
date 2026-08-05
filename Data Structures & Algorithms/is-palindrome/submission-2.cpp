class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,r=s.size()-1;
        while(i<r){
            while((i<r)&&!((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))){
                i++;
            }
            while((r>i)&&!((s[r]>='a'&& s[r]<='z')||(s[r]>='A'&&s[r]<='Z')||(s[r]>='0'&&s[r]<='9'))){
                r--;
            }
            if(tolower(s[i])!=tolower(s[r])){
                return false;
            }
            i++,r--;
        }
        return true;
    }
};
