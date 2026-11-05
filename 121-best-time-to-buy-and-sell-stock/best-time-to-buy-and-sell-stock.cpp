class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxvalue = 0;
        while(right<prices.size()){
            if(prices[left]<prices[right]){
                maxvalue = max(maxvalue, prices[right]-prices[left]);
            }
            else{
                left = right;
            }
            right++;
        }
        return maxvalue;

    }
};