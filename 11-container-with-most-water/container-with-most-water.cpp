class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxi = 0;
        while(left<right){
            int length = min(height[left],height[right]);
            int breadth = right - left;
            maxi = max(maxi,length*breadth);
            if(height[left]>height[right])right--;
            else left++;
        }
        return maxi;
    }
};