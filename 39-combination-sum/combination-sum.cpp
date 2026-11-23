class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> sub;
        backtrack(target, candidates, result, sub, 0);
        return result;
    }
    void backtrack(int target,vector<int>& candidates,vector<vector<int>>& result,vector<int>& sub, int index){
        if(target ==0){
            result.push_back(sub);
            return ;

        }
        if(index>=candidates.size() || target<0){
            return ;
        }
        sub.push_back(candidates[index]);
        backtrack(target - candidates[index], candidates, result, sub, index);
        sub.pop_back();
        backtrack(target, candidates, result, sub, index + 1);
    }
};