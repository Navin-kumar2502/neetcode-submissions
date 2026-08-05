class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> m;
        int l=0;
        int r=0;
        int max1=0;
        while(l<=r&&r<s.size()){
            if(m.find(s[r])!=m.end()){
                l=max(l,m[s[r]]+1);
            }
            m[s[r]]=r;
            max1=max(max1,r-l+1);
            r++;
        }
        return max1;
    }
};
