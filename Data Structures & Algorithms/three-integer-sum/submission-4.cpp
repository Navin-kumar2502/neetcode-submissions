class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            int c=nums[i];
            if(c>0){break;}
            if(i>0 && nums[i]==nums[i-1]){continue;}
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]+c==0){
                    res.push_back({c,nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r){
                        if(nums[l]!=nums[l-1]){
                            break;
                        }
                        l++;
                    }
                }
                else if(nums[l]+nums[r]+c>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return res;
    }
};
