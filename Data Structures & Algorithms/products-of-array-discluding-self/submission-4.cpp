class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a=1;
        vector<int> pre(nums.size(),1);
        pre[0]=1;
        vector<int> suf(nums.size(),1);
        suf[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            pre[i]=nums[i-1]*pre[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suf[i]=nums[i+1]*suf[i+1];
        }
        for(int i =0;i<nums.size();i++){
            nums[i]=pre[i]*suf[i];
        }
        return nums;
    }
};
