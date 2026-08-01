class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        if(s.size()!=t.size()){return false;}
        int a = s.size();
        for(int i=0;i<a;i++){
            v[int(s[i]-'a')]++;
            v[int(t[i])-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]){
                return false;
            }
        }
        return true;
    }
};
