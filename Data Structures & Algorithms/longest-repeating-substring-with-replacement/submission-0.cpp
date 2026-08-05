class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int l=0;
        int ans=0;
        int re=0;
        for(int r=0;r<s.size();r++){
            m[s[r]]++;
            re=max(re,m[s[r]]);
            while(r-l+1-re>k){
                m[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);

        }
        return ans;
    }
};
