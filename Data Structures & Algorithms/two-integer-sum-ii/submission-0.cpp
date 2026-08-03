class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        for(int i=0;i<n.size();i++){
            int t1=t-n[i];
            int l=i+1,r=n.size()-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(n[mid]==t1){
                    return {i+1,mid+1};
                }
                else if(n[mid]>t1){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return {};
    }
};
