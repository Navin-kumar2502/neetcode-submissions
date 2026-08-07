class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0){
            return n;
        }
        int l=0,r=n-1;
        int lmax=height[0],rmax=height[r];
        int ans=0;
        while(l<r){
            if(lmax<=rmax){
                l++;
                lmax=max(height[l],lmax);
                ans+=lmax-height[l];
            }
            else if(rmax<lmax){
                r--;
                rmax=max(height[r],rmax);
                ans+=rmax-height[r];
            }
        }
        return ans;

    }
};
