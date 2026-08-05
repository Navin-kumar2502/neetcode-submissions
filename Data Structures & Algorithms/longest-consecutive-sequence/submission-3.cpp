class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.insert(nums.begin(),nums.end());
        int ans=0;
        for(int i : nums){
            if(s.find(i-1)==s.end()){
                int res=1;
                while(s.find(i+res)!=s.end()){
                    res++;
                }
                ans=max(ans,res);
            }
        }
        return ans;
    }
};
