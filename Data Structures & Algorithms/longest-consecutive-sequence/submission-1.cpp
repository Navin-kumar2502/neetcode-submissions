class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int max1=1;
        int max2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0){
                continue;
            }
            else if(nums[i]-nums[i-1]==1){
                max1++;
            }
            else{
                max2=max(max1,max2);
                max1=1;
            }
        }
        max2=max(max1,max2);
        return max2;
    }
};
