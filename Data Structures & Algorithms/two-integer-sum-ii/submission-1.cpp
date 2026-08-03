class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
       int l=0,r=n.size()-1;
       while(l<r){
        int sum1=n[l]+n[r];
        if(sum1==t){
            return {l+1,r+1};
        }
        else if(sum1>t){
            r--;
        }
        else{
            l++;
        }
       }
        return {};
    }
};
