class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int numofans=0;


        unordered_map<int, int> map;
               map[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int diff =  sum-k;
            if (map.contains(diff)) {
                numofans +=map[diff];
            }
            map[sum]++;
        }
        return numofans;
    }
};