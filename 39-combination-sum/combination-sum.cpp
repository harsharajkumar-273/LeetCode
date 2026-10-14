class Solution {
public:
vector<vector<int>> result;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(candidates , curr, 0, target);
        return result;
    }
    void backtrack(vector<int>& candidates, vector<int>& curr, int index , int remaining){
    if(remaining ==0){
        result.push_back(curr);
        return;
    }
    if(remaining<0 ||candidates.size()==index){
        return;
    }

    curr.push_back(candidates[index]);
    backtrack(candidates , curr, index, remaining - candidates[index]);
    curr.pop_back();
    backtrack(candidates , curr, index+1,remaining);
    }
};