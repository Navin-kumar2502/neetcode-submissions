class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int a = nums.size();
        if(a<=1){
            return false;
        }
        unordered_set<int> b ;
        for(int i=0;i<a;i++){
            if(b.count(nums[i])){
                return true;
            }
            b.insert(nums[i]);
        }
        return false;
    }
};