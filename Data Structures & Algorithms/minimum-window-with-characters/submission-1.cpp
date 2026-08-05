class Solution {
public:

    string minWindow(string s, string t) {
        vector<int> a(128,0);
        vector<int> b(128,0);
        for(char c : t) a[c]++;
        
        int l = 0, minL = -1, minLen = INT_MAX, count = 0;
        for(int r = 0; r < s.size(); r++) {
            if (++b[s[r]] <= a[s[r]]) count++;
            
            while(count == t.size()) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    minL = l;
                }
                if (--b[s[l]] < a[s[l]]) count--;
                l++;

            }
        }
        return minL == -1 ? "" : s.substr(minL, minLen);
    }
};
