class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++){
        int d=t-nums[i];
        if(m.find(d)!=m.end()){
            return{m[d],i};
        }
        else{
            m[nums[i]]=i;
        }
       }
       return {};
    }
};
