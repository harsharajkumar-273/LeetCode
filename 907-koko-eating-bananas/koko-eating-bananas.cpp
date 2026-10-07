class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int n = piles.size();
        int end = *max_element(piles.begin(),piles.end());
        while(start<=end){
            long long sum =0;
            int m = (start+end)/2;
            for(int num:piles){
                sum += (num+m-1)/m;
            }
            if(sum<=h)end = m-1;
            else start = m+1;
        }
        return start;

    }
};