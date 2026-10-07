class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(),weights.end(),0);
        while(start<end){
            int mid = start+(end-start)/2;
            if(isPossible(weights,days,mid)){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;


    }

    bool isPossible(vector<int>& weights, int days, int mid){
        int countdays = 1;
        int sum =0;
        for(int i =0;i<weights.size();i++){
            if(sum+weights[i]>mid){
                countdays++;
                sum =weights[i];
            }
            else{
                sum+=weights[i];
            }
        }
        return countdays<=days;
    }
};