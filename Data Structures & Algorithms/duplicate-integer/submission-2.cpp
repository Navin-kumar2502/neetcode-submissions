class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int a = nums.size();
        if(a<=1){
            return false;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<=a-1;i++){
            if(nums[i]==nums[i-1]){return true;}
        }
        return false;
    }
};