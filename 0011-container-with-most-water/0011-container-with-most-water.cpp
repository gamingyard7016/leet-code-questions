class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,l=0,r=height.size()-1;
        while(l<r){
            int h = min(height[l],height[r]);
            int b = r-l;
            int area = h*b;
            ans = max(ans,area);
            height[r] < height[l] ? r-- : l++;
        }
        return ans;
    }
};