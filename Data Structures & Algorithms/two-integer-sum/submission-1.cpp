class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
       vector<pair<int,int>> a;
       for(int i=0;i<nums.size();i++){
        a.push_back({nums[i],i});
       }
       sort(a.begin(),a.end());
       int i=0;
       int j=nums.size()-1;
       while(i<j){
        int curr=a[i].first+a[j].first;
        if(curr==t){ 
            return {min(a[i].second,a[j].second),max(a[i].second,a[j].second)};
        }
        else if(curr<t){
            i++;
        }
        else{
            j--;
        }
       }
       return {};
    }
};
