class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res1;
        for(auto& s:strs){
            vector<int> a(26,0);
            for(char s1:s){
                a[s1-'a']++;
            }
            string ans="";
            for(int i=0;i<26;i++){
                for(int j=0;j<a[i];j++){
                    ans+=char(97+i);
                }
            }
            res1[ans].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& str : res1){
            res.push_back(str.second);
        }
        return res;
    }
};
