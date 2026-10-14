class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        backtrack(nums ,curr, 0);
        return ans;
    }
    void backtrack(vector<int>& nums , vector<int>& curr, int index){
        if(index == nums.size()){
            ans.push_back(curr);
            return ;
        }
        curr.push_back(nums[index]);
        backtrack(nums, curr, index+1);
        curr.pop_back();
        int next = index+1;
        while( next<nums.size() && nums[index] == nums[next] ){
            next++;
        }
        backtrack(nums,curr, next);

    }
};
