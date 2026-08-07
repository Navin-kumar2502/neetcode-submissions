class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> v;
        vector<int> ans(temperatures.size(),0);
        int i=0;
        for(int t:temperatures){
            while(!v.empty() && t>v.top().first){
                ans[v.top().second]=(i-v.top().second);
                v.pop();
            }
            v.push({t,i});
            i++;
        }
        return ans;
    }
};
