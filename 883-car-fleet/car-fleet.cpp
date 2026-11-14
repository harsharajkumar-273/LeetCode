class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int output = 0;
        vector<pair<int, int>> pairs;
        for(int i =0;i<position.size();i++){
            pairs.push_back({position[i],speed[i]});
        }
        sort(pairs.rbegin(),pairs.rend());
        double fleettime = 0.0;
        for(int i=0;i<pairs.size();i++){
            double time = (double)(target - pairs[i].first)/pairs[i].second;
            if(time>fleettime){
                output++;
                fleettime = time ;
            }
        
        }
        return output ;

    }
};