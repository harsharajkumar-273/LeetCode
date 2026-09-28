class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int num:nums){
            s.insert(num);
        }
        for(int i =0;i<=n;i++){
            if(s.find(i) == s.end()){
                return i;
            }
        }
        return -1;
    }
};