class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int a = nums.size();
        if(a<=1){
            return false;
        }
        for(int i=0 ; i < a-1 ;i++){
            for(int j= i+1 ; j<a;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};