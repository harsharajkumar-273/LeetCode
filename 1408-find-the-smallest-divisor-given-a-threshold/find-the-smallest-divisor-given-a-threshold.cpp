class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left =1 ;
        int n = nums.size();
        int end = *max_element(nums.begin(),nums.end());
        while(left<=end){
            int m = (left+end)/2;
            int sum =0;
            for(int num :nums){
                sum+=(num+m-1)/m;
            }
            if(sum>threshold){
                left= m+1;
            }
            else end = m-1;
        }
        return left;
    }
};