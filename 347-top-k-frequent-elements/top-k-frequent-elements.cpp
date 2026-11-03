class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int>map;
        for(int num:nums){
            map[num]++;
        }
        vector<vector<int>> arr;
        for(const auto& p:map){
            arr.push_back({p.second,p.first});
        }
        std::sort(arr.begin(),arr.end());
        vector<int> array;
        for(int i = arr.size()-1;k>=1;i--){
            array.push_back(arr[i][1]);
            k--;
        }
        return array;
    }
};