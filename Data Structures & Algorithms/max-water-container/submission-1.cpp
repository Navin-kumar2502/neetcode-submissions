class Solution {
public:
    int maxArea(vector<int>& heights) {
        int a=heights.size();
        int area1=0;
        int l=0,r=a-1;
        while(l<r){
            area1=max(area1,min(heights[l],heights[r])*(r-l));
            if(heights[l]<=heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return area1;

    }
};
