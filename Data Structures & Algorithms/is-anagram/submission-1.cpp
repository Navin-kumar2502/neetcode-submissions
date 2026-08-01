class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        vector<int> v1(26,0);
        if(s.size()!=t.size()){return false;}
        int a = s.size();
        for(int i=0;i<a;i++){
            v[int(s[i]-97)]++;
            v1[int(t[i])-97]++;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=v1[i]){
                return false;
            }
        }
        return true;
    }
};
